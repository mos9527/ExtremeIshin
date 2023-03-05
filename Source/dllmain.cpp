#include <pch.h>
#include <toml.hpp>
#define CONFIG_FILENAME L"ExtremeIshin.toml"
// Signatures
SIG_SCAN
(
    sigUEngine_SetMaxFPS,
    0x143a1fd00,
    "\x48\x89\x5C\x24\x00\x57\x48\x83\xEC\x40\x48\x8B\x3D\x00\x00\x00\x00\x0F\x29\x74\x24\x00\x48\x8B\xCF\x0F\x28\xF1\x48\x8B\x07",
    "xxxx?xxxxxxxx????xxxx?xxxxxxxxx"
)

using namespace std::string_view_literals;
static constexpr std::string_view defaultConfig = R"(
[FPSOverride]
30FPSOverride = 60.0
60FPSOverride = 60.0
DefaultFPSOverride = 60.0
)"sv;

#define READ_VALUE_FROM_THISTBL(NAME, TYPE, VAR) { \
    VAR = thisTbl[NAME].value<TYPE>().value_or(VAR); \
}
struct FPSOverrideSettings {
    float ThirtyFPSOverride = 60.0f;
    float SixtyFPSOverride = 60.0f;
    float DefaultFPSOverride = 60.0f;

    void ReadConfig(toml::table tbl) {
        auto thisTbl = tbl["FPSOverride"];
        READ_VALUE_FROM_THISTBL("30FPSOverride", float, ThirtyFPSOverride);
        READ_VALUE_FROM_THISTBL("60FPSOverride", float, SixtyFPSOverride);
        READ_VALUE_FROM_THISTBL("DefaultFPSOverride", float, DefaultFPSOverride);
        LOG("FPS Override: 30->%f 60->%f Others->%f.", ThirtyFPSOverride, SixtyFPSOverride, DefaultFPSOverride);
    }
} fpsOverrideSettings;

HOOK(void, __fastcall, _UEngine_SetMaxFPS, sigUEngine_SetMaxFPS(), void* _this, float MaxFPS) {   
    float targetFPS = fpsOverrideSettings.DefaultFPSOverride;
    if (MaxFPS == 30.0f) targetFPS = fpsOverrideSettings.ThirtyFPSOverride;
    if (MaxFPS == 60.0f) targetFPS = fpsOverrideSettings.SixtyFPSOverride;
    LOG("FPS Override: Overriding FPS Cap from %f to %f.", MaxFPS, targetFPS);
    original_UEngine_SetMaxFPS(_this, targetFPS);
}

toml::table configTable;

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {       
#ifdef _DEBUG
        // Allocating a debug console
        AllocConsole();
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
        LOG("Debugging now.");
#endif
        // Expand config path from DLL path
        wchar_t _buffer[512] = { 0 };
        GetModuleFileNameW(hModule, _buffer, 512);
        std::wstring configFilePath = _buffer;
        configFilePath = configFilePath.substr(0, configFilePath.find_last_of(L"/\\")) + L"\\" + CONFIG_FILENAME;
        // Parsing w/ toml++
        try {
            configTable = toml::parse_file(configFilePath);
        }
        catch (toml::parse_error err) {
            // Rewrite the config file when it's defect
            std::ofstream configFile(configFilePath);
            configFile << defaultConfig;
            configTable = toml::parse(defaultConfig);
            LOG("Recreated config file.");
        }
        // Let subsequent functions read the rest
        fpsOverrideSettings.ReadConfig(configTable);
        
        INSTALL_HOOK(_UEngine_SetMaxFPS);
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

#include <pch.h>
#include <toml.hpp>
#include <KnownFolders.h>
#include <shlobj.h>
#define CONFIG_FILENAME L"ExtremeIshin.toml"
// DLL Spoofing
#pragma comment(linker, "/EXPORT:CloseDriver=C:\\Windows\\System32\\winmm.CloseDriver")
#pragma comment(linker, "/EXPORT:DefDriverProc=C:\\Windows\\System32\\winmm.DefDriverProc")
#pragma comment(linker, "/EXPORT:DriverCallback=C:\\Windows\\System32\\winmm.DriverCallback")
#pragma comment(linker, "/EXPORT:DrvGetModuleHandle=C:\\Windows\\System32\\winmm.DrvGetModuleHandle")
#pragma comment(linker, "/EXPORT:GetDriverModuleHandle=C:\\Windows\\System32\\winmm.GetDriverModuleHandle")
#pragma comment(linker, "/EXPORT:NotifyCallbackData=C:\\Windows\\System32\\winmm.NotifyCallbackData")
#pragma comment(linker, "/EXPORT:OpenDriver=C:\\Windows\\System32\\winmm.OpenDriver")
#pragma comment(linker, "/EXPORT:PlaySound=C:\\Windows\\System32\\winmm.PlaySound")
#pragma comment(linker, "/EXPORT:PlaySoundA=C:\\Windows\\System32\\winmm.PlaySoundA")
#pragma comment(linker, "/EXPORT:PlaySoundW=C:\\Windows\\System32\\winmm.PlaySoundW")
#pragma comment(linker, "/EXPORT:SendDriverMessage=C:\\Windows\\System32\\winmm.SendDriverMessage")
#pragma comment(linker, "/EXPORT:WOW32DriverCallback=C:\\Windows\\System32\\winmm.WOW32DriverCallback")
#pragma comment(linker, "/EXPORT:WOW32ResolveMultiMediaHandle=C:\\Windows\\System32\\winmm.WOW32ResolveMultiMediaHandle")
#pragma comment(linker, "/EXPORT:WOWAppExit=C:\\Windows\\System32\\winmm.WOWAppExit")
#pragma comment(linker, "/EXPORT:aux32Message=C:\\Windows\\System32\\winmm.aux32Message")
#pragma comment(linker, "/EXPORT:auxGetDevCapsA=C:\\Windows\\System32\\winmm.auxGetDevCapsA")
#pragma comment(linker, "/EXPORT:auxGetDevCapsW=C:\\Windows\\System32\\winmm.auxGetDevCapsW")
#pragma comment(linker, "/EXPORT:auxGetNumDevs=C:\\Windows\\System32\\winmm.auxGetNumDevs")
#pragma comment(linker, "/EXPORT:auxGetVolume=C:\\Windows\\System32\\winmm.auxGetVolume")
#pragma comment(linker, "/EXPORT:auxOutMessage=C:\\Windows\\System32\\winmm.auxOutMessage")
#pragma comment(linker, "/EXPORT:auxSetVolume=C:\\Windows\\System32\\winmm.auxSetVolume")
#pragma comment(linker, "/EXPORT:joy32Message=C:\\Windows\\System32\\winmm.joy32Message")
#pragma comment(linker, "/EXPORT:joyConfigChanged=C:\\Windows\\System32\\winmm.joyConfigChanged")
#pragma comment(linker, "/EXPORT:joyGetDevCapsA=C:\\Windows\\System32\\winmm.joyGetDevCapsA")
#pragma comment(linker, "/EXPORT:joyGetDevCapsW=C:\\Windows\\System32\\winmm.joyGetDevCapsW")
#pragma comment(linker, "/EXPORT:joyGetNumDevs=C:\\Windows\\System32\\winmm.joyGetNumDevs")
#pragma comment(linker, "/EXPORT:joyGetPos=C:\\Windows\\System32\\winmm.joyGetPos")
#pragma comment(linker, "/EXPORT:joyGetPosEx=C:\\Windows\\System32\\winmm.joyGetPosEx")
#pragma comment(linker, "/EXPORT:joyGetThreshold=C:\\Windows\\System32\\winmm.joyGetThreshold")
#pragma comment(linker, "/EXPORT:joyReleaseCapture=C:\\Windows\\System32\\winmm.joyReleaseCapture")
#pragma comment(linker, "/EXPORT:joySetCapture=C:\\Windows\\System32\\winmm.joySetCapture")
#pragma comment(linker, "/EXPORT:joySetThreshold=C:\\Windows\\System32\\winmm.joySetThreshold")
#pragma comment(linker, "/EXPORT:mci32Message=C:\\Windows\\System32\\winmm.mci32Message")
#pragma comment(linker, "/EXPORT:mciDriverNotify=C:\\Windows\\System32\\winmm.mciDriverNotify")
#pragma comment(linker, "/EXPORT:mciDriverYield=C:\\Windows\\System32\\winmm.mciDriverYield")
#pragma comment(linker, "/EXPORT:mciExecute=C:\\Windows\\System32\\winmm.mciExecute")
#pragma comment(linker, "/EXPORT:mciFreeCommandResource=C:\\Windows\\System32\\winmm.mciFreeCommandResource")
#pragma comment(linker, "/EXPORT:mciGetCreatorTask=C:\\Windows\\System32\\winmm.mciGetCreatorTask")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDA=C:\\Windows\\System32\\winmm.mciGetDeviceIDA")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDA=C:\\Windows\\System32\\winmm.mciGetDeviceIDFromElementIDA")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDW=C:\\Windows\\System32\\winmm.mciGetDeviceIDFromElementIDW")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDW=C:\\Windows\\System32\\winmm.mciGetDeviceIDW")
#pragma comment(linker, "/EXPORT:mciGetDriverData=C:\\Windows\\System32\\winmm.mciGetDriverData")
#pragma comment(linker, "/EXPORT:mciGetErrorStringA=C:\\Windows\\System32\\winmm.mciGetErrorStringA")
#pragma comment(linker, "/EXPORT:mciGetErrorStringW=C:\\Windows\\System32\\winmm.mciGetErrorStringW")
#pragma comment(linker, "/EXPORT:mciGetYieldProc=C:\\Windows\\System32\\winmm.mciGetYieldProc")
#pragma comment(linker, "/EXPORT:mciLoadCommandResource=C:\\Windows\\System32\\winmm.mciLoadCommandResource")
#pragma comment(linker, "/EXPORT:mciSendCommandA=C:\\Windows\\System32\\winmm.mciSendCommandA")
#pragma comment(linker, "/EXPORT:mciSendCommandW=C:\\Windows\\System32\\winmm.mciSendCommandW")
#pragma comment(linker, "/EXPORT:mciSendStringA=C:\\Windows\\System32\\winmm.mciSendStringA")
#pragma comment(linker, "/EXPORT:mciSendStringW=C:\\Windows\\System32\\winmm.mciSendStringW")
#pragma comment(linker, "/EXPORT:mciSetDriverData=C:\\Windows\\System32\\winmm.mciSetDriverData")
#pragma comment(linker, "/EXPORT:mciSetYieldProc=C:\\Windows\\System32\\winmm.mciSetYieldProc")
#pragma comment(linker, "/EXPORT:mid32Message=C:\\Windows\\System32\\winmm.mid32Message")
#pragma comment(linker, "/EXPORT:midiConnect=C:\\Windows\\System32\\winmm.midiConnect")
#pragma comment(linker, "/EXPORT:midiDisconnect=C:\\Windows\\System32\\winmm.midiDisconnect")
#pragma comment(linker, "/EXPORT:midiInAddBuffer=C:\\Windows\\System32\\winmm.midiInAddBuffer")
#pragma comment(linker, "/EXPORT:midiInClose=C:\\Windows\\System32\\winmm.midiInClose")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsA=C:\\Windows\\System32\\winmm.midiInGetDevCapsA")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsW=C:\\Windows\\System32\\winmm.midiInGetDevCapsW")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextA=C:\\Windows\\System32\\winmm.midiInGetErrorTextA")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextW=C:\\Windows\\System32\\winmm.midiInGetErrorTextW")
#pragma comment(linker, "/EXPORT:midiInGetID=C:\\Windows\\System32\\winmm.midiInGetID")
#pragma comment(linker, "/EXPORT:midiInGetNumDevs=C:\\Windows\\System32\\winmm.midiInGetNumDevs")
#pragma comment(linker, "/EXPORT:midiInMessage=C:\\Windows\\System32\\winmm.midiInMessage")
#pragma comment(linker, "/EXPORT:midiInOpen=C:\\Windows\\System32\\winmm.midiInOpen")
#pragma comment(linker, "/EXPORT:midiInPrepareHeader=C:\\Windows\\System32\\winmm.midiInPrepareHeader")
#pragma comment(linker, "/EXPORT:midiInReset=C:\\Windows\\System32\\winmm.midiInReset")
#pragma comment(linker, "/EXPORT:midiInStart=C:\\Windows\\System32\\winmm.midiInStart")
#pragma comment(linker, "/EXPORT:midiInStop=C:\\Windows\\System32\\winmm.midiInStop")
#pragma comment(linker, "/EXPORT:midiInUnprepareHeader=C:\\Windows\\System32\\winmm.midiInUnprepareHeader")
#pragma comment(linker, "/EXPORT:midiOutCacheDrumPatches=C:\\Windows\\System32\\winmm.midiOutCacheDrumPatches")
#pragma comment(linker, "/EXPORT:midiOutCachePatches=C:\\Windows\\System32\\winmm.midiOutCachePatches")
#pragma comment(linker, "/EXPORT:midiOutClose=C:\\Windows\\System32\\winmm.midiOutClose")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsA=C:\\Windows\\System32\\winmm.midiOutGetDevCapsA")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsW=C:\\Windows\\System32\\winmm.midiOutGetDevCapsW")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextA=C:\\Windows\\System32\\winmm.midiOutGetErrorTextA")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextW=C:\\Windows\\System32\\winmm.midiOutGetErrorTextW")
#pragma comment(linker, "/EXPORT:midiOutGetID=C:\\Windows\\System32\\winmm.midiOutGetID")
#pragma comment(linker, "/EXPORT:midiOutGetNumDevs=C:\\Windows\\System32\\winmm.midiOutGetNumDevs")
#pragma comment(linker, "/EXPORT:midiOutGetVolume=C:\\Windows\\System32\\winmm.midiOutGetVolume")
#pragma comment(linker, "/EXPORT:midiOutLongMsg=C:\\Windows\\System32\\winmm.midiOutLongMsg")
#pragma comment(linker, "/EXPORT:midiOutMessage=C:\\Windows\\System32\\winmm.midiOutMessage")
#pragma comment(linker, "/EXPORT:midiOutOpen=C:\\Windows\\System32\\winmm.midiOutOpen")
#pragma comment(linker, "/EXPORT:midiOutPrepareHeader=C:\\Windows\\System32\\winmm.midiOutPrepareHeader")
#pragma comment(linker, "/EXPORT:midiOutReset=C:\\Windows\\System32\\winmm.midiOutReset")
#pragma comment(linker, "/EXPORT:midiOutSetVolume=C:\\Windows\\System32\\winmm.midiOutSetVolume")
#pragma comment(linker, "/EXPORT:midiOutShortMsg=C:\\Windows\\System32\\winmm.midiOutShortMsg")
#pragma comment(linker, "/EXPORT:midiOutUnprepareHeader=C:\\Windows\\System32\\winmm.midiOutUnprepareHeader")
#pragma comment(linker, "/EXPORT:midiStreamClose=C:\\Windows\\System32\\winmm.midiStreamClose")
#pragma comment(linker, "/EXPORT:midiStreamOpen=C:\\Windows\\System32\\winmm.midiStreamOpen")
#pragma comment(linker, "/EXPORT:midiStreamOut=C:\\Windows\\System32\\winmm.midiStreamOut")
#pragma comment(linker, "/EXPORT:midiStreamPause=C:\\Windows\\System32\\winmm.midiStreamPause")
#pragma comment(linker, "/EXPORT:midiStreamPosition=C:\\Windows\\System32\\winmm.midiStreamPosition")
#pragma comment(linker, "/EXPORT:midiStreamProperty=C:\\Windows\\System32\\winmm.midiStreamProperty")
#pragma comment(linker, "/EXPORT:midiStreamRestart=C:\\Windows\\System32\\winmm.midiStreamRestart")
#pragma comment(linker, "/EXPORT:midiStreamStop=C:\\Windows\\System32\\winmm.midiStreamStop")
#pragma comment(linker, "/EXPORT:mixerClose=C:\\Windows\\System32\\winmm.mixerClose")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsA=C:\\Windows\\System32\\winmm.mixerGetControlDetailsA")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsW=C:\\Windows\\System32\\winmm.mixerGetControlDetailsW")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsA=C:\\Windows\\System32\\winmm.mixerGetDevCapsA")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsW=C:\\Windows\\System32\\winmm.mixerGetDevCapsW")
#pragma comment(linker, "/EXPORT:mixerGetID=C:\\Windows\\System32\\winmm.mixerGetID")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsA=C:\\Windows\\System32\\winmm.mixerGetLineControlsA")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsW=C:\\Windows\\System32\\winmm.mixerGetLineControlsW")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoA=C:\\Windows\\System32\\winmm.mixerGetLineInfoA")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoW=C:\\Windows\\System32\\winmm.mixerGetLineInfoW")
#pragma comment(linker, "/EXPORT:mixerGetNumDevs=C:\\Windows\\System32\\winmm.mixerGetNumDevs")
#pragma comment(linker, "/EXPORT:mixerMessage=C:\\Windows\\System32\\winmm.mixerMessage")
#pragma comment(linker, "/EXPORT:mixerOpen=C:\\Windows\\System32\\winmm.mixerOpen")
#pragma comment(linker, "/EXPORT:mixerSetControlDetails=C:\\Windows\\System32\\winmm.mixerSetControlDetails")
#pragma comment(linker, "/EXPORT:mmDrvInstall=C:\\Windows\\System32\\winmm.mmDrvInstall")
#pragma comment(linker, "/EXPORT:mmGetCurrentTask=C:\\Windows\\System32\\winmm.mmGetCurrentTask")
#pragma comment(linker, "/EXPORT:mmTaskBlock=C:\\Windows\\System32\\winmm.mmTaskBlock")
#pragma comment(linker, "/EXPORT:mmTaskCreate=C:\\Windows\\System32\\winmm.mmTaskCreate")
#pragma comment(linker, "/EXPORT:mmTaskSignal=C:\\Windows\\System32\\winmm.mmTaskSignal")
#pragma comment(linker, "/EXPORT:mmTaskYield=C:\\Windows\\System32\\winmm.mmTaskYield")
#pragma comment(linker, "/EXPORT:mmioAdvance=C:\\Windows\\System32\\winmm.mmioAdvance")
#pragma comment(linker, "/EXPORT:mmioAscend=C:\\Windows\\System32\\winmm.mmioAscend")
#pragma comment(linker, "/EXPORT:mmioClose=C:\\Windows\\System32\\winmm.mmioClose")
#pragma comment(linker, "/EXPORT:mmioCreateChunk=C:\\Windows\\System32\\winmm.mmioCreateChunk")
#pragma comment(linker, "/EXPORT:mmioDescend=C:\\Windows\\System32\\winmm.mmioDescend")
#pragma comment(linker, "/EXPORT:mmioFlush=C:\\Windows\\System32\\winmm.mmioFlush")
#pragma comment(linker, "/EXPORT:mmioGetInfo=C:\\Windows\\System32\\winmm.mmioGetInfo")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcA=C:\\Windows\\System32\\winmm.mmioInstallIOProcA")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcW=C:\\Windows\\System32\\winmm.mmioInstallIOProcW")
#pragma comment(linker, "/EXPORT:mmioOpenA=C:\\Windows\\System32\\winmm.mmioOpenA")
#pragma comment(linker, "/EXPORT:mmioOpenW=C:\\Windows\\System32\\winmm.mmioOpenW")
#pragma comment(linker, "/EXPORT:mmioRead=C:\\Windows\\System32\\winmm.mmioRead")
#pragma comment(linker, "/EXPORT:mmioRenameA=C:\\Windows\\System32\\winmm.mmioRenameA")
#pragma comment(linker, "/EXPORT:mmioRenameW=C:\\Windows\\System32\\winmm.mmioRenameW")
#pragma comment(linker, "/EXPORT:mmioSeek=C:\\Windows\\System32\\winmm.mmioSeek")
#pragma comment(linker, "/EXPORT:mmioSendMessage=C:\\Windows\\System32\\winmm.mmioSendMessage")
#pragma comment(linker, "/EXPORT:mmioSetBuffer=C:\\Windows\\System32\\winmm.mmioSetBuffer")
#pragma comment(linker, "/EXPORT:mmioSetInfo=C:\\Windows\\System32\\winmm.mmioSetInfo")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCA=C:\\Windows\\System32\\winmm.mmioStringToFOURCCA")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCW=C:\\Windows\\System32\\winmm.mmioStringToFOURCCW")
#pragma comment(linker, "/EXPORT:mmioWrite=C:\\Windows\\System32\\winmm.mmioWrite")
#pragma comment(linker, "/EXPORT:mmsystemGetVersion=C:\\Windows\\System32\\winmm.mmsystemGetVersion")
#pragma comment(linker, "/EXPORT:mod32Message=C:\\Windows\\System32\\winmm.mod32Message")
#pragma comment(linker, "/EXPORT:mxd32Message=C:\\Windows\\System32\\winmm.mxd32Message")
#pragma comment(linker, "/EXPORT:sndPlaySoundA=C:\\Windows\\System32\\winmm.sndPlaySoundA")
#pragma comment(linker, "/EXPORT:sndPlaySoundW=C:\\Windows\\System32\\winmm.sndPlaySoundW")
#pragma comment(linker, "/EXPORT:tid32Message=C:\\Windows\\System32\\winmm.tid32Message")
#pragma comment(linker, "/EXPORT:timeBeginPeriod=C:\\Windows\\System32\\winmm.timeBeginPeriod")
#pragma comment(linker, "/EXPORT:timeEndPeriod=C:\\Windows\\System32\\winmm.timeEndPeriod")
#pragma comment(linker, "/EXPORT:timeGetDevCaps=C:\\Windows\\System32\\winmm.timeGetDevCaps")
#pragma comment(linker, "/EXPORT:timeGetSystemTime=C:\\Windows\\System32\\winmm.timeGetSystemTime")
#pragma comment(linker, "/EXPORT:timeGetTime=C:\\Windows\\System32\\winmm.timeGetTime")
#pragma comment(linker, "/EXPORT:timeKillEvent=C:\\Windows\\System32\\winmm.timeKillEvent")
#pragma comment(linker, "/EXPORT:timeSetEvent=C:\\Windows\\System32\\winmm.timeSetEvent")
#pragma comment(linker, "/EXPORT:waveInAddBuffer=C:\\Windows\\System32\\winmm.waveInAddBuffer")
#pragma comment(linker, "/EXPORT:waveInClose=C:\\Windows\\System32\\winmm.waveInClose")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsA=C:\\Windows\\System32\\winmm.waveInGetDevCapsA")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsW=C:\\Windows\\System32\\winmm.waveInGetDevCapsW")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextA=C:\\Windows\\System32\\winmm.waveInGetErrorTextA")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextW=C:\\Windows\\System32\\winmm.waveInGetErrorTextW")
#pragma comment(linker, "/EXPORT:waveInGetID=C:\\Windows\\System32\\winmm.waveInGetID")
#pragma comment(linker, "/EXPORT:waveInGetNumDevs=C:\\Windows\\System32\\winmm.waveInGetNumDevs")
#pragma comment(linker, "/EXPORT:waveInGetPosition=C:\\Windows\\System32\\winmm.waveInGetPosition")
#pragma comment(linker, "/EXPORT:waveInMessage=C:\\Windows\\System32\\winmm.waveInMessage")
#pragma comment(linker, "/EXPORT:waveInOpen=C:\\Windows\\System32\\winmm.waveInOpen")
#pragma comment(linker, "/EXPORT:waveInPrepareHeader=C:\\Windows\\System32\\winmm.waveInPrepareHeader")
#pragma comment(linker, "/EXPORT:waveInReset=C:\\Windows\\System32\\winmm.waveInReset")
#pragma comment(linker, "/EXPORT:waveInStart=C:\\Windows\\System32\\winmm.waveInStart")
#pragma comment(linker, "/EXPORT:waveInStop=C:\\Windows\\System32\\winmm.waveInStop")
#pragma comment(linker, "/EXPORT:waveInUnprepareHeader=C:\\Windows\\System32\\winmm.waveInUnprepareHeader")
#pragma comment(linker, "/EXPORT:waveOutBreakLoop=C:\\Windows\\System32\\winmm.waveOutBreakLoop")
#pragma comment(linker, "/EXPORT:waveOutClose=C:\\Windows\\System32\\winmm.waveOutClose")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsA=C:\\Windows\\System32\\winmm.waveOutGetDevCapsA")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsW=C:\\Windows\\System32\\winmm.waveOutGetDevCapsW")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextA=C:\\Windows\\System32\\winmm.waveOutGetErrorTextA")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextW=C:\\Windows\\System32\\winmm.waveOutGetErrorTextW")
#pragma comment(linker, "/EXPORT:waveOutGetID=C:\\Windows\\System32\\winmm.waveOutGetID")
#pragma comment(linker, "/EXPORT:waveOutGetNumDevs=C:\\Windows\\System32\\winmm.waveOutGetNumDevs")
#pragma comment(linker, "/EXPORT:waveOutGetPitch=C:\\Windows\\System32\\winmm.waveOutGetPitch")
#pragma comment(linker, "/EXPORT:waveOutGetPlaybackRate=C:\\Windows\\System32\\winmm.waveOutGetPlaybackRate")
#pragma comment(linker, "/EXPORT:waveOutGetPosition=C:\\Windows\\System32\\winmm.waveOutGetPosition")
#pragma comment(linker, "/EXPORT:waveOutGetVolume=C:\\Windows\\System32\\winmm.waveOutGetVolume")
#pragma comment(linker, "/EXPORT:waveOutMessage=C:\\Windows\\System32\\winmm.waveOutMessage")
#pragma comment(linker, "/EXPORT:waveOutOpen=C:\\Windows\\System32\\winmm.waveOutOpen")
#pragma comment(linker, "/EXPORT:waveOutPause=C:\\Windows\\System32\\winmm.waveOutPause")
#pragma comment(linker, "/EXPORT:waveOutPrepareHeader=C:\\Windows\\System32\\winmm.waveOutPrepareHeader")
#pragma comment(linker, "/EXPORT:waveOutReset=C:\\Windows\\System32\\winmm.waveOutReset")
#pragma comment(linker, "/EXPORT:waveOutRestart=C:\\Windows\\System32\\winmm.waveOutRestart")
#pragma comment(linker, "/EXPORT:waveOutSetPitch=C:\\Windows\\System32\\winmm.waveOutSetPitch")
#pragma comment(linker, "/EXPORT:waveOutSetPlaybackRate=C:\\Windows\\System32\\winmm.waveOutSetPlaybackRate")
#pragma comment(linker, "/EXPORT:waveOutSetVolume=C:\\Windows\\System32\\winmm.waveOutSetVolume")
#pragma comment(linker, "/EXPORT:waveOutUnprepareHeader=C:\\Windows\\System32\\winmm.waveOutUnprepareHeader")
#pragma comment(linker, "/EXPORT:waveOutWrite=C:\\Windows\\System32\\winmm.waveOutWrite")
#pragma comment(linker, "/EXPORT:wid32Message=C:\\Windows\\System32\\winmm.wid32Message")
#pragma comment(linker, "/EXPORT:wod32Message=C:\\Windows\\System32\\winmm.wod32Message")
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
        std::wstring selfPath = _buffer;        
        std::wstring configFilePath = selfPath.substr(0, selfPath.find_last_of(L"/\\")) + L"\\" + CONFIG_FILENAME;
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

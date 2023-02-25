# ExtremeIshin - 人中之龙维新 极！增强模组

## 下载及安装
- 在 [Releases](https://github.com/mos9527/ExtremeIshin/releases) 下载模组 `ASI` 文件
- 在 [ThirteenAG/Ultimate-ASI-Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader/releases) 下载 ASI 前置
- 将文件解压至游戏*主程序*目录，如下：
![image](https://user-images.githubusercontent.com/31397301/221357361-15971036-0999-4cbd-aa79-57321087dd5e.png)

该目录在安装目录下 `LikeaDragonIshin\Binaries\Win64`
- **注意** —— 还需更名 `dinput8.dll` 为 `winmm.dll`.
- 启动游戏

## 已有功能
* 自定义 FPS 上限

  过场动画及部分小游戏默认锁定 30 FPS. 部分小游戏锁定 60 FPS. 本 MOD 允许用户更改这些限制

|![image](https://user-images.githubusercontent.com/31397301/221356882-9e8835e8-8021-4d54-9bef-e1583247684d.png)|
|:--:| 
| *120FPS 过场动画* |

|![image](https://user-images.githubusercontent.com/31397301/221356968-786043d9-92cc-417b-92a7-019b03011967.png)|
|:--:| 
| *120FPS 小游戏/卡拉OK* |

* 其他功能还没想好🤔

## 配置文件
配置位于插件目录下的 `ExtremeIshin.toml`， 第一次启动时会自行创建. 配置说明如下：

```toml
[FPSOverride] # 设置 FPS 锁定
30FPSOverride = 60.0 # 调节原 30FPS 锁定 (i.e. 过场动画，卡拉OK）
60FPSOverride = 60.0 # 调节原 60FPS 锁定 (i.e. 钓鱼，劈柴）
DefaultFPSOverride = 60.0 # 调节默认锁定 （i.e. 战斗/自由探索）
```

## 感谢 / Credit
*注：本 MOD 与 `IshinFix` 兼容*

- https://github.com/Lyall/IshinFix
- https://github.com/blueskythlikesclouds/DivaModLoader
- https://github.com/ThirteenAG/Ultimate-ASI-Loader
- https://github.com/marzer/tomlplusplus

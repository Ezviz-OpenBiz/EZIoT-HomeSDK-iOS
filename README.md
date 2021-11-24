# 快速集成
本文主要介绍如何快速将 App SDK 接入到当前工程中去。介绍如何初始化，以及如何在demo中快速运行，快速上手萤石智能的移动应用开发。

## 准备工作
* 安装以下软件：  
    1. Xcode 12.0 或更高版本。  
    2. CocoaPods 1.10.0 或更高版本。
* 您的项目必须面向 iOS 9.0 或更高版本。

## 集成 SDK

### 第一步：创建 IOS 工程
通过 Xcode 创建新的 iOS 项目工程。

### 第二步：通过 CocoaPods 集成
萤石 IoT App SDK 采用 CocoaPods 管理项目组件。 iOS 系统版本需 9.0及以上。 Podfile文件中指定：

```
platform :ios, '9.0'

target 'Your_Project_Name' do
	pod 'EZIoTHomeSDK', '~> 1.0.0'
end
``` 
在 PodFile 目录下，通过终端软件执行 Pod install 命令。然后打开 .xcworkspace 文件，在 Xcode 中查看项目。
```
pod install
``` 
### 第三步：关闭工程 Enable Bitcode
在工程 Targets -> Build Setting -> Enable Bitcode 设置为 NO。

### 第四步：SDK初始化
* 请确保在SDK使用前，进行初始化操作    

```
//初始化 EZIoTBaseSDK
EZIoTBaseConfigParam *configParam = [EZIoTBaseConfigParam new];
configParam.appId = @"Your App ID";
[EZIoTBaseGlobalSetting initSDKWithConfigParam:configParam];

//初始化 EZIoTUserSDK
[EZIoTUserGlobalSetting initSDK];
```

* 如果您的应用需要推送服务，请在 AppDelegate.m 代理方法 - (void)application: didRegisterForRemoteNotificationsWithDeviceToken: 中调用如下方法：

```
[EZIoTUserGlobalSetting application:application didRegisterForRemoteNotificationsWithDeviceToken:devToken];
```

## SDK Demo
SDK Demo 演示了萤石 App SDK 的接入流程以及 SDK 开放的功能，因此通过参考 Demo 可以基本解决再接入过程中碰到的问题。Demo下载地址：[点击下载](https://github.com/Ezviz-OpenBiz/EZIoT-HomeSDK-iOS-Demo)

### Demo 模块介绍：

* 登录模块：包含注册，登录，忘记密码功能
* 家庭模块：包含添加家庭，删除家庭，修改家庭信息，邀请家庭成员和移除家庭成员等功能
* 房间模块：包含添加房间，删除房间，移动房间设备，修改房间信息
* 设备模块：包含从服务器中拉取设备列表，从本地数据库中拉取设备信息，对设备功能点进行操作相关逻辑
* 消息模块：包含消息列表展示，消息操作和消息免打扰开关逻辑
* 配网模块：包含接触式配网  

### 运行 Demo
* 通过 Xcode 打开 EZIoTSmartSDKDemo.xcworkspace 文件，进入工程；
* 在工程 Targets -> Signing & Capabilities -> Signing 中配置您的 Bundle Identifier 和 Provisioning Profile；
* 在项目文件 AppDelegate.m 的 setupAppSDK 方法中设置您的 AppId;
  
**Demo示例：**  

<img src="https://resource.eziot.com/group1/M00/00/81/CtwQE2GbMFiAeuoaAABfnCDPi5s050.PNG" width = "389px" height = "700px"  />
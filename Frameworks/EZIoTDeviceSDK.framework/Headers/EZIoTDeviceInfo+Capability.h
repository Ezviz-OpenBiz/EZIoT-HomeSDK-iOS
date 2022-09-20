//
//  EZIoTDeviceInfo+Capability.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/11/8.
//

#import <EZIoTDeviceSDK/EZIoTDeviceSDK.h>
#import "EZIoTCommonMacro.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTDeviceInfo (Capability)

#pragma mark - 获取能力集BOOL
- (BOOL)judgeDeviceAllDayRecordSwitchSupport;//全天录像开关
- (BOOL)judgeDeviceDefenceSettingSupport;//布撤防开关
- (BOOL)judgeDeviceEncryptSwitchSupport;//视频图像加密
- (BOOL)judgeDevicePrivacySwitchSupport;//隐私保护
- (BOOL)judgeDevicePTZCtlSupport;//云台左右
- (BOOL)judgeDeviceRemindWaySupport;//提醒方式设置
- (BOOL)judgeDeviceSDFormatSupport;//SD卡格式化
- (BOOL)judgeDeviceSDStatusSupport;//查询SD卡存储状态
- (BOOL)judgeDeviceSoundSwitchSupport;//声音开关设置能力
- (BOOL)judgeDeviceStatusLightSwitchSupport;//灯光设置
- (BOOL)judgeDeviceBatteryDeviceP2PSupport;//支持P2P
- (BOOL)judgeDeviceCaptureSupport;//封面抓图
- (BOOL)judgeDevicePlaybackSupport;//录像回放
- (BOOL)judgeDeviceQuickplaySupport;//是否支持调节回放播放速度功能
- (BOOL)judgeDeviceRecordSupport;//录像
- (BOOL)judgeDeviceUnbindSupport;//解绑设备
- (BOOL)judgeDeviceUpgradeSupport;//设备升级
- (BOOL)judgeDeviceVideoSearchSupport;//录像搜索
- (BOOL)judgeDeviceTimezoneSettingSupport;//时区配置
- (BOOL)judgeDeviceFaceFrameMarkSupport;//人型标记
- (BOOL)judgeDeviceCloudSupport;//云存储
- (BOOL)judgeDeviceSupportPlaybackECDHCrypt; //回放全链路加密
- (BOOL)judgeDeviceSupportRealbackECDHCrypt; //预览全链路加密

#pragma mark - 获取能力集 Id Value
- (NSString *)judgeDeviceResolutionSupport;//分辨率 16-9 表示 16:9
- (NSString *)judgeDeviceTalkSupport;//对讲
- (id)judgeDeviceVoiceVolumeSupport;//音量设置
//- (id)judgeDeviceEncryptInfoSupport; //加密状态查询
- (id)judgeDeviceVideoQualitySupport; //码流
- (id)judgeDeviceChannelNoSupport;//通道数
- (id)judgeDeviceNetTypeSupport; //配网类型
- (BOOL)judgeDeviceNatPassSupport; //设备是否支持NAT组合为3-4的NAT穿透
- (id)judgeDeviceReplaySpeedSupport; //支持调节回放播放速度功能
- (id)judgeDeviceSDKCapSupport; //SDK能力级

#pragma mark - 获取能力集

- (BOOL)getNewDeviceSupportByType:(NSString *)supportType;
- (BOOL)getNewDeviceSupportBoolValueByType:(NSString *)supportType;

//返回能力级相关信息（对象类型，NSArray<NSDcitionary*>* or NSDictionary *）
- (id)getNewDeviceSupportObjValueByType:(NSString *)supportType;
- (NSString *)getNewDeviceSupportStringByType:(NSString *)supportType;
//获取V3视频模组设备静态能力
- (BOOL)getCapacitiesDeviceSupportBoolValueByType:(NSString*)capacitieType;
//获取V3视频模组设备静态能力
- (NSUInteger )getCapacitiesDeviceSupportIntegerByType:(NSString*)capacitieType;

- (NSString *)getDeviceSupportStringByType:(IoT_Device_support_type)supportType;
- (BOOL)getDeviceSupportBoolByType:(IoT_Device_support_type)supportType;

@end

NS_ASSUME_NONNULL_END

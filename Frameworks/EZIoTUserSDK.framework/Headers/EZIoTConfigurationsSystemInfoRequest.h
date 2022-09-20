//
//  YSConfigurationsSystemInfo.h
//  YSNetwork
//
//  Created by qiandong on 7/21/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import <EZIoTBaseSDK/YSCommonRequest.h>

@class EZIoTDTOSystemConfigInfo;

@interface EZIoTConfigurationsSystemInfoRequest : YSCommonRequest

- (void)startWithCustomSuccBlock:(void(^)(YSDTOMeta *meta, EZIoTDTOSystemConfigInfo *dto)) succBlock failBlock:(void(^)(NSError* error)) failBlock;

@end

// 系统配置选项
typedef NS_ENUM(NSInteger,EZIoTSystemConfigureType)
{
    EZIoTSystemConfigureP2PEnableType ,                       //是否开启P2P,0：关闭，1：开启
    EZIoTSystemConfigureHttpsEnableType ,                     //是否使用https: 1-https 0-http
    EZIoTSystemConfigureSSPType,                              //客户端使用的协议类型，1-rtsp，2-私有协议，默认是1.
    EZIoTSystemConfigureExperienceDevicePlayTimeType,         //体验设备播放时间，单位：秒
    EZIoTSystemConfigureLoginMinuteType,                      //登录的时候 返回给app 发送给web服务器的网络环境信息的最大时间间隔
    EZIoTSystemConfigureRefleshDevicesMinTimeType,            //刷新设备信息的最短时间间隔
    EZIoTSystemConfigureStreamLimitPlayTimeType,              //返回播放限时时间（单位秒），0表示不限时。默认返回300秒
    EZIoTSystemConfigureUDPEnableType,                        //udp开关,0:关闭，1：开启
    EZIoTSystemConfigureDeviceUpdateTipEnableType,            //设备升级提示,0:关闭，1：开启
    EZIoTSystemConfigureCloudExpiredTimeTipType,              //云存储过期提示时间，默认7
    EZIoTSystemConfigureDeviceUpgradeTipTimeType,             //设备升级时间提示，默认7
    EZIoTSystemConfigureCloudImageExpiredTimeType,            //云存储图片过期天数,默认3天
};
//DTO
@interface EZIoTDTOSystemConfigInfo : NSObject

@property (nonatomic,copy  ) NSString  *userCode;//用于客户端连接设备，16位id
@property (nonatomic,copy  ) NSString  *dclogUrl;//dclog服务器地址 http
@property (nonatomic,copy  ) NSString  *stun1Addr;//stun1服务器地址
@property (nonatomic,assign) NSInteger stun1Port;//stun1服务器端口
@property (nonatomic,copy  ) NSString  *stun2Addr;//stun2服务器地址
@property (nonatomic,assign) NSInteger stun2Port;//stun2服务器端口
@property (nonatomic,copy  ) NSString  *ttsAddr;//tts服务器地址
@property (nonatomic,assign) NSInteger ttsPort;//tts服务器端口
@property (nonatomic,copy  ) NSString  *nTTSAddr;//新的tts服务器地址
@property (nonatomic,assign) NSInteger nTTSPort;//新的tts服务器端口
@property (nonatomic,copy  ) NSString  *pushAddr;//push服务器地址
@property (nonatomic,assign) NSInteger pushHttpPort;//push服务器http端口
@property (nonatomic,assign) NSInteger pushHttpsPort;//push服务器https端口
@property (nonatomic,copy  ) NSString  *authAddr;//认证中心服务器地址
@property (nonatomic,copy  ) NSString  *nodeJsAddr;//nodeJs地址
@property (nonatomic,assign) NSInteger nodeJsHttpPort;//nodeJs端口
@property (nonatomic,copy  ) NSString  *devicePicDomain;//设备图片静态服务器域名(http://static.ys7.com)

//长连接
@property (nonatomic,copy  ) NSString  *pushDasDomain;
@property (nonatomic,assign  ) NSInteger  pushDasPort;

//@property (nonatomic,copy  ) NSString  *experienceUserBuyUrl;//设备购买跳转地址
//@property (nonatomic,copy  ) NSString  *experienceCapacity;//功能权限

@property (nonatomic,copy  ) NSString  *sysConf;//功能权限
@property (nonatomic,assign) NSInteger  p2pCheckInterval;//p2p 2次检查时间

/**
 *  根据类型，获取对应的值
 *
 *  @param type EZIoTSystemConfigureType)
 *
 *  @return NSInteger类型数值
 */
- (NSInteger)getSystemConfigureValueWithConfigureType:(EZIoTSystemConfigureType)type;

@end

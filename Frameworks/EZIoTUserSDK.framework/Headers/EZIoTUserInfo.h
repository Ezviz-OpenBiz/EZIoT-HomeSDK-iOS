//
//  EZIoTUserInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2018/3/15.
//  Copyright © 2021年 ezviz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZIoTUserAreaInfo.h"

@class EZIoTUserTerminalInfo,EZIoTSystemConfigInfo,EZIoTGrayConfigInfo;

@interface EZIoTUserInfo : NSObject

/******************** 基本信息 ************************/

@property (nonatomic, copy) NSString *account;           //账号

@property (nonatomic, copy) NSString *phone;             //电话号码
@property (nonatomic, copy) NSString *email;             //电子邮箱
@property (nonatomic, copy) NSString *userId;            //用户id
@property (nonatomic, copy) NSString *userName;          //用户名

@property (nonatomic, copy) NSString *nickname;          //用户昵称
@property (nonatomic, copy) NSString *birth;             //生日
@property (nonatomic, copy) NSString *avatarPath;        //头像地址(全路径)
@property (nonatomic, assign) NSInteger gender;          //性别

@property (nonatomic, copy) NSString *sessionId;          //登录成功后返回的session id，32位长的唯一字符，有效性24小时
@property (nonatomic, copy) NSString *rfSessionId;        //用于刷新session的凭证，有效期30天

@property (nonatomic, strong) EZIoTUserAreaInfo *areaInfo; //区域信息
@property (nonatomic, strong) EZIoTUserTerminalInfo *terminalInfo; //终端管理信息

@property (nonatomic, assign) BOOL isLogined;          //是否登录，登录成功后为YES
@property (nonatomic, assign) BOOL isAutoLogin;          //是否自动登录，登录成功后默认开启，session有效期内可自动登录

@property (nonatomic, copy) NSString *regDate;            //用户注册时间戳
@property (nonatomic, copy) NSString *lastLoginTime;      //最后一次登录时间，格式为：yyyy-MM-dd HH:mm:ss

@property (nonatomic, copy) NSString *deviceToken; //推送token

@property (nonatomic, copy) NSString *curFamilyId;
@property (nonatomic, copy) NSString *curFamilyName;
@property (nonatomic, assign) BOOL isCurFamilyOwn;
@property (nonatomic, copy) NSString *defaultGroupId;
@property (nonatomic, copy) NSString *curGroupId;
@property (nonatomic, copy) NSString *curGroupName;

/******************** 扩展信息 ************************/
@property (nonatomic, strong) EZIoTSystemConfigInfo * systemConfig;
@property (nonatomic, strong) EZIoTGrayConfigInfo * grayConfig;

+ (EZIoTUserInfo *)getInstance;


/// 退出账户时需清空用户数据
- (void)clearForLoginOut;

/// 注销账户时需清空用户数据
- (void)clearForDelAccount;

@end



@interface EZIoTSystemConfigInfo : NSObject

@property (nonatomic, copy  ) NSString             *userCode;               //用于客户端连接设备，16位id
@property (nonatomic, assign) NSInteger            enableNewP2p;            //预打洞p2p开关 0：关 1：开
@property (nonatomic, assign) NSInteger            p2pCheckInterval;        //p2p 2次检查时间
@property (nonatomic, assign) NSInteger            useHttps;                //是否适用https
@property (nonatomic, assign) NSInteger            SSP;                     //客户端使用的协议类型，1-rtsp，2-私有协议，默认是1.
@property (nonatomic, assign) NSInteger            enableUdp;               //流媒体私有协议udp开关 0：关 1：开

@property (nonatomic,copy  ) NSString              *dclogUrl;//dclog服务器地址
@property (nonatomic,copy  ) NSString              *stun1Addr;//stun1服务器地址
@property (nonatomic,assign) NSInteger             stun1Port;//stun1服务器端口
@property (nonatomic,copy  ) NSString              *stun2Addr;//stun2服务器地址
@property (nonatomic,assign) NSInteger             stun2Port;//stun2服务器端口
@property (nonatomic,copy  ) NSString              *ttsAddr;//tts服务器地址
@property (nonatomic,assign) NSInteger             ttsPort;//tts服务器端口
@property (nonatomic,copy  ) NSString              *nTTSAddr;//新的tts服务器地址
@property (nonatomic,assign) NSInteger             nTTSPort;//新的tts服务器端口
@property (nonatomic,copy  ) NSString              *pushAddr;//push服务器地址
@property (nonatomic,assign) NSInteger             pushHttpPort;//push服务器http端口
@property (nonatomic,assign) NSInteger             pushHttpsPort;//push服务器https端口
@property (nonatomic,copy  ) NSString              *authAddr;//认证中心服务器地址
@property (nonatomic,copy  ) NSString              *nodeJsAddr;//nodeJs地址
@property (nonatomic,assign) NSInteger             nodeJsHttpPort;//nodeJs端口

@property (nonatomic, copy)  NSString              *ftpDomain;
@property (nonatomic, copy)  NSString              *ftpIP;
@property (nonatomic, assign) int                  iFtpPort;
@property (nonatomic, copy)  NSString              *strFtpUserName;
@property (nonatomic, copy)  NSString              *strFtpPassword;
@property (nonatomic, copy)  NSString              *strPubPath;

@property (nonatomic,copy  ) NSString              *pushDasDomain;
@property (nonatomic,assign) NSInteger             pushDasPort;

@property (nonatomic,copy  ) NSString              *sysConf;//功能权限

/************** 系统级配置信息 － 体验设备相关内容 ************/
@property (nonatomic, assign) NSInteger            experienceDevicePlayTime;//播放时间，单位：秒
@property (nonatomic, assign) BOOL                 experienceSwitch;        //体验功能，0:关闭，1:开启

/************** 系统级配置信息 － 提示时间 ******************/
@property (nonatomic, assign ) NSInteger            cloudExpiredTipTime;    //云存储过期提示时间
@property (nonatomic, assign ) NSInteger            deviceUpgradeTipTime;   //设备升级提示时间

/******************** 播放相关 *************************/

@property (nonatomic, assign) BOOL                 shouldAutoPlayNextRecord;     // 用户是否同意回放自动播放下一个录像  ??

@property (nonatomic, assign) NSInteger            cloudImageExpiredTime;        //云存储图片过期时间 默认三天
@property (nonatomic, assign) BOOL                 isHasShowQuality;             //非wifi下是否显示高清模式提示
@property (nonatomic, assign) NSInteger            streamStopTimeMs;             //返回播放限时时间（单位秒），0表示不限时。默认返回300秒

/******************* 自动更新配置 ***********************/
@property (nonatomic, assign) NSInteger            autoUpgrade;                 //是否开启了自动升级 1:开启
@property (nonatomic, assign) NSInteger            timeType;                    //自动升级时间
@property (nonatomic, assign) BOOL                 isSupportUpgrade;            //是否支持设备升级显示

@property (nonatomic, assign) BOOL                 isNoChangeTabIndex;/**<登陆界面，模态消失时，是否需要修改原来的tab位置、导航管理,默认为No,目前仅用于局域网预览时登陆*/

@end



@interface EZIoTGrayConfigInfo : NSObject

@property (nonatomic, strong) NSDictionary         *autoUploadParams; //排障自动上传
@property (nonatomic, assign) NSInteger            yiBingAgencyEnable;      //蚁兵开关8
@property (nonatomic, assign) NSInteger            yiBingAgencyDeviceEnable;//"未开启视频加密”设备是否支持走蚁兵代理 19
@property (nonatomic, assign) NSInteger            yiBingEncryptEnable;     //蚁兵代理加密码流开关 1001
@property (nonatomic, assign) NSInteger            yiBingBussinessAgencyEnable;//蚁兵商用代理

@property (nonatomic, assign) NSInteger            reverseDirectEnable;     //18反向直连开关
@property (nonatomic, assign) NSInteger            VipEnable;               //28会员显示开关
@property (nonatomic, copy) NSString               *VipUrl;                 //28 会员的H5界面Url
@property (nonatomic, assign) BOOL                 RNViewEnable;            //31 RN悬浮窗显示开关
@property (nonatomic, assign) BOOL                 telAlarmRnEnable;        //54  1:RN 0:H5
@property (nonatomic, assign) BOOL                 cloudServiceRnEnable;    //56 预览增值服务云存储 1:跳转到RN 0:跳转到H5
@property (nonatomic, assign) BOOL                 isCacheVtdu;             //是否使用缓存的vtdu
@property (nonatomic, assign) BOOL                 isUploadCoreOperationError; //62 是否上报核心操作错误DCLog

@property (nonatomic, assign) BOOL                 isAiRnEnable;          //63 是否开启自动化RN
@property (nonatomic, assign) BOOL                 notMonitoredApisLogEnable; //@"64"  0:非核心接口只上报错误；1: 非核心接口全量上报；
@property (nonatomic, assign) NSInteger            realAdvShowCycleTime;  //66 广告：首页、预览页广告页被叉掉后，隔多久再显示，单位：分钟

@property (nonatomic, assign) NSInteger            LoadingAdvShowFromBackgroundCycle; // 广告：开屏广告在app热启动时（后台切到前台），间隔多久再展示，单位：分钟

@property (nonatomic, assign) NSInteger            LoadingAdvShowFromBackgroundTime; // 广告：开屏广告在app热启动时（后台切到前台），一天最多显示几次，单位：次

@property (nonatomic, assign) NSInteger            RNUpdateLogShowEnableType; //RN业务包版本灰度开关，0：关闭，1：开启

@property (nonatomic, assign) NSInteger            max43PunchDeviceNo;
///P2P白名单：在白名单内的用户，限制App在4G网络下43穿透的路数
/******************* 用户云空间 **********************/
@property (nonatomic, copy) NSDictionary *cloudRNurl;
@property (nonatomic, copy) NSDictionary *streamPackageRNUrl;

@property (nonatomic, assign) BOOL                 weatherAreaEnable; // 77 首页天气，是否显示 0：不展示， 1：展示，默认展示
@property (nonatomic, assign) NSInteger           cameraCardCloudServiceType; // 首页视频卡片云存储套餐方案 0：A方案， 1：B方案

@property (nonatomic, assign) BOOL                 grayXLogUploadType; //是否开启灰度日志模式
@property (nonatomic, assign) BOOL                 enableDebugTool;

//IOT
@property (nonatomic, assign) BOOL mineMessageShow;//我的模块 消息中心和更多服务是否展示
@property (nonatomic, assign) BOOL showCloudEntry;//我的模块 是否显示云存储入口
@property (nonatomic, assign) NSInteger PrivacyAgreementVer;//隐私协议版本（当有新版本高于本地记录已同意过的版本后，启动后自动弹窗显示隐私条款）
@property (nonatomic, assign) NSInteger LatestPrivacyAgreementVer;//登录后，灰度配置接口获取到的线上最新隐私协议版本
- (BOOL)hasUpdatePrivacyAgreement;
- (void)agreeToNewPrivacyAgreement;
@end

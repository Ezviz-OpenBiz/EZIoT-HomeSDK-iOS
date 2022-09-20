//
//  EZIoTConfigurationsGrayInfo.h
//
//  Created by qiandong on 7/21/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import <EZIoTBaseSDK/YSCommonRequest.h>

extern const NSString* kYSGrayReverseLinkDeviceType        ; //反向直连，设备主动连客户端：1-开启，0-关闭
extern const NSString* kYSGrayVTDUPreviewSwitchIntoP2P     ; //vtdu预览时可以切换到P2P取流的功能。新开关，老的不再使用，1表示开放，0表示关闭； x
extern const NSString* kYSGrayUsingThirdPartyService       ; //流量切换到第三方机房，高峰期定义：1-表示高峰期，0-表示非 x
extern const NSString* kYSGrayUserDclogEnableType          ; //dclog开关（登录后，基于终端+用户）
extern const NSString* kYSGrayPhoneDclogEnableType         ; //dclog开关（登录前，基于终端）
extern const NSString* kYSGrayDclogFilterType              ; //dclog日志上报细化过滤
extern const NSString* kYSGrayXLogEnableType               ; //客户端日志是否打开
extern const NSString* kYSGrayXLogUploadType               ; //客户端日志是否上传
extern const NSString* kYSGrayXLogKeepDaysType             ; //客户端日志保留几天
extern const NSString* kYSGrayRNHotUpdateType              ; //RN热更新是否开启 x
extern const NSString* kYSGrayVtduCacheUpdateType          ; //vtdu缓存是否开启
extern const NSString* kYSGrayHttpApiUploadType            ; //http请求是否全量上报
extern const NSString* kYSGray4G43NatPenetrationLimitNumber    ; //P2P白名单：在白名单内的用户，限制App在4G网络下43穿透的路数
extern const NSString* kYSGrayUserRNUpdateLogShowEnableType    ; //RN业务包版本灰度开关，0：关闭，1：开启
extern const NSString* kYSGrayDeviceListPageLimitNumber        ; //首页列表分页接口，每页最大值 （必须为8的倍数，比如 8，16，24，32）
extern const NSString* kYSGrayPrivacyAgreementVersion          ; //隐私协议版本号(比如 1、2、3，版本号依次递增)
extern const NSString* kYSGrayMineMessageServiceShow           ; //IOT第一个版本，用于控制我的页面消息中心和更多服务是否展示 x
extern const NSString* kYSGraCloudEntryConfig                  ; //我的云存储入口灰度配置
extern const NSString* kYSGrayAutoUploadParams                 ;
extern const NSString* kYSGrayP2PDynamicConfigInfos            ; //我的页面是否展示消息中心和更多服务；1：展示，0:不展示； 默认不展示； x
extern const NSString* kYSGrayAppBusinessDynamicConfigInfos           ; //P2P相关动态配置信息, 具体定义:libCASClient v2.5.3设计方案 x
extern const NSString* kYSGrayPlayModuleSignalSyncConfig              ; //APP业务动态配置信息；APP业务层超时配置 x

@class EZIoTDTOMineGrayInfo;

@interface EZIoTConfigurationsGrayInfoRequest : YSCommonRequest

@property(nonatomic,copy) NSString *grayTypes;

// 获取灰度信息
// warning:目前数据解析只处理了8 18 19 20 1001 。
- (void)startForMineGrayInfoWithCustomSuccBlock:(void(^)(YSDTOMeta *meta, NSDictionary *grayDic)) succBlock
                                      failBlock:(void(^)(NSError* error)) failBlock;

@end

/*
 我的配置信息
 */
@interface EZIoTDTOMineGrayInfo : NSObject<NSCoding>

@property (nonatomic,strong) NSString *clickUrl;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *picUrl;
@property (nonatomic,assign) NSInteger isNewFlag;
@property (nonatomic,assign) NSInteger index;
@property (nonatomic, assign) NSInteger key;
@property (nonatomic, copy) NSString *um_key;

@end

@interface EZIoTDTOSwitchInfo : NSObject
@property (nonatomic,strong) NSString *desc;/**<开关描述*/
@property (nonatomic,assign) NSInteger switchStatus;

@end

/*
 灰度配置中会员中心单独处理
*/
@interface EZIoTDTOStringSwitchInfo: NSObject

@property (nonatomic,strong) NSString *desc;/**<开关描述*/
@property (nonatomic,strong) NSString *switchStatus;

@end


/*
 首页tabbar可运营
*/

//tabbarItem
@interface EZIoTTabbarItemConfig : NSObject
@property(nonatomic,copy)   NSString        *iconSelectedUrl_2X;            //选中时的图标（全路径）2X
@property(nonatomic,copy)   NSString        *iconUnselectedUrl_2X;          //未选中时的图标（全路径）2X
@property(nonatomic,copy)   NSString        *iconSelectedUrl_3X;            //选中时的图标（全路径）3X
@property(nonatomic,copy)   NSString        *iconUnselectedUrl_3X;          //未选中时的图标（全路径）3X
@property(nonatomic,copy)   NSString        *title;                         //文字

//便捷方法，根据deviceScale选择合适的url
-(NSString *) iconSelectedUrl;
-(NSString *) iconUnselectedUrl;

@end

//tabbarConfig
@interface EZIoTTabbarConfig : NSObject
@property(nonatomic,assign) BOOL            enable;                     //开关
@property(nonatomic,assign) NSTimeInterval  startTime;                  //开始时间（时间戳）
@property(nonatomic,assign) NSTimeInterval  stopTime;                   //结束时间（时间戳）
@property(nonatomic,copy)   NSString        *bgColor;                   //背景色（格式："#2D9EDF”)
@property(nonatomic,assign) CGFloat         bgColorAlpha;               //背景色的透明度（格式：如0.1，范围（0~1））
@property(nonatomic,copy)   NSString        *titleSelectedColor;        //文字选中颜色
@property(nonatomic,assign) CGFloat         titleSelectedColorAlpha;    //文字选中颜色透明度
@property(nonatomic,copy)   NSString        *titleUnselectedColor;      //文字没选中颜色
@property(nonatomic,assign) CGFloat         titleUnselectedColorAlpha;  //文字没选中颜色透明度
@property(nonatomic,strong) NSArray<EZIoTTabbarItemConfig *>         *tabitems;               //items

@end

//
//  EZIoTDeviceCloudInfo.h
//  VideoGo
//
//  Created by qiandong on 16/8/17.
//  Copyright © 2016年 hikvision. All rights reserved.
//

#import <Realm/Realm.h>

typedef NS_ENUM(NSInteger,EZIoTDeviceCloudStatus)
{//云存储状态
    EZIoTDeviceCloudStatusUnopen = -1,          // 未开通云存储
    EZIoTDeviceCloudStatusNotActivated,       // 未激活
    EZIoTDeviceCloudStatusNormal,             // 正常使用中
    EZIoTDeviceCloudStatusExpired,            // 已过期
    EZIoTDeviceCloudStatusWillExpiring,       // 即将到期
    EZIoTDeviceCloudStatusLoading,            // 正在加载设备云存储状态
    EZIoTDeviceCloudStatusUnknown,             // 未知状态
};

#define CLOUD_VALID_DAY 7   //云存储到期提醒的时间，默认7天
#define CLOUD_DAYS_WEEK_CYCLE  7    // 7天云存储服务
#define CLOUD_DAYS_MONTH_CYCLE 30   // 30天云存储服务

@interface EZIoTDeviceCloudInfo : RLMObject

@property(nonatomic,copy)   NSString    *cameraId;      //主键
@property(nonatomic,copy)   NSString    *deviceSerial;
@property(nonatomic,assign) NSInteger   channelNo;


@property(nonatomic,assign) NSInteger   status;     //云存储状态,-1:未开通云存储,0:关闭,1:开启,2:过期
@property(nonatomic,assign) NSInteger   validDays;         //剩余天数(0表示剩余或过期天数不到1天)
@property(nonatomic,assign) NSInteger   totalDays;              //循环覆盖天数（7天、30天）
@property(nonatomic,copy)   NSString    *promotionLogo;         //促销图标url
@property(nonatomic,copy)   NSString    *timerLogo;             //倒计时图标url
@property(nonatomic,copy)   NSString    *expiredLogo;           //过期图标url
@property(nonatomic,copy)   NSString    *cloudClickUrl;      //点击跳转地址

@property (nonatomic, assign)   BOOL            isLoadingStatus;        // 判断当前是否正在刷新
@property (nonatomic, assign)   NSTimeInterval  lastLoadTime;           // 最后刷新时间 0:未刷新成功过

//@property(nonatomic,assign) NSInteger   freeCloud;  // 1允许免费购买 0 不允许免费购买

@property(nonatomic,assign) NSInteger   activityType;  // 活动类型，0：既不能免费试用，也不能免费开通，1：免费试用(对应V2的tryCloud=1)，2：免费开通(对应V2的freeCloud=1)
@property(nonatomic,assign) NSInteger   totalDay;      // 活动云存储类型：保存天数 (跟totalDays不同)
@property(nonatomic,assign) NSInteger   openType;       // 活动开通类型，0：不能直接开通，1：白名单开通，2：免费试用，3：3天云存储，4：二次试用

@end

@interface EZIoTDeviceCloudInfo (Extension)

- (EZIoTDeviceCloudStatus)customCloudStatus;
- (NSInteger)expiringDays;
- (BOOL)cloudRecordsExpired;
- (BOOL)shouldDisplayOnDeviceList; // 设备列表页是否显示云录像

- (BOOL)ys_cloudExpiredOrNotOpen; //过期/未开通

- (BOOL)ys_cloudExpired; //过期
- (BOOL)ys_cloudNotOpen; //未开通

@end

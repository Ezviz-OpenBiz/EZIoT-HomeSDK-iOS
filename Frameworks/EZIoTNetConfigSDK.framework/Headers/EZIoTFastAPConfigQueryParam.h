//
//  EZIoTFastAPConfigQueryParam.h
//  EZIoTNetConfigSDK
//
//  Created by yuqian on 2021/6/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTConfigTokenInfo;

@interface EZIoTFastAPConfigQueryParam : NSObject

@property (nonatomic, strong) EZIoTConfigTokenInfo *tokenInfo;// tokenInfo 配网tokenInfo
@property (nonatomic, copy) NSString *wifiSsid;//  wifiSsid WiFi ssid
@property (nonatomic, copy) NSString *wifiPwd;//  wifiPwd WiFi 密码
@property (nonatomic, copy) NSString *deviceSerial;//  deviceSerial 设备序列号
@property (nonatomic, copy) NSString *familyId;//  familyId 设置设备添加家庭Id
@property (nonatomic, assign) NSInteger timeout;//  timeout 超时时间  查询间隔5s  默认超时时间90s
@property (nonatomic, strong) NSDictionary *additionalParam;// 动态配置参数，跟根据设备功能参入动态参数   如：支持区分国家区域，需传入{@"areaCode" : @"CN"}

@end

NS_ASSUME_NONNULL_END

//
//  EZIoTWiFiConfigParam.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2022/3/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// WiFi配网参数
@interface EZIoTWiFiConfigParam : NSObject

/// 路由器账户
@property (nonatomic, copy) NSString *ssid;
/// 路由器密码
@property (nonatomic, copy) NSString *password;

/// 以下三个参数可通过EZIoTNetConfigSDK 中 EZIoTNetConfigurator.getConfigTokenWithFamilyId方法获取
/// 国家码，如中国CN
@property (nonatomic, copy) NSString *countryCode;
/// 设备注册平台
@property (nonatomic, copy) NSString *lbs;
/// 配网token
@property (nonatomic, copy) NSString *token;


/// 路由器加密类型: 1:none 2:WEP 3:WPA 4:WPA2 5:WPA&WPA2 6:WPA3
@property (nonatomic, assign) NSUInteger encryptType;

@end

NS_ASSUME_NONNULL_END

//
//  EZIoTBLEInitConfigParam.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// SDK 初始化配置参数
@interface EZIoTBLEInitConfigParam : NSObject

/// 必填，IoT平台appId
@property (nonatomic, copy) NSString *appId;

/// 必填，IoT平台登录后获取的鉴权sessionId
@property (nonatomic, copy) NSString *sessionId;

/// 必填，IoT平台登录后获取的用户Id
@property (nonatomic, copy) NSString *userId;

/// 可选，为空将使用默认地址，用于设置HTTPS请求域名（格式：https://xxx.com）
@property (nonatomic, copy) NSString *httpApiDomain;

@end

NS_ASSUME_NONNULL_END

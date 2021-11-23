//
//  EZIoTUserGlobalSetting.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTUserConfigParam;

/// 用户公共通用方法类
@interface EZIoTUserGlobalSetting : NSObject

#pragma mark - Initialize

/// 初始化用户SDK
+ (void) initSDK;

/// 反初始化SDK
+ (void) destroySDK;

#pragma mark - Push Service

/// 如果您的应用需要推送服务，请在系统方法- (void)application: didRegisterForRemoteNotificationsWithDeviceToken:中调用该方法
/// @param app UIApplication
/// @param devToken device token data信息
+ (void)application:(UIApplication *)app didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)devToken;


@end

NS_ASSUME_NONNULL_END

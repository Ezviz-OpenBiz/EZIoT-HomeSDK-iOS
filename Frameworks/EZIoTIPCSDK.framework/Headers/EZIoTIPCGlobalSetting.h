//
//  EZIoTIPCGlobalSetting.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2022/4/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTDeviceInfo;

@interface EZIoTIPCGlobalSetting : NSObject

+ (void) initSDK;

#pragma mark - Register Life Cycle

+ (void) registerOnLoginSuccess;
+ (void) registerOnLoginFailed;
+ (void) registerOnLogout;
+ (void) registerOnExitApp;
+ (void) registerOnEnterBackground;
+ (void) registerOnEnterForeground;
+ (void) registerOnDevicesInsertOrUpdate:(NSArray<EZIoTDeviceInfo *> *)devices;
+ (void) registerOnDevicesDelete:(NSArray<EZIoTDeviceInfo *> *)devices;

#pragma mark - Util & Debug

+ (NSString *) getVersion;

+ (void)setDebugOn:(BOOL)on;
+ (void)setLogCallBack:(void(^)(NSString *log))callback;

@end

NS_ASSUME_NONNULL_END

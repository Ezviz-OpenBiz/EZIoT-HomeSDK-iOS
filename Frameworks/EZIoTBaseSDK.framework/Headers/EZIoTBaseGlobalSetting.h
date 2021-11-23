//
//  EZIoTBaseGlobalSetting.h
//  EZIoTBaseSDK
//
//  Created by yuqian on 2021/6/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTBaseConfigParam;


@interface EZIoTBaseGlobalSetting : NSObject

/// 初始化SDK
/// @param configParam 初始化配置参数
+ (void) initSDKWithConfigParam:(EZIoTBaseConfigParam *)configParam;

/// 更新配置参数，配网前设置
/// @param configParam 配置参数
+ (void) updateConfigParam:(EZIoTBaseConfigParam *)configParam;

/// 反初始化SDK
+ (void) destroySDK;

@end

NS_ASSUME_NONNULL_END

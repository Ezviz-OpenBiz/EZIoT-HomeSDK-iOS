//
//  EZIoTLoginConfigTool.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/11/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTLoginConfigTool : NSObject

#pragma mark -获取系统配置
+ (void)startRequestSystemConfiguration:(void (^)(void))success
                                failure:(void(^)(NSError *error))failure;

+ (void)parseCacheSystemConfigurations;

#pragma mark -获取灰度配置
+ (void)startRequestGrayConfiguration:(void (^)(void))success
                              failure:(void(^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END

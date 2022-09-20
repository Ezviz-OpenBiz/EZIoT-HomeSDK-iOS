//
//  EZIoTDevUpgradeMgr.h
//  EZIoTDeviceControlSDK
//
//  Created by yuqian on 2022/3/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTDevUpgradeMgr : NSObject

+ (void) startUpgrade:(NSDictionary *)params
             progress:(void(^)(double progress))progress
           completion:(void(^)(BOOL status, NSError * _Nullable error))completion;

+ (void) stopUpgrade:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END

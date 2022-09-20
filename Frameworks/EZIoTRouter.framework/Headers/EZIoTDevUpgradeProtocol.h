//
//  EZIoTDevUpgradeProtocol.h
//  EZIoTRouter
//
//  Created by yuqian on 2022/3/17.
//

#import <Foundation/Foundation.h>
#import "EZIoTRouterProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol EZIoTDevUpgradeProtocol <NSObject, EZIoTRouterProtocol>

- (void) startUpgrade:(NSDictionary *)params
             progress:(void(^)(double value))progress
           completion:(void(^)(BOOL status, NSError * _Nullable error))completion;

- (void) stopUpgrade;

@end

NS_ASSUME_NONNULL_END

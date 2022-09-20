//
//  EZIoTIntercomPlayer.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2021/12/3.
//

#import <Foundation/Foundation.h>
#import "EZIoTPlayerDelegate.h"


NS_ASSUME_NONNULL_BEGIN

@class EZIoTDeviceInfo,EZIoTResourceInfo;

@interface EZIoTIntercomPlayer : NSObject

@property (weak, nonatomic) id<EZIoTPlayerDelegate> delegate;

+ (EZIoTIntercomPlayer *) intercomWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                                    resourceInfo:(EZIoTResourceInfo *)resourceInfo;

- (instancetype)initWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                      resourceInfo:(EZIoTResourceInfo *)resourceInfo;

- (void) start;
- (void) stop;
- (void) destroy;

@end

NS_ASSUME_NONNULL_END

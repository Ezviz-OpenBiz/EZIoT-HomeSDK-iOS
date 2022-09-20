//
//  EZIoTRouterProtocol.h
//  EZIoTRouter
//
//  Created by yuqian on 2022/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    EZIoTChannelAvailableStatusUnknown,
    EZIoTChannelAvailableStatusNoAuthority,
    EZIoTChannelAvailableStatusDisConnect,
    EZIoTChannelAvailableStatusUnableControl,
    EZIoTChannelAvailableStatusPass,
} EZIoTChannelAvailableStatus;


@protocol EZIoTRouterProtocol <NSObject>

+ (id<EZIoTRouterProtocol>) getInstance;

- (EZIoTChannelAvailableStatus)verifyChannelAvailability:(NSString *)deviceSerial;

@end

NS_ASSUME_NONNULL_END

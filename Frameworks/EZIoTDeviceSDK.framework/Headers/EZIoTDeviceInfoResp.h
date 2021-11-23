//
//  EZIoTDeviceInfoResp.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTDeviceInfo;

@interface EZIoTDeviceInfoResp : NSObject

@property(nonatomic, strong) NSArray<EZIoTDeviceInfo *> *devices;
@property(nonatomic, assign) BOOL hasNext;

@end

NS_ASSUME_NONNULL_END

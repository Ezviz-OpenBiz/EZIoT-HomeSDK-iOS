//
//  EZIoTDeviceManager+Feature.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/7/2.
//

#import "EZIoTDeviceManager.h"


NS_ASSUME_NONNULL_BEGIN

@class EZIoTPropertyFeatureItem,EZIoTActionFeatureItem;

@interface EZIoTDeviceManager (Feature)

+ (void)getPropertyFeatureValuesWithItem:(EZIoTPropertyFeatureItem *)propertyFeatureItem
                                 success:(void(^)(id value)) success
                                 failure:(void(^)(NSError *error))failure;

+ (void)setPropertyFeatureValuesWithItem:(EZIoTPropertyFeatureItem *)propertyFeatureItem
                                 success:(void(^)(void)) success
                                 failure:(void(^)(NSError *error))failure;

+ (void)setActionFeatureValuesWithItem:(EZIoTActionFeatureItem *)actionFeatureItem
                               success:(void(^)(NSDictionary * _Nullable deviceOutput)) success
                               failure:(void(^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END

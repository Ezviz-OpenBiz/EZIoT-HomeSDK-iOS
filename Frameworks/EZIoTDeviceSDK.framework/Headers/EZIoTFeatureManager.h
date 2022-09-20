//
//  EZIoTFeatureManager.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTDeviceInfo,EZIoTProductInfo,EZIoTPropertyFeatureItem,EZIoTActionFeatureItem;

@interface EZIoTFeatureManager : NSObject

+ (instancetype)sharedInstance;
- (void)clear;

#pragma mark - Server

+ (void)getPropertyFeatureValuesWithItem:(EZIoTPropertyFeatureItem *)propertyFeatureItem
                                 success:(void(^)(id value)) success
                                 failure:(void(^)(NSError *error))failure;

+ (void)setPropertyFeatureValuesWithItem:(EZIoTPropertyFeatureItem *)propertyFeatureItem
                                 success:(void(^)(void)) success
                                 failure:(void(^)(NSError *error))failure;

+ (void)setActionFeatureValuesWithItem:(EZIoTActionFeatureItem *)actionFeatureItem
                               success:(void(^)(NSDictionary *_Nullable deviceOutput)) success
                               failure:(void(^)(NSError *error))failure;

#pragma mark - Local

+ (NSDictionary *)getLocalPropFeaturesAndValuesByDeviceInfo:(EZIoTDeviceInfo *)deviceInfo atLocalIndex:(NSString *)localIndex;

- (NSMutableDictionary *)getLocalPropFeatureValuesWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo;

- (void)setLocalPropFeatureValuesWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                            propertyFeatureItem:(EZIoTPropertyFeatureItem *)propertyFeatureItem;

- (void)setLocalPropFeatureValuesWithDeviceInfo:(EZIoTDeviceInfo *)deviceInfo
                                          value:(id)value
                                      timestamp:(NSString *)timestamp
                                            key:(NSString *)key
                                     localIndex:(NSString *)localIndex;

- (NSDictionary *)getAllFeaturesDescsWithProductInfo:(EZIoTProductInfo *)productInfo;
- (NSDictionary *)getAllLiteFeaturesDescsWithProductInfo:(EZIoTProductInfo *)productInfo;

@end

NS_ASSUME_NONNULL_END

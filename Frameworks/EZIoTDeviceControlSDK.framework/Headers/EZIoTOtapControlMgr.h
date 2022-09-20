//
//  EZIoTOtapControlMgr.h
//  EZIoTRouter
//
//  Created by yuqian on 2022/3/11.
//

#import <Foundation/Foundation.h>
#import "EZIoTFeatureConfigParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTOtapControlMgr : NSObject

+ (void)getPropertyFeatureValues:(NSArray <EZIoTFeatureConfigParam *> *)params
                         success:(void(^)(NSArray <EZIoTFeatureConfigParam *> * values)) success
                         failure:(void(^)(NSError *error))failure;

+ (void)setPropertyFeatureValue:(EZIoTFeatureConfigParam *)params
                        success:(void(^)(void)) success
                        failure:(void(^)(NSError *error))failure;

+ (void)setActionFeatureValue:(EZIoTFeatureConfigParam *)params
                      success:(void(^)(EZIoTFeatureConfigParam *value)) success
                      failure:(void(^)(NSError *error))failure;

+ (void)getBatchHistoryEvents:(NSString *)deviceSerial
                      success:(void(^)(NSArray <EZIoTFeatureConfigParam *> *events))success
                      failure:(void(^)(NSError *error))failure;

+ (void)getFullDevProperties:(NSString *)deviceSerial
                     success:(void(^)(NSArray <EZIoTFeatureConfigParam *> *propFeatures))success
                     failure:(void(^)(NSError *error))failure;

+ (void)eventReportHandler:(void(^)(NSString *deviceSerial, NSArray <EZIoTFeatureConfigParam *> *values, NSError * _Nullable error))handler;

+ (void)setDeviceProfileBlock:(NSString *(^)(NSString *deviceSerial))block;



@end

NS_ASSUME_NONNULL_END

//
//  EZIoTDeviceInfo+AccessDB.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/25.
//

#import "EZIoTDeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTDeviceInfo (AccessDB)

#pragma mark - query

+ (NSMutableArray<EZIoTDeviceInfo *> *)allDevices;
+ (NSMutableArray<EZIoTDeviceInfo *> *)allDevicesWithFamilyId:(NSString *)familyId;
+ (NSMutableArray<EZIoTDeviceInfo *> *)allDevicesWithFamilyId:(NSString *)familyId groupId:(NSString *)groupId;
+ (NSMutableArray<EZIoTDeviceInfo *> *)allDevicesWithFamilyId:(NSString *)familyId groupId:(NSString *)groupId ascending:(BOOL)ascending;

+ (EZIoTDeviceInfo *)getDeviceBySerial:(NSString *)deviceSerial;
+ (EZIoTDeviceInfo *)getDeviceBySerial:(NSString *)deviceSerial familyId:(NSString *)familyId;

#pragma mark - update && add

+ (void)addOrUpdateDevice:(EZIoTDeviceInfo *)device;
+ (void)addOrUpdateDevices:(NSArray<EZIoTDeviceInfo *> *) deviceInfos familyId:(NSString * _Nullable)familyId;

#pragma mark - delete

+ (void)deleteAllDeviceInGroup:(NSString *)groupId;
+ (void)deleteAllDeviceInGroup:(NSString *)groupId familyId:(NSString *)familyId;
+ (void)deleteDeviceBySerial:(NSString *)deviceSerial familyId:(NSString *)familyId;

@end

NS_ASSUME_NONNULL_END

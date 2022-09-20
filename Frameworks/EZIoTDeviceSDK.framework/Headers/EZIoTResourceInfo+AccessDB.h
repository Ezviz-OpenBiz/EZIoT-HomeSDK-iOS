//
//  EZIoTResourceInfo+AccessDB.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/25.
//

#import "EZIoTResourceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTResourceInfo (AccessDB)

#pragma mark - Query

+ (NSMutableArray<EZIoTResourceInfo *> *)allResources;
+ (NSMutableArray<EZIoTResourceInfo *> *)getResourcesWithGroupId:(NSString *)groupId;
+ (NSMutableArray<EZIoTResourceInfo *> *)getResourcesWithFamilyId:(NSString *)familyId;
+ (NSMutableArray<EZIoTResourceInfo *> *)getResourcesWithFamilyId:(NSString *)familyId groupId:(NSString *)groupId;
+ (NSMutableArray<EZIoTResourceInfo *> *)getResourcesWithFamilyId:(NSString *)familyId groupId:(NSString *)groupId ascending:(BOOL)ascending;

+ (EZIoTResourceInfo *)getResourcesByResourceId:(NSString *)resourceId;
+ (EZIoTResourceInfo *)getResourcesByResourceId:(NSString *)resourceId familyId:(NSString *)familyId;
+ (NSArray<EZIoTResourceInfo *> *)getResourcesByDeviceSerial:(NSString *)deviceSerial;
+ (NSArray<EZIoTResourceInfo *> *)getResourcesByDeviceSerial:(NSString *)deviceSerial needUnmanage:(BOOL)needUnmanage;
+ (NSArray<EZIoTResourceInfo *> *)getResourcesByDeviceSerial:(NSString *)deviceSerial groupId:(NSString *)groupId;
+ (NSArray<EZIoTResourceInfo *> *)getResourcesByDeviceSerial:(NSString *)deviceSerial channelNo:(int)channelNo;
+ (NSArray<EZIoTResourceInfo *> *)getResourcesByDeviceSerial:(NSString *)deviceSerial localIndex:(NSString *)localIndex;
+ (NSArray<EZIoTResourceInfo *> *)getResourcesByDeviceSerial:(NSString *)deviceSerial resourceIdentifier:(NSString *)resourceIdentifier localIndex:(NSString *)localIndex;

#pragma mark - Update
+ (void)updateResource:(EZIoTResourceInfo *)resource;
+ (void)updateResource:(EZIoTResourceInfo *)resource familyId:(NSString *)familyId;

#pragma mark - Delete
+ (void)deleteResources:(NSString *)deviceSerial;
+ (void)deleteResource:(EZIoTResourceInfo *)resourceInfo inRealm:(RLMRealm *)realm;
+ (void)deleteResourcesByGroupId:(NSString *)groupId deviceSerial:(NSString *)deviceSerial;

@end

NS_ASSUME_NONNULL_END

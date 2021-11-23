//
//  EZIoTGroupManager.h
//  EZIoTFamilySDK
//
//  Created by yuqian on 2021/6/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTGroupInfo,EZIoTGroupDeviceInfo;

/// 分组操作管理类
@interface EZIoTGroupManager : NSObject

/// 获取指定家庭Id分组列表
/// @param familyId 家庭Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getGroupListWithFamilyId:(NSString *)familyId
                          success:(void(^)(NSArray<EZIoTGroupInfo *> *groupInfos)) success
                          failure:(void(^)(NSError *error))failure;


/// 添加新分组
/// @param familyId 家庭Id
/// @param groupName 新分组名称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) createGroupWithFamilyId:(NSString *)familyId
                       groupName:(NSString *)groupName
                         success:(void(^)(NSString *groupId)) success
                         failure:(void(^)(NSError *error))failure;

/// 修改指定分组名称
/// @param familyId 家庭Id
/// @param groupId 分组Id
/// @param groupName 新分组名称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyGroupNameWithFamilyId:(NSString *)familyId
                             groupId:(NSString *)groupId
                           groupName:(NSString *)groupName
                             success:(void(^)(void)) success
                             failure:(void(^)(NSError *error))failure; 

/// 删除指定分组，最后一个分组无法删除
/// @param familyId 家庭Id
/// @param groupId 分组Id
/// @param targetGroupId 删除老分组后，设备需要转移到的新分组Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) deleteGroupWithFamilyId:(NSString *)familyId
                         groupId:(NSString *)groupId
                   targetGroupId:(NSString *)targetGroupId
                         success:(void(^)(void)) success
                         failure:(void(^)(NSError *error))failure;

/// 获取推荐分组名称，可用于创建房间时提示展示
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getRecommendGroupNameWithSuccess:(void(^)(NSArray <NSString *> *recommendNames)) success
                                  failure:(void(^)(NSError *error))failure;

/// 分组内设备操作，添加或移除设备
/// @param groupId 分组Id
/// @param devices 需操作的设备列表
/// @param success 成功回调
/// @param failure 失败回调
+ (void) groupDevicesOperationWithGroupId:(NSString *)groupId
                                  devices:(NSArray <EZIoTGroupDeviceInfo*> *)devices
                                  success:(void(^)(void)) success
                                  failure:(void(^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END

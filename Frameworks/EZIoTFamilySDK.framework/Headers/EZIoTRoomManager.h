//
//  EZIoTRoomManager.h
//  EZIoTFamilySDK
//
//  Created by yuqian on 2021/6/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTRoomInfo,EZIoTRoomDeviceInfo;

/// 分组操作管理类
@interface EZIoTRoomManager : NSObject

/// 获取指定家庭Id分组列表
/// @param familyId 家庭Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getRoomListWithFamilyId:(NSString *)familyId
                          success:(void(^)(NSArray<EZIoTRoomInfo *> *roomInfos)) success
                          failure:(void(^)(NSError *error))failure;


/// 添加新分组
/// @param familyId 家庭Id
/// @param roomName 新分组名称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) createRoomWithFamilyId:(NSString *)familyId
                       roomName:(NSString *)roomName
                        success:(void(^)(NSString *roomId)) success
                        failure:(void(^)(NSError *error))failure;

/// 修改指定分组名称
/// @param familyId 家庭Id
/// @param roomId 分组Id
/// @param roomName 新分组名称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyRoomNameWithFamilyId:(NSString *)familyId
                              roomId:(NSString *)roomId
                            roomName:(NSString *)roomName
                             success:(void(^)(void)) success
                             failure:(void(^)(NSError *error))failure; 

/// 删除指定分组，最后一个分组无法删除
/// @param familyId 家庭Id
/// @param roomId 分组Id
/// @param targetRoomId 删除老分组后，设备需要转移到的新分组Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) deleteRoomWithFamilyId:(NSString *)familyId
                         roomId:(NSString *)roomId
                   targetRoomId:(NSString *)targetRoomId
                        success:(void(^)(void)) success
                        failure:(void(^)(NSError *error))failure;

/// 获取推荐分组名称，可用于创建房间时提示展示
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getRecommendRoomNameWithSuccess:(void(^)(NSArray <NSString *> *recommendNames)) success
                                  failure:(void(^)(NSError *error))failure;

/// 分组内设备操作，添加或移除设备
/// @param roomId 分组Id
/// @param devices 需操作的设备列表
/// @param success 成功回调
/// @param failure 失败回调
+ (void) roomDevicesOperationWithRoomId:(NSString *)roomId
                                 devices:(NSArray <EZIoTRoomDeviceInfo*> *)devices
                                 success:(void(^)(void)) success
                                 failure:(void(^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END

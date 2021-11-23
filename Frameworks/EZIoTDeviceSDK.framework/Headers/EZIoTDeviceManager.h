//
//  EZIoTDeviceManager.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTDeviceInfoResp,EZIoTDeviceInfo;

/// 设备管理操作类
@interface EZIoTDeviceManager : NSObject

#pragma mark - Query

/// 网络请求获取指定家庭分组下的设备列表，该接口会跟进家庭维度进行本地DB缓存
/// @param familyId 家庭Id
/// @param groupId 分组Id
/// @param offset 偏移量，偏移量计算方法 offet = 当前分页数量 * limit
/// @param limit 分页大小
/// @param success 成功回调
/// @param failure 失败回调
+(void)getDeviceListWithFamilyId:(NSString *)familyId
                         groupId:(NSString *)groupId
                          offset:(NSInteger)offset
                           limit:(NSInteger)limit
                         success:(void(^)(EZIoTDeviceInfoResp *deviceInfoResp)) success
                         failure:(void(^)(NSError *error))failure;


/// 获取本地DB默认家庭的设备，默认升序排列
+ (NSMutableArray<EZIoTDeviceInfo *> *)getLocalDevices;

/// 获取本地DB指定家庭下的设备，默认升序排列
/// @param familyId 家庭Id
+ (NSMutableArray<EZIoTDeviceInfo *> *)getLocalDevicesWithFamilyId:(NSString *)familyId;

/// 获取本地DB指定家庭分组下的设备，默认升序排列
/// @param familyId 家庭Id
/// @param groupId 分组Id
+ (NSMutableArray<EZIoTDeviceInfo *> *)getLocalDevicesWithFamilyId:(NSString *)familyId groupId:(NSString *)groupId;

/// 获取本地DB指定家庭分组下的设备
/// @param familyId 家庭Id
/// @param groupId 分组Id
/// @param ascending 是否升序排列，设备将按照设备状态status及设备名称name进行排序
+ (NSMutableArray<EZIoTDeviceInfo *> *)getLocalDevicesWithFamilyId:(NSString *)familyId groupId:(NSString *)groupId ascending:(BOOL)ascending;


#pragma mark - Add & Update

/// 添加或修改指定设备DB缓存
/// @param device EZIoTDeviceInfo
+ (void)createOrUpdateDevice:(EZIoTDeviceInfo *)device;


/// 添加或修改指定家庭设备列表DB缓存
/// @param deviceInfos EZIoTDeviceInfo列表
/// @param familyId 家庭Id
+ (void)createOrUpdateDevices:(NSArray<EZIoTDeviceInfo *> *)deviceInfos familyId:(NSString *_Nullable)familyId;


#pragma mark - Delete

/// 删除账户下指定设备
/// @param deviceSerial 设备序列号
/// @param success 成功回调
/// @param failure 失败回调
+ (void) deleteDevice:(NSString *)deviceSerial
              success:(void(^)(void)) success
              failure:(void(^)(NSError *error))failure;

/// 删除当前选择家庭下设备
/// @param deviceSerial 设备序列号
+ (void) deleteLocalDevice:(NSString *)deviceSerial;

/// 删除本地DB指定家庭下设备
/// @param deviceSerial 设备序列号
/// @param familyId 家庭Id
+ (void) deleteLocalDevice:(NSString *)deviceSerial familyId:(NSString *)familyId;


#pragma mark - Func

/// 修改设备名称
/// @param deviceName 设备名称
/// @param deviceSerial 设备序列号
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyDeviceName:(NSString *)deviceName
             deviceSerial:(NSString *)deviceSerial
                  success:(void(^)(void)) success
                  failure:(void(^)(NSError *error))failure;

/// 修改资源名称
/// @param resourceName 资源名称
/// @param resourceId 资源Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyResourceName:(NSString *)resourceName
                 resourceId:(NSString *)resourceId
                    success:(void(^)(void)) success
                    failure:(void(^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END

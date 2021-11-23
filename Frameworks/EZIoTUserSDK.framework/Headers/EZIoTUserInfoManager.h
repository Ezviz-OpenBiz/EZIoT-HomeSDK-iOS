//
//  EZIoTUserInfoManager.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTUserAreaInfo,EZIoTUserProfileInfo,EZIoTUserConfusedInfo,EZIoTUserContactModifyParam;


/// 用户基本信息管理类
@interface EZIoTUserInfoManager : NSObject

#pragma mark - Area Info

/// 获取指定国家(区域)信息，该接口调用成功后，会调用setAreaInfo方法缓存信息
/// @param countryCode 国家(区域)码 如中国大陆CN、中国台湾TW、美国US等
/// @param success 成功返回区域信息
/// @param failure 失败返回错误信息
+ (void)getAreaInfoWithCountryCode:(NSString *)countryCode
                           success:(void(^)(EZIoTUserAreaInfo *areaInfo)) success
                           failure:(void(^)(NSError *error))failure;

/// 获取所有国家(区域)信息
/// @param success 成功返回所有区域信息类别
/// @param failure 失败返回错误信息
+ (void) getAreaListWithSuccess:(void(^)(NSArray<EZIoTUserAreaInfo*> *areaInfos)) success
                        failure:(void(^)(NSError *error))failure;

/// 设置区域信息
/// 用户选中某个国家(地区）后，调用这个接口设置国家(地区)，sdk内部会持久化保存设置，仅在选择的区域改动时设置
/// @param areaInfo 通过getAreaInfoWithCountryCode: / getAreaListWithSuccess:接口获取到的区域信息
+ (void)setAreaInfo:(EZIoTUserAreaInfo *) areaInfo;


#pragma mark - Persional Info

/// 获取用户基本信息，该接口会将部分信息缓存值 EZIoTUserInfo
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getUserProfileWithSuccess:(void(^)(EZIoTUserProfileInfo *profileInfo)) success
                           failure:(void(^)(NSError *error))failure;

/// 获取混淆后的用户基本信息
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getUserConfusedProfileWithSuccess:(void(^)(EZIoTUserConfusedInfo *confusedInfo)) success
                                   failure:(void(^)(NSError *error))failure;

/// 修改账户密码
/// @param oldPassword 旧密码
/// @param newPasswrod 新密码
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyUserAccountPassword:(NSString *)oldPassword
                       newPassword:(NSString *)newPasswrod
                           success:(void(^)(void)) success
                           failure:(void(^)(NSError *error))failure;

/// 修改手机号
/// @param param 联系方式修改参数，详见 EZIoTUserContactModifyParam
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyUserPhoneNumberWithParam:(EZIoTUserContactModifyParam *)param
                                success:(void(^)(void)) success
                                failure:(void(^)(NSError *error))failure;

/// 修改邮箱
/// @param param 联系方式修改参数，详见 EZIoTUserContactModifyParam
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyUserEmailAddressWithParam:(EZIoTUserContactModifyParam *)param
                                 success:(void(^)(void)) success
                                 failure:(void(^)(NSError *error))failure;

/// 修改用户性别
/// @param gender 性别  1.男,2.女 修改时只允许传1或2,否则返回参数错误
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyUserGender:(int)gender
                  success:(void(^)(void)) success
                  failure:(void(^)(NSError *error))failure;

/// 修改用户生日
/// @param birthDate 生日 格式为yyyy-MM-dd，不能大于当前日期
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyUserBirthDate:(NSString *)birthDate
                     success:(void(^)(void)) success
                     failure:(void(^)(NSError *error))failure;

/// 修改用户昵称
/// @param nickname 昵称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyUserNickname:(NSString *)nickname
                    success:(void(^)(void)) success
                    failure:(void(^)(NSError *error))failure;

/// 修改用户头像
/// @param imageData 图片二进制数据
/// @param success 成功回调，返回图片的url下载地址
/// @param failure 失败回调
+ (void) modifyUserAvatar:(NSData *)imageData
                  success:(void(^)(NSString *_Nullable imageUrl)) success
                  failure:(void(^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END

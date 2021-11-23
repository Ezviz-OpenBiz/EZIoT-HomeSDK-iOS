//
//  EZIoTFamilyManager.h
//  EZIoTFamilySDK
//
//  Created by yuqian on 2021/6/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTFamilyInfo,EZIoTFamilyDetailInfo,EZIoTFamilyInfoResp;


/// 家庭操作管理类
@interface EZIoTFamilyManager : NSObject

#pragma mark - 家庭管理操作

/// 创建新家庭
/// @param familyName 家庭名称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) createFamilyWithName:(NSString *)familyName
                      success:(void(^)(EZIoTFamilyInfo *familyInfo)) success
                      failure:(void(^)(NSError *error))failure;

/// 获取简要家庭列表信息，仅有房间名称和 id 信息，不区分创建和加入的家庭
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getFamilyListWithSuccess:(void(^)(NSArray<EZIoTFamilyInfo *> * familyInfos)) success
                          failure:(void(^)(NSError *error))failure;

/// 获取详细家庭列表信息
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getExtFamilyListWithSuccess:(void(^)(EZIoTFamilyInfoResp *familyInfoResp)) success
                             failure:(void(^)(NSError *error))failure;

/// 获取指定家庭详情
/// @param familyId 家庭Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getFamilyDetailInfoWithFamilyId:(NSString *)familyId
                                 success:(void(^)(EZIoTFamilyDetailInfo *familyDetailInfo)) success
                                 failure:(void(^)(NSError *error))failure;

/// 修改指定家庭名称
/// @param familyId 家庭Id
/// @param familyName 新家庭名称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyFamilyNameWithFamilyId:(NSString *)familyId
                           familyName:(NSString *)familyName
                              success:(void(^)(void)) success
                              failure:(void(^)(NSError *error))failure;

/// 删除指定家庭
/// @param familyId 家庭Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) deleteFamilyWithFamilyId:(NSString *)familyId
                          success:(void(^)(void)) success
                          failure:(void(^)(NSError *error))failure;


#pragma mark - 家庭成员操作

/// 邀请指定家庭成员
/// @param familyId 家庭Id
/// @param invitedAccount 被邀请账号
/// @param success 成功回调
/// @param failure 失败回调
+ (void) inviteFamilyMemberWithFamilyId:(NSString *)familyId
                         invitedAccount:(NSString *)invitedAccount
                                success:(void(^)(void)) success
                                failure:(void(^)(NSError *error))failure;

/// 被邀请成员操作
/// @param familyId 家庭Id
/// @param memberId 成员Id
/// @param status 邀请状态 1:同意 2:拒绝
/// @param success 成功回调
/// @param failure 失败回调
+ (void) memberInviteOperationWithFamilyId:(NSString *)familyId
                                  memberId:(NSString *)memberId
                                    status:(BOOL)status
                                   success:(void(^)(void)) success
                                   failure:(void(^)(NSError *error))failure;

/// 1. 可删除指定家庭成员
/// 2. 可撤销成员邀请
/// @param familyId 家庭Id
/// @param memberId 成员Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) removeFamilyMemberWithFamilyId:(NSString *)familyId
                               memberId:(NSString *)memberId
                                success:(void(^)(void)) success
                                failure:(void(^)(NSError *error))failure;

/// 家庭成员主动退出家庭
/// @param familyId 家庭Id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) memberSignoutWithFamilyId:(NSString *)familyId
                           success:(void(^)(void)) success
                           failure:(void(^)(NSError *error))failure;

/// 修改成员昵称
/// @param familyId 家庭Id
/// @param memberId 成员Id
/// @param nickname 新昵称
/// @param success 成功回调
/// @param failure 失败回调
+ (void) modifyMemberNickNameWithFamilyId:(NSString *)familyId
                                 memberId:(NSString *)memberId
                                 nickname:(NSString *)nickname
                                  success:(void(^)(void)) success
                                  failure:(void(^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END

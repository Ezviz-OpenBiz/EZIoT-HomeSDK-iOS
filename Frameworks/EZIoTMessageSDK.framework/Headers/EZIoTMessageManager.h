//
//  EZIoTMessageManager.h
//  EZIoTMessageSDK
//
//  Created by yuqian on 2021/7/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTMsgCategoryInfo,EZIoTMsgAbstractInfo,EZIoTMsgListResp,EZIoTMsgInfo;

typedef enum : NSUInteger {
    EZIoTMsgOpertionActionReadSelect,
    EZIoTMsgOpertionActionReadAll,
    EZIoTMsgOpertionActionDeleteSelect,
    EZIoTMsgOpertionActionDeleteAll,
} EZIoTMsgOpertionActionType;


@interface EZIoTMessageManager : NSObject

/// 获取消息分类
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getMessageCategoriesWithSuccess:(void(^)(NSArray<EZIoTMsgCategoryInfo *> *msgCategories))success
                                 failure:(void(^)(NSError *error))failure;

/// 获取最新消息的摘要信息
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getMessageAbstractInfoWithSuccess:(void(^)(NSArray<EZIoTMsgAbstractInfo *> *msgAbstractInfos))success
                                   failure:(void(^)(NSError *error))failure;

/// 获取指定分类消息列表
/// @param categorySubtypes 指定消息分类类型，EZIoTMsgCategoryInfo.subTypes
/// @param limit 分页限制，默认15
/// @param endTime 查询时间戳（格式：1555903586000），用于查询时间早于等于此时间的消息。参数传递: 查询最新消息传 0 ；可配合实现分页，传EZIoTMsgListResp.timestamp。
/// @param date 可选，查询特定某天的数据（格式：YYYYMMDD，如20190201即可）
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getMessageListWithSubTypes:(NSString *)categorySubtypes
                              limit:(NSInteger)limit
                            endTime:(NSString *)endTime
                               date:(NSString *)date
                            success:(void(^)(EZIoTMsgListResp *resp))success
                            failure:(void(^)(NSError *error))failure;

/// 获取指定消息详情
/// @param subType 指定消息子类型
/// @param msgId 指定消息id
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getMessageInfoWithMsgSubType:(NSInteger )subType
                                msgId:(NSString *)msgId
                              success:(void(^)(EZIoTMsgInfo *msgInfo))success
                              failure:(void(^)(NSError *error))failure;

/// 获取指定消息分类免打扰状态
/// @param categoryType 消息分类类型
/// @param success 成功回调，enableNoDisturb免打扰是否开启
/// @param failure 失败回调
+ (void) getMessageNodisturbingStatusWithType:(NSInteger)categoryType
                                      success:(void(^)(BOOL enableNoDisturb))success
                                      failure:(void(^)(NSError *error))failure;

/// 设置指定消息分类免打扰状态
/// @param categoryType 消息分类类型
/// @param enableNoDisturb 使能状态
/// @param success 成功回调
/// @param failure 失败回调
+ (void) setMessageNodisturbingStatusWithType:(NSInteger)categoryType
                              enableNoDisturb:(BOOL)enableNoDisturb
                                      success:(void(^)(void))success
                                      failure:(void(^)(NSError *error))failure;

/// 消息已读、删除操作，支持多选及全部操作
/// @param msgCategory 消息分类
/// @param action 操作类型
/// @param selectMsgs 可选，如指定消息需传入，如action=read， selectMsgs=[msg1, msg2]
/// @param success 成功回调
/// @param failure 失败回调
+ (void) messageOperationWithCategory:(EZIoTMsgCategoryInfo *)msgCategory
                               action:(EZIoTMsgOpertionActionType)action
                            selectMsg:(NSArray <EZIoTMsgInfo *>* _Nullable)selectMsgs
                              success:(void(^)(void))success
                              failure:(void(^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END

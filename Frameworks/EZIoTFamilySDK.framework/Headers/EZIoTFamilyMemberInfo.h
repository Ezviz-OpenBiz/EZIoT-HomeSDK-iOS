//
//  EZIoTFamilyMemberInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 家庭成员信息类
@interface EZIoTFamilyMemberInfo : NSObject

///成员被邀请时间
@property(nonatomic,copy) NSString *inviteTime;
///成员加入时间
@property(nonatomic,copy) NSString *joinTime;
///成员UserId
@property(nonatomic,copy) NSString *memberUserId;
///成员昵称
@property(nonatomic,copy) NSString *nick;
///成员手机号
@property(nonatomic,copy) NSString *phone;
///成员联系方式
@property(nonatomic,copy) NSString *contact;
///成员账号
@property(nonatomic,copy) NSString *account;
///所属的家庭Id
@property(nonatomic,copy) NSString *familyId;
///成员Id
@property(nonatomic,copy) NSString *identifier;
///邀请状态 0:等待加入; 1:已加入 2:拒绝加入 3:已过期
@property(nonatomic,assign) NSInteger status;
/// 成员类型  0：主人  1:成员
@property(nonatomic,assign) NSInteger type;

@end

NS_ASSUME_NONNULL_END

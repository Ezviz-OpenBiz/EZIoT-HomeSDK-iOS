//
//  EZIoTUserProfileInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserProfileInfo : NSObject

@property(nonatomic,copy) NSString *avatarPath;
@property(nonatomic,copy) NSString *birth;
@property(nonatomic,copy) NSString *email;
@property(nonatomic,copy) NSString *homeTitle;
@property(nonatomic,copy) NSString *lastLoginDevice;
@property(nonatomic,copy) NSString *lastLoginTime;
@property(nonatomic,copy) NSString *location;
@property(nonatomic,copy) NSString *memberName;
@property(nonatomic,copy) NSString *phone;
@property(nonatomic,copy) NSString *referral;
@property(nonatomic,copy) NSString *showEmail;
@property(nonatomic,copy) NSString *showPhone;
@property(nonatomic,copy) NSString *userName;
@property(nonatomic,assign) NSInteger userType;
@property(nonatomic,assign) NSInteger gender;
@property(nonatomic,assign) NSInteger regDate;
@property(nonatomic,assign) NSInteger memberLevel;

@end

NS_ASSUME_NONNULL_END

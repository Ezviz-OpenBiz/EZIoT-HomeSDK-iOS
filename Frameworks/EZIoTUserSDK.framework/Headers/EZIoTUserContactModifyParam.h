//
//  EZIoTUserContactModifyParam.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserContactModifyParam : NSObject

@property (nonatomic, copy) NSString *oldContactSMScode;  //旧联系方式（手机号/邮箱）的验证码
@property (nonatomic, assign) NSInteger oldSMSType;       //旧联系方式的验证码类型，手机：1   邮箱：3

@property (nonatomic, copy) NSString *newPhone;        //待修改的新手机号，修改邮箱时不需要填写
@property (nonatomic, copy) NSString *newPhoneSMScode; //新手机接收到的验证码

@property (nonatomic, copy) NSString *newEmail;        //待修改的新邮箱号，修改手机号时不要填写
@property (nonatomic, copy) NSString *newEmailSMSkcode;//新邮箱接收到的验证码

- (NSString *)newPhone __attribute__((objc_method_family(none)));
- (NSString *)newPhoneSMScode __attribute__((objc_method_family(none)));
- (NSString *)newEmail __attribute__((objc_method_family(none)));
- (NSString *)newEmailSMSkcode __attribute__((objc_method_family(none)));

@end

NS_ASSUME_NONNULL_END

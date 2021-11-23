//
//  EZIoTUserLoginParam.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/2.
//

#import <Foundation/Foundation.h>
#import "EZIoTUserAccountManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserLoginParam : NSObject
@property (nonatomic, copy) NSString *account;    //必填，账号（手机or邮箱）
@property (nonatomic, copy) NSString *password;   //必填，登录密码
@property (nonatomic, copy) NSString *phoneCode;  //选填，如account为手机号，需传入电话区号。默认会从本地缓存中获取（可通过该 - setAreaInfo: 方法设置）
@property (nonatomic, copy) NSString *imageCode;  //选填，图形验证码，当登录失败且达到登录上限时，需要通过图形验证码验证登录
@property (nonatomic, copy) NSString *smsCode;    //选填，短信（邮箱）验证码，配合终端管理功能使用
@property (nonatomic, assign) EZIoTUserBizType bizType;  //选填，业务类型，如当开启终端管理功能时，首次登录的设备通过验证，此时需要传入 EZIoTUserBizTypeTerminalBind 类型。正常登录逻辑则不需要
@end

NS_ASSUME_NONNULL_END

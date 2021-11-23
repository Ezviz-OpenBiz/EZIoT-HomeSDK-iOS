//
//  EZIoTUserAccountManager.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class UIImage,EZIoTUserSessionInfo,EZIoTUserLoginParam,EZIoTUserTerminalInfo,EZIoTUserTerminalStatus,EZIoTUserTerminal,EZIoTDeleteTeminalParam;

typedef NS_ENUM(NSUInteger, EZIoTUserBizType) {
    EZIoTUserBizTypeRegister  = 1001,         //注册业务
    EZIoTUserBizTypeRetrievePassword, //重置密码
    EZIoTUserBizTypeTerminalBind,     //终端绑定
    EZIoTUserBizTypeTerminalDelete,   //终端删除
    EZIoTUserBizTypeAccountDelete,    //账户注销
    EZIoTUserBizTypeUpdatePhoneValidateOldPhone,  // 更新手机号业务校验旧手机验证
    EZIoTUserBizTypeUpdatePhoneValidateNewPhone,  // 更新手机号业务校验新手机验证
    EZIoTUserBizTypeUpdatePhoneValidateOldEmail,  // 更新手机号业务校验旧邮箱验证
    EZIoTUserBizTypeUpdateEmailValidateOldEmail,  // 更新邮箱业务校验旧邮箱验证
    EZIoTUserBizTypeUpdateEmailValidateNewEmail,  // 更新邮箱业务校验新邮箱验证
    EZIoTUserBizTypeUpdateEmailValidateOldPhone   // 更新邮箱业务校验旧手机验证码
};

/// 用户账号操作管理类
@interface EZIoTUserAccountManager : NSObject

#pragma mark - Verify Operation

/// 获取验证码接口
/// @param account 账号（手机or邮箱）
/// @param phoneCode 如account为手机号，需传入电话区号，可通过 EZIoTUserAreaInfo 中phoneCode字段传入
/// @param bizType 需要区分业务类型，详见EZIoTUserBizType
/// @param success 成功回调  接口调用成功后，通过手机短信（邮箱）查看验证码
/// @param failure 失败回调
+ (void) getSMSCodeWithAccount:(NSString *)account
                     phoneCode:(NSString *)phoneCode
                       bizType:(EZIoTUserBizType)bizType
                       success:(void(^)(void)) success
                       failure:(void(^)(NSError *error))failure;

/// 获取图形验证码接口
/// @param account  账号（手机or邮箱）
/// @param phoneCode 如account为手机号，需传入电话区号，可通过 EZIoTUserAreaInfo 中phoneCode字段传入
/// @param success 成功回调 返回验证码图片
/// @param failure 失败回调
+ (void) getVerifyCodeImageWithAccount:(NSString *)account
                             phoneCode:(NSString *)phoneCode
                               success:(void(^)(UIImage *verifyCodeImage)) success
                               failure:(void(^)(NSError *error))failure;

/// 验证码校验接口
/// @param account 账号（手机or邮箱）
/// @param phoneCode 如account为手机号，需传入电话区号，可通过 EZIoTUserAreaInfo 中phoneCode字段传入
/// @param smsCode 验证码，通过 getSMSCodeWithAccount: 接口获取
/// @param bizType 业务类型，详见EZIoTUserBizType
/// @param success 成功回调
/// @param failure 失败回调
+ (void)verifySmsCodeWithAccount:(NSString *)account
                       phoneCode:(NSString *)phoneCode
                         smsCode:(NSString *)smsCode
                         bizType:(EZIoTUserBizType)bizType
                         success:(void(^)(void)) success
                         failure:(void(^)(NSError *error))failure;


#pragma mark - Account Base Operation

/// 新用户注册接口
/// @param account  账号（手机or邮箱）
/// @param password 密码
/// @param areaId 国家ID
/// @param phoneCode 如account为手机号，需传入电话区号，可通过 EZIoTUserAreaInfo 中phoneCode字段传入
/// @param smsCode 验证码，通过 getSMSCodeWithAccount: 接口获取
/// @param success 成功回调
/// @param failure 失败回调
+ (void)registWithAccount:(NSString *)account
                 password:(NSString *)password
                   areaId:(NSString *)areaId
                phoneCode:(NSString *)phoneCode
                  smsCode:(NSString *)smsCode
                  success:(void(^)(EZIoTUserSessionInfo *sessionInfo)) success
                  failure:(void(^)(NSError *error))failure;


/// 重置密码接口
/// @param account 账号（手机or邮箱）
/// @param password 新密码
/// @param phoneCode 如account为手机号，需传入电话区号，可通过 EZIoTUserAreaInfo 中phoneCode字段传入
/// @param smsCode 验证码，通过 getSMSCodeWithAccount: 接口获取
/// @param success 成功回调
/// @param failure 失败回调
+ (void)resetPasswordWithAccount:(NSString *)account
                        password:(NSString *)password
                       phoneCode:(NSString *)phoneCode
                         smsCode:(NSString *)smsCode
                         success:(void(^)(void)) success
                         failure:(void(^)(NSError *error))failure;

/// 登录接口，该方法内部会缓存数据信息
/// 相关错误码说明：
/// 1011 验证码不正确:已发验证码填错小于三次
/// 1012 验证码失效,请重新获取:填错第五次或过期
/// 1013 用户不存在
/// 1014 密码错误
/// 1015 用户被锁住
/// 1043 验证码错误超过规定次数: 填错第四次
/// 1069 账户已开启终端管理，用户终端数超过限制，此时会返回一个terminalData对象(bizyType=EZIoTUserBizTypeTerminalDelete)。在删除其他终端后方可登录
/// 6002 账户已开启终端管理，用户在新的手机终端登录，需要输入验证码，并带上bizyType(EZIoTUserBizTypeTerminalBind)，再次调用该接口进行登录
/// @param param 登录参数，详见 EZIoTUserLoginParam 类中属性描述
/// @param success 成功回调，返回session、终端绑定信息（需开启终端管理功能）
/// @param failure 失败回调
+ (void)loginWithParam:(EZIoTUserLoginParam *)param
               success:(void(^)(EZIoTUserSessionInfo * sessionInfo, EZIoTUserTerminalInfo * terminalInfo)) success
               failure:(void(^)(NSError *error, EZIoTUserTerminalInfo * _Nullable terminalInfo))failure;

/// 退出登录接口
/// @param success 成功回调
/// @param failure 失败回调
+ (void) logoutWithSuccess:(void(^)(void))success
                   failure:(void(^)(NSError *error))failure;

/// 注销账号接口，调用该接口账号将从数据库中删除
/// @param smsCode 验证码，通过 getSMSCodeWithAccount 接口获取，需要区分bizType业务类型
/// @param smsType 验证码类型，手机：1   邮箱：3
/// @param success 成功回调
/// @param failure 失败回调
+ (void) delAccountWithSmsCode:(NSString *)smsCode
                       smsType:(NSInteger)smsType
                       success:(void(^)(void))success
                       failure:(void(^)(NSError *error))failure;

/// 通过refreshSession刷新登录鉴权句柄session。session有效期为24小时，refreshSession为30天。
/// 需要调用的场景：
/// 1. 当EZIoTUserInfo.isAutoLogin 为NO时；
/// 2. 当接口请求返回401错误码，鉴权失败时；
/// @param success 成功回调
/// @param failure 失败回调
+ (void)refreshSessionWithSuccess:(void(^)(void)) success
                          failure:(void(^)(NSError *error))failure;


#pragma mark - Terminal Manage


/// 获取终端管理状态
/// @param success 成功回调
/// @param failure 失败回调
+ (void) getTerminalEnableStatusWithSuccess:(void(^)(EZIoTUserTerminalStatus *terminalStatus)) success
                                    failure:(void(^)(NSError *error))failure;

/// 设置终端管理状态
/// @param enable 开启/关闭
/// @param terminalStatus 终端管理状态，通过 getTerminalEnableStatusWithSuccess:failure: 接口获取
/// @param smsCode 验证码，通过 getSMSCodeWithAccount 接口获取，需要区分bizType业务类型
/// @param smsType 验证码类型，手机：1   邮箱：3
/// @param success 成功回调
/// @param failure 失败回调
+ (void) setTerminalStatusWithEnable:(BOOL)enable
                      terminalStatus:(EZIoTUserTerminalStatus *)terminalStatus
                             smsCode:(NSString *)smsCode
                             smsType:(NSInteger)smsType
                             success:(void(^)(void)) success
                             failure:(void(^)(NSError *error))failure;

/// 获取终端绑定列表
/// @param offset 偏移量，默认0
/// @param page 分页大小，默认10
/// @param success 成功回调
/// @param failure 失败回调
+ (void)getTerminalsListWithOffset:(NSInteger)offset
                              page:(NSInteger)page
                           success:(void(^)(NSArray <EZIoTUserTerminal*>* terminalList)) success
                           failure:(void(^)(NSError* error)) failure;

/// 删除绑定终端
/// @param param 终端删除参数，详见EZIoTDeleteTeminalParam
/// @param success 成功回调
/// @param failure 失败回调
+ (void) deleteTerminalsWithParam:(EZIoTDeleteTeminalParam *)param
                          success:(void(^)(void))success
                          failure:(void(^)(NSError* error))failure;


@end

NS_ASSUME_NONNULL_END

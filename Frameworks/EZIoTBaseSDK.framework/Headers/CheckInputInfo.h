//
//  CheckInputInfo.h
//  VideoGo
//
//  Created by wying3344 on 13-7-31.
//
//

#import <UIKit/UIKit.h>

//这个更像工具类
@interface CheckInputInfo : NSObject
// 检查登录用户名和密码是否合理
+ (NSString *)checkLoginAccount:(NSString *)account password:(NSString *)password;
// 检查用户名输入是否合理(注册)
+ (NSString *)checkUserName:(NSString *)userName;

// 检查密码输入是否合理（注册、找回密码、修改密码、安全密码）
+ (NSString *)checkPassword:(NSString *)password;
//检查风险密码提示
+ (NSString *)checkNoSafePassword:(NSString *)password;

// 检查重新输入密码是否合理（注册、找回密码、修改密码、安全密码）
// rePasswprd 确认密码
+ (NSString *)checkRepeatPassword:(NSString *)password
                        andRepeat:(NSString *)rePasswprd;

// 检查输入加密密码是否符合规范（加密密码）
+ (NSString *)checkEncryptPassword:(NSString *)password;

// 检查输入手机号码是否合理（注册、找回密码）
+ (NSString *)checkPhoneNumber:(NSString *)phone;
+ (BOOL)checkIsNumbers:(NSString *)phone;

// 检查图片验证码输入是否合理（注册）
+ (NSString *)checkImageVCode:(NSString *)imgCode;

// 检查手机验证码输入是否合理（注册）
+ (NSString *)checkPhoneVCode:(NSString *)vCode;

// 检查输入的固定电话号码是否正确（修改企业用户信息）
+ (NSString *)checkFixPhone:(NSString *)fixPhone;

// 检查企业地址输入是否合理（修改企业用户信息）
+ (NSString *)checkAddress:(NSString *)address;

// 检查联系人信息输入是否合理（修改联系人信息）
+ (NSString *)checkContact:(NSString *)contact;

// 检查昵称信息输入是否合理（修改昵称）
+ (NSString *)checkNickName:(NSString *)nickName;

// 检查邮箱输入是否正确（修改邮箱信息）
+ (NSString *)checkMailAddress:(NSString *)mail;

// 检查输入名称是否合理（摄像机、设备名称修改）
+ (NSString *)checkDeviceName:(NSString *)deviceName;

// 检查输入分组名称是否合适
+ (NSString *)checkGroupName:(NSString *)groupName;

+ (NSString *)checkName:(NSString *)name maxLen:(NSInteger)max;

// 检查wifi密码输入是否合理
+ (NSString *)checkWifiPassword:(NSString *)string;
// 检查wifi名称输入是否合理
+ (NSString *)checkWifiName:(NSString *)string;
// 检查行业设备激活密码是否合理
+ (BOOL)checkActivatePassword:(NSString *)password;

//// 检查行业设备激活密码是否合理
//+ (BOOL)checkActivatePassword:(NSString *)password;

// 检查输入是否为特殊字符
+ (BOOL)checkSpecialCharacter:(NSString *)string;

// ---------------------
// 检查手机号码字符输入
+ (BOOL)checkStringPhone:(NSString *)string;
// 检查手机验证码输入
+ (BOOL)checkStringPhoneVcode:(NSString *)string;
// 检查固定电话输入
+ (BOOL)checkStringFixPhone:(NSString *)string;

// 检查输入是否为数字或字母
+ (BOOL)checkStringNumberOrLetter:(NSString *)string;

// 检查输入是否为ascii字符
+ (BOOL)checkCharIsASCIILetter:(NSString *)charString;

// 检查手机号码前三位是否合理
+ (BOOL)checkStringKnowPhoneType:(NSString *)string;
// 检查是否是手机号码
+ (BOOL)checkIsPhone:(NSString *)string;

+ (BOOL)checkIsFriendRemark:(NSString *)friendRemark;

// --------------------
// 获取用户手机名称
+ (NSString *)getUserPhoneName;

// 判断字符串是否包含表情
+ (BOOL)checkStringHasEmoji:(NSString *)string;

+ (BOOL)checkLatitude:(NSString *)latitude;

+ (BOOL)checkLongitude:(NSString *)longtitude;

//判断是否包含中文、字母、数字字符（正则）
+ (BOOL)checkNotSpecialChar:(NSString *)string;
//判断是否是IP地址
+ (BOOL)checkIPAddress:(NSString *)input;
@end

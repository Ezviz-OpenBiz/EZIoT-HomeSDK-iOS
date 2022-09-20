//
//  EZIoTDeviceInfo+Extension.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/8/17.
//

#import <Foundation/Foundation.h>
#import "EZIoTDeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTDeviceInfo (Extension)

- (BOOL)isOnline;
- (BOOL)isPrivaceOn;

#pragma mark - Basic & Capability

- (BOOL)isSupportP2pV3;
- (BOOL)isSupportV3Sec;
- (BOOL)isSupportReverseDirect;
- (BOOL)isSupportNewReverseDirect;
- (BOOL)isSupportPreP2PPlay;
- (BOOL)isSupportP2PV3Playback;
- (BOOL)isSupportPlaybackEndFlag;
- (BOOL)isSupportTTSTalk;
- (BOOL)isSupportEncryptionPlaintextSteam;

#pragma mark - 设备密码相关

+ (void)clearAllDeviceTmpPwd;   // 清除所有设备密码（内存中的临时密码）
+ (void)clearAllDevicePassword; // 清除所有设备密码(包括临时密码和磁盘缓存的密码)
+ (void)saveAllDevicePassword;  // 保存所有设备临时密码

- (NSString *)getDevicePassword;                    // 设备视频流加密密码（用户输入的明文密码）
- (void)saveDevicePassword:(NSString *)password;

- (NSString *)getDeviceValidPwd;// 获得设备验证码
- (void)saveDeviceValidPassword:(NSString *)validPassword;//保存设备验证码
- (BOOL)checkDevicePasswordIsValid;
- (void)clearDevicePassowrd; //清除设备密码磁盘、内存

- (NSString *)getCloudPassword; // 获取云密码,这里逻辑上返回一个密码，默认最新的，如果已调用checkCloudPasswordIsValid校验成功，会返回校验成功的密码
- (void)saveCloudPassword:(NSString *)password;         // 存储云密码
- (BOOL)checkCloudPasswordIsValid:(NSString *)password; // 判断当前云密码是否有效

- (NSString *)getUsagePassword; // 获取当前【使用密码】（取代原有m_strPassWord)（登陆设备使用用户密码（1.7版本后记录设备安全密码））
- (void)deleteDevicePasswords;  // 清空本设备的所有密码

- (NSMutableArray *)getCloudPasswordArray;

- (BOOL)isEncrypt;
- (NSString *)encryptPwd;


@end

NS_ASSUME_NONNULL_END

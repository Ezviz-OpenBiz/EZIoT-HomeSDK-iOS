//
//  EZIoTDeleteTeminalParam.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTUserTerminalStatus,EZIoTUserTerminalInfo,EZIoTUserTerminal;

@interface EZIoTDeleteTeminalParam : NSObject

/// 终端信息
@property(nonatomic, strong) EZIoTUserTerminalInfo *terminalInfo;
/// 需要删除的终端列表
@property(nonatomic, strong) NSArray <EZIoTUserTerminal *>*deleteTerminals;

/// 登录且当前设备已被绑定时不需要传。验证码，通过 getSMSCodeWithAccount 接口获取，需要区分bizType业务类型
@property(nonatomic, copy)   NSString *smsCode;
/// 登录且当前设备已被绑定时不需要传。验证码类型，手机：1   邮箱：3
@property(nonatomic, assign) NSInteger smsType;

@end

NS_ASSUME_NONNULL_END

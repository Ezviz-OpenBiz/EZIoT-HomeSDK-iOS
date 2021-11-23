//
//  YSSafeKeychain.h
//  ClearKeychain
//
//  Created by qiandong on 29/03/2017.
//  Copyright © 2017 hikvision. All rights reserved.
//

/*
 IOS8 - IOS9.2中会偶现keychain获取为nil的系统bug。
 为兼容，这里考虑以下策略：
 set时，如果keychain返回失败，则存到userDefault里；
 get时，如果kechain返回为nil，则从userDefault里读取；
 */

#import <Foundation/Foundation.h>

@interface YSSafeKeychain : NSObject

+ (void)setPassword:(NSString *)password forService:(NSString *)serviceName account:(NSString *)account;

+ (NSString *)passwordForService:(NSString *)serviceName account:(NSString *)account;


@end

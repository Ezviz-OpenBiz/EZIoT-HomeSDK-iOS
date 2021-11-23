//
//  NSError+YSError.h
//  VideoGo
//
//  Created by Bryant on 15/12/7.
//  Copyright © 2015年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (YSError)

// 根据error code和error message返回错误
+ (instancetype)errorWithErrorCodeMsg:(NSInteger)code errorMsg:(NSString *)errorMsg;

// Get user message from error
- (NSString *)errorUserMessage;

- (NSString *)errorReason;

@end

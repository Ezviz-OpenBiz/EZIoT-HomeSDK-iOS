//
//  NSString+YSKit.h
//  VideoGo
//
//  Created by DeJohn Dong on 2017/5/9.
//  Copyright © 2017年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (YSKit)

/**
 格式化输出Count的值

 @param count 当前数量
 @return 格式化输出
 */
+ (NSString *)ys_makeCountFormat:(NSInteger)count;


/**
 获取特殊字符

 @return 特殊字符 
 */
+ (NSString *)ys_allPunctuationsAsString;

// 过滤出数字字符串
+ (NSString *)fetchNumberStringFrom:(NSString *)source;

@end

//
//  NSString+Util.h
//  IOS-Categories
//
//  Created by Jakey on 15/5/22.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSString (Util)
- (CGFloat)heightWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;
- (CGFloat)widthWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

- (CGSize)sizeWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;
- (CGSize)sizeWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

+ (NSString *)reverseString:(NSString *)strSrc;

/// 解析 HH:mm 时分格式
+ (NSInteger)hourFromTime:(NSString *)time;
+ (NSInteger)minuteFromTime:(NSString *)time;

@end

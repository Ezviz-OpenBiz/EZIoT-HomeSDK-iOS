//
//  YSParseResponseUtil.h
//  YSNetwork
//
//  Created by qiandong on 8/2/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YSParseJsonUtil : NSObject

+(NSDictionary *)parseSerialAndObject:(id)jsonObject class:(Class)_class;
+(NSDictionary *)parseSerialAndArray:(id)jsonObject class:(Class)_class;
+(NSDictionary *)newFilterParseSerialAndArray:(id)jsonObject class:(Class)_class;
+(id)parseJsonObject:(id)jsonObject class:(Class)_class;

@end

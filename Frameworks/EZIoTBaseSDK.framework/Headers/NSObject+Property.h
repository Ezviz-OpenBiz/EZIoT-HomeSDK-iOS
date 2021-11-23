//
//  NSObject+Property.h
//  IOS-Categories
//
//  Created by Jakey on 14/12/20.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Property)
-(NSDictionary *)propertyDictionary;

+ (NSArray *)classPropertyList;

-(void)resetAllPropertyValue; //重置所有property为默认值。（对象为nil、BOOL为NO、数值为0）

-(void)resetAllIvarValue; //重置所有instance variable为默认值,不会触发setter方法。（对象为nil、BOOL为NO、数值为0）

@end

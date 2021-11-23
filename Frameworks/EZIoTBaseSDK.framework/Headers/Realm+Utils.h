//
//  RLMArray+Utils.h
//  YSNetwork
//
//  Created by qiandong on 7/29/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import <Realm/Realm.h>

@interface RLMRealm (Utils)

- (void)safeDeleteObject:(nonnull RLMObject *)object;
- (void)safeDeleteObjects:(nonnull id)array;

@end

@interface RLMArray (Utils)

- (BOOL)containsObject:(nonnull RLMObject *)anObject;
- (NSMutableArray * _Null_unspecified)allObjects;
- (NSMutableArray * _Null_unspecified)allUnmanagedObjects;

@end

@interface RLMResults (Utils)

- (NSMutableArray * _Null_unspecified)allObjects;
- (NSMutableArray * _Null_unspecified)allUnmanagedObjects;

@end

@interface RLMObject (Utils)

//RLMObject被删除时，会收到通知
- (void)notifyWhenInvalidWithBlock:(nonnull void(^)(void))block;

//转为未受管理对象。可以赋值元类型、系统基本对象、自定义非RLMObject对象，自定义RLMObject对象、RLMArray等。能一直递归。
- (nullable id)unmanagedObj;

- (BOOL)isRemoved; 

//进行create or update对象(必须有primaryKey)。目前只支持一层，不能递归。其中ignoreProperties属性被忽略。
+ (void)createOrUpdateWithObject:(nonnull RLMObject *)object customIgnoreProperties:(nullable NSArray<NSString *> *)ignoreProperties;
@end


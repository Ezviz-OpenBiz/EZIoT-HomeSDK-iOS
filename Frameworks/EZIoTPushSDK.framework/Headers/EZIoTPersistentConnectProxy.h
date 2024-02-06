//
//  EZIoTPersistentConnectProxy.h
//  EZIoTPushSDK
//
//  Created by yuqian on 2021/7/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// EZIoTPersistentConnect的代理类，用于多代理管理
@interface EZIoTPersistentConnectProxy : NSProxy

/// 获取单例对象
+ (EZIoTPersistentConnectProxy *)getInstance;

/// 添加代理对象
/// @param delegate 代理对象
- (void) addDelegate:(id)delegate;

/// 添加多个代理对象
/// @param delegates 代理对象数组
- (void) addDelegates:(NSArray *)delegates;

/// 移除指定代理对象
/// @param delegate 代理对象
- (void) removeDelegate:(id)delegate;

/// 移除所有代理对象
- (void) removeAllDelegate;

/// 代理响应方法判断
/// @param aSelector 指定方法
- (BOOL) respondsToSelector:(SEL)aSelector;

/// 指定代理响应方法判断
/// @param aSelector 指定方法
/// @param delegate 指定代理
- (BOOL) respondsToSelector:(SEL)aSelector delegate:(id)delegate;

@end

NS_ASSUME_NONNULL_END

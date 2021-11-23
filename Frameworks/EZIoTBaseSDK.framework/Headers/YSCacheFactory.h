//
//  YSCacheFactory.h
//  CacheBenchmark
//  用户缓存创建和删除的工厂类
//  由于YYMemoryCache和YYDiskCache采用的数据结构不同，对于相同的key的处理策略存在区别，因此通过增加此工厂类进行处理
//  Created by zhil.shi on 16/5/4.
//  Copyright © 2016年 ibireme. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YYCache.h"

@interface YSCacheFactory : NSObject
/**
 *  根据名称创建内存缓存
 *
 *  @param name 名称
 *
 *  @return 内存缓存
 */
+ (YYMemoryCache *)memoryCacheForName:(NSString *)name;

/**
 *  根据名称创建磁盘缓存
 *
 *  @param name 名称
 *  备注:20k的阈值，20k以下存数据库，20k以上文件存储。效率最高。
 *  @return 磁盘缓存
 */
+ (YYDiskCache *)diskCacheForName:(NSString *)name;

/**
 *  根据名称创建内存＋磁盘缓存
 *
 *  @param name 名称
 *
 *  @return 缓存
 */
+ (YYCache *)cacheForName:(NSString *)name;

/**
 *  删除内存缓存
 *
 *  @param memoryCache 内存缓存
 */
+ (void)deleteMemoryCache:(YYMemoryCache *)memoryCache;

/**
 *  删除磁盘缓存
 *
 *  @param diskCache 磁盘缓存
 */
+ (void)deleteDiskCache:(YYDiskCache *)diskCache;

/**
 *  删除缓存
 *
 *  @param cache 缓存
 */
+ (void)deleteCache:(YYCache *)cache;

@end

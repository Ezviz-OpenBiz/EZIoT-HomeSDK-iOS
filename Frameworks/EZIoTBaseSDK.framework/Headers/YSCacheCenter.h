//
//  YSCacheCenter.h
//  VideoGo
//  缓存中心，统一出口
//  Created by zhilshi on 16/6/1.
//  Copyright © 2016年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYCache/YYCache.h>


@interface YSCacheCenter : NSObject
/**
 *  缺省的内存缓存
 *  @return YYMemoryCache
 */
+ (YYMemoryCache *)defaultMemoryCache;

/**
 *  缺省的磁盘缓存
 *  @return YYDiskCache
 */

+ (YYDiskCache *)defaultDiskCache;

/**
 *  设备数据的内存缓存(含device、camera、detector等等)
 *  @return YYMemoryCache
 */
+ (YYMemoryCache *)deviceMemoryCache;

/**
 *  根据路径 生成对应的cache
 *
 *  @param name 名称
 *
 *  @return YYCache
 */
+ (YYCache *)createCacheWithName:(NSString *)name;

/**
 *  获取默认的云空间缓存对象
 *
 *  @return YYCache
 */
+ (YYCache *)defaultCloudSpaceCache;

/**
    获取系统级数据缓存cache

 @return YYCache
 */
+ (YYCache *)defaultSysCache;

/**
 广告图片缓存
 */
+ (YYDiskCache *)advertPicDiskCache;


/**
 获取预览相关的临时内存缓存
 进入后台 不清除
 @return YYMemoryCache
 */
+ (YYMemoryCache *)cameraMutableRealMemoryCache;

/**
 获取预览的缓存

 @return YYDiskCache
 */
+ (YYCache *)cameraMutableRealCache;

/**
 设备升级信息存储

 @return YYCache
 */
+ (YYCache *)deviceUpdateInfoCache;
//多通道设备预览
+ (YYCache *)dvrRealCamerasCache;
+ (YYCache *)localDeviceCache;
+ (YYCache *)tokenManageCache;
#pragma mark - wrapper
+ (void)updateReachableVia2G3G:(BOOL)via;
+ (BOOL)currentReachableVia2G3G;

//RN cache
+ (YYCache *)rnInfoCache;
@end

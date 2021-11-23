//
//  YSDCLog+Ext.h
//  VideoGo
//
//  Created by qiandong on 19/06/2017.
//  Copyright © 2017 hikvision. All rights reserved.
//

#import "YSDCLog.h"
@interface YSDCLog(Ext)

/**
 萤石事件统计

 @param key 事件统计key
 */
+ (void)logUserAction:(NSInteger)key;

+ (void)logDeviceIntelligentAction:(NSInteger)key type:(NSString *)type;

@end

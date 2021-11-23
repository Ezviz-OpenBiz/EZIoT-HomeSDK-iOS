//
//  YSNetworkStatusMonitor.h
//  YSNetwork
//
//  Created by qiandong on 8/11/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

#define YS_NET_UNKNOWN          @"unknown"
#define YS_NET_NONET            @"nonetwork"
#define YS_NET_WIFI             @"wifi"
#define YS_NET_3G_CDMA1X        @"2g_cdma"       //电信2G网络
#define YS_NET_3G_CDMAEVDORev0  @"3g_cdmaRev0"   //电信3G Rev0
#define YS_NET_3G_CDMAEVDORevA  @"3g_cdmaRevA"   //电信3G RevA
#define YS_NET_3G_CDMAEVDORevB  @"3g_cdmaRevB"   //电信3G RevB
#define YS_NET_2G_EDGE          @"2g_edge"       //移动/联通E网 (2G网络)
#define YS_NET_2G_GPRS          @"2g_gprs"       //移动/联通GPRS(2G网络)
#define YS_NET_3G_HSDPA         @"3g_hsdpa"      //移动/联通3G网络  (虽然移动用的是td而不是wcdma但也算是3G)
#define YS_NET_3G_HSUPA         @"3g_hsupa"      //移动/联通3G网络
#define YS_NET_3G_WCDMA         @"3g_wcdma"      //3G WCDMA网络
#define YS_NET_3G_HRPD          @"3g_cdma_hrpd"  //3G CDMA网络
#define YS_NET_4G_LTE           @"4g_lte"        //4G网络

#define YS_NETWORK_CHANGED  @"YS_NETWORK_CHANGED"
#define YS_NET_TYPE @"YS_NET_TYPE"
#define YS_NET_NAME @"YS_NET_NAME"

@interface YSNetworkStatusMonitor : NSObject

+(NSString *)netType;   //netType 网络具体类型：
+(NSString *)netName;   //netName 网络名称：WWAN下是运营商名称，WIFI下是WIFI的MAC

@end

//
//  YSComRequest.h
//  YSNetwork
//
//  Created by qiandong on 7/1/16.
//  Copyright © 2016 hikvision. All rights reserved.
//
#import <MJExtension/MJProperty.h>
#import <MJExtension/MJExtension.h>
#import "YSRequest.h"
#import "YSDTOCommon.h"

#define RETURN_BUSSINESS_ERROR   if (meta.code != 200) { \
NSError *error = [NSError errorWithDomain:@"业务错误" code:-12 userInfo:nil];   \
failBlock(error);   \
return; \
}   \

@interface YSCommonRequest : YSRequest

@end

//
//  V2CommonAgent.h
//  YSNetwork
//
//  Created by qiandong on 7/13/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import "YSNetworkAgent.h"

@interface V2CommonAgent : YSNetworkAgent

//暴露给子类
- (void)taskLevelChallengeForHttpDNS;
-(NSURLSessionConfiguration *)urlSessionConfiguration;

@end

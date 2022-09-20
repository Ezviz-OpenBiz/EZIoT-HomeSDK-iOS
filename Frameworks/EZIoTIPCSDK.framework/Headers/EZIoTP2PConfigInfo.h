//
//  YSP2PConfigInfo.h
//  VideoGo
//
//  Created by Bryant on 17/5/27.
//  Copyright © 2017年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EZIoTP2PConfigInfo;
@interface EZIoTP2PConfigInfo : NSObject

// [ { "ip": "123.4.5.6", "port": 8080 }, { "ip": "123.45.67.4", "port": 8080 } ]
@property (nonatomic, strong) NSArray<NSDictionary *> *serverInfos;

@property (nonatomic, assign) NSTimeInterval expireTime;

@property (nonatomic, strong) NSString *ticket;

@property (nonatomic, strong) NSDictionary *secret;

@end

@interface EZIoTP2PSecretInfo : NSObject

@property (nonatomic, strong) NSNumber *version;

@property (nonatomic, strong) NSNumber *saltIndex;

@property (nonatomic, assign) NSTimeInterval expireTime;

@property (nonatomic, strong) NSArray *data;
@end

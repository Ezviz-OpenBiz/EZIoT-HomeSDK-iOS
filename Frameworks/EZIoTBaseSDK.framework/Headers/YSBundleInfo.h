//
//  YSBundleInfo.h
//  VideoGo
//
//  Created by DeJohn Dong on 2018/4/9.
//  Copyright © 2018年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YSBundleInfo : NSObject

@property (copy, readonly, nonatomic) NSString *name;
@property (copy, readonly, nonatomic) NSString *version;
@property (copy, readonly, nonatomic) NSString *shortVersion;
@property (copy, readonly, nonatomic) NSString *build;
@property (copy, readonly, nonatomic) NSString *versionAndBuild;

+ (instancetype)sharedInstance;

@end

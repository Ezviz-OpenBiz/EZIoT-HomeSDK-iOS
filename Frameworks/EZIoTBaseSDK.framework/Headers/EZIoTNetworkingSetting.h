//
//  EZIoTNetworkingSetting.h
//  EZIoTNetworkingSetting
//
//  Created by yuqian on 2021/5/19.
//

#import <Foundation/Foundation.h>

@interface EZIoTNetworkingSetting : NSObject

@property (nonatomic, copy) NSString *httpsUrl;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *packageId;

@property (nonatomic, copy) NSString *sessionId;

+ (instancetype)sharedInstance;
+ (NSString *) getVersion;

@end

//
//  EZIoTFileDownloadMgr.h
//  EZIoTBluetoothSDK
//
//  Created by yuqian on 2021/9/15.
//

#import <Foundation/Foundation.h>
#import "EZIoTBLECommonDefine.h"

NS_ASSUME_NONNULL_BEGIN


@interface EZIoTFileDownloadMgr : NSObject

+ (instancetype) sharedInstance;

- (void) startDownloadWithUrl:(NSURL *)url
                          pid:(NSString *)pid
                      version:(NSString *)version
                     progress:(EZIoTBleDidRecivedProgressBlock)progress
                   completion:(EZIoTBleDidFinishedDownloadBlock)completionn;

- (void) stop;

- (void) suspend;

- (void) resume;

@end

NS_ASSUME_NONNULL_END

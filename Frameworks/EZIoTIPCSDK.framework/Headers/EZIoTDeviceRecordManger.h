//
//  EZIoTDeviceRecordManger.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2021/11/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTLocalFile;

@interface EZIoTDeviceRecordManger : NSObject

+ (void) searchRecordsFromDevice:(NSString *)deviceSerial
                       channelNo:(NSInteger )channelNo
                       startTime:(NSTimeInterval)startTime
                        stopTime:(NSTimeInterval)stopTime
                            size:(NSInteger)size
                         success:(void(^)(NSArray<EZIoTLocalFile *> * _Nonnull localFiles)) success
                         failure:(void(^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END

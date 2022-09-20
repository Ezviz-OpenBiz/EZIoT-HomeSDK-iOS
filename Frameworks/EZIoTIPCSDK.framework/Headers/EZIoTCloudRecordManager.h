//
//  EZIoTCloudRecordManager.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2021/11/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTCloudDayInfo,EZIoTCloudFile;

@interface EZIoTCloudRecordManager : NSObject

+ (void) searchHasDaysFromCloud:(NSString *)deviceSerial
                      channelNo:(NSInteger )channelNo
                       success:(void(^)(NSArray<EZIoTCloudDayInfo *> * _Nonnull dayInfos)) success
                        failure:(void(^)(NSError *error))failure;

+ (void) searchRecordsFromCloud:(NSString *)deviceSerial
                      channelNo:(NSInteger)channelNo
                     searchDate:(NSString *)searchDate
                       success:(void(^)(NSArray<EZIoTCloudFile *> * _Nonnull cloudFiles)) success
                        failure:(void(^)(NSError *error))failure;

+ (void) getCloudPlaybackTicket:(NSString *)deviceSerial
                      channelNo:(NSInteger)channelNo
                        success:(void(^)(NSString *ticket))success
                        failure:(void(^)(NSError *error))failure;

+ (void) searchRecordDetailFromCloud:(NSString *)deviceSerial
                           channelNo:(NSInteger)channelNo
                    searchCloudFiles:(NSArray<EZIoTCloudFile *> * _Nonnull )searchCloudFiles
                             success:(void(^)(NSArray<EZIoTCloudFile *> * _Nonnull detailCloudFiles)) success
                             failure:(void(^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END

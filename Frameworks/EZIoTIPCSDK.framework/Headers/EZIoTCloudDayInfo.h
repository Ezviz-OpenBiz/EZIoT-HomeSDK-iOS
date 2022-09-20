//
//  EZIoTCloudDayInfo.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2021/11/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTCloudDayInfo : NSObject

@property (nonatomic, copy) NSString *day; //日期
@property (nonatomic, assign) NSInteger cloudStorage; //云存储 1有，-1没有
@property (nonatomic, assign) NSInteger cloudSpace; //云空间 1有，-1没有


@end

NS_ASSUME_NONNULL_END

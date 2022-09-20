//
//  EZIoTLocalFile.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2021/12/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTLocalFile : NSObject

@property (nonatomic, copy) NSString *beginTime; //开始时间
@property (nonatomic, copy) NSString *endTime; //结束时间
@property (nonatomic, assign) NSInteger type; //录像类型

@end

NS_ASSUME_NONNULL_END

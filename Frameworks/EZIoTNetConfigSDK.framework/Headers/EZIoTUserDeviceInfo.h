//
//  EZIoTUserDeviceInfo.h
//
//  Created by yuqian on 2021/4/30.
//  Copyright © 2021 com.ezviz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserDeviceInfo : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *resourceId;
@property (nonatomic, copy) NSString *subSerial;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, assign) NSInteger groupId;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, assign) NSInteger status;

@end

NS_ASSUME_NONNULL_END

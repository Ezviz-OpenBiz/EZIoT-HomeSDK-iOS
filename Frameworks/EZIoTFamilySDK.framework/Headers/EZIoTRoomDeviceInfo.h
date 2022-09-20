//
//  EZIoTRoomDeviceInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 房间内设备描述类
@interface EZIoTRoomDeviceInfo : NSObject

///房间ID
@property (nonatomic,copy)       NSString  *roomId;
///家庭Id
@property (nonatomic,copy)       NSString  *familyId;
///设备序列号
@property (nonatomic,copy)       NSString  *deviceSerial;

@end

NS_ASSUME_NONNULL_END

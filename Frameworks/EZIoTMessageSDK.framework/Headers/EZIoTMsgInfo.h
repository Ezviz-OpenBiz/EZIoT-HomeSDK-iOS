//
//  EZIoTMsgInfo.h
//  EZIoTMessageSDK
//
//  Created by yuqian on 2021/7/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTMsgExtInfo : NSObject
@property (nonatomic, copy) NSString *alarmName;
@property (nonatomic, copy) NSString *alarmStartTime;
@property (nonatomic, copy) NSString *alarmType;
@property (nonatomic, copy) NSString *analysisType;
@property (nonatomic, copy) NSString *customerInfo;
@property (nonatomic, assign) NSInteger delayTime;
@property (nonatomic, assign) NSInteger isCloud;
@property (nonatomic, assign) NSInteger isVideo;
@property (nonatomic, assign) NSInteger preTime;
@property (nonatomic, assign) NSInteger rawid;
@property (nonatomic, assign) NSInteger recState;
@property (nonatomic, assign) NSInteger shareStatus;
@end

@interface EZIoTMsgInfo : NSObject
@property (nonatomic, assign) NSInteger state;//1为已读，0为未读
@property (nonatomic, copy) NSString *deviceSerial;
@property (nonatomic, assign) NSInteger channel;
@property (nonatomic, assign) NSInteger subType;
@property (nonatomic, copy) NSString *from;
@property (nonatomic, assign) NSInteger time;
@property (nonatomic, copy) NSString *timeStr;
@property (nonatomic, copy) NSString *pic;//报警图片
@property (nonatomic, assign) NSInteger picCrypt;//消息加密方式 1，设备加密，2平台加密
@property (nonatomic, copy) NSString *title;//消息标题
@property (nonatomic, copy) NSString *defaultPic;//默认图片
@property (nonatomic, copy) NSString *msgId;
@property (nonatomic, copy) NSString *detail;

@property (nonatomic, strong) EZIoTMsgExtInfo *ext;

@end

NS_ASSUME_NONNULL_END

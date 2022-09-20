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
@property (nonatomic, strong) NSArray *relationAlarm;//关联报警信息

@property (nonatomic, strong) EZIoTMsgExtInfo *ext;

@end


@interface EZIoTMsgRelationInfo : NSObject

@property (nonatomic, copy) NSString *title;//消息标题
@property (nonatomic, assign) NSInteger channel;
@property (nonatomic, copy) NSString *deviceSerial;
@property (nonatomic, copy) NSString *from;
@property (nonatomic, copy) NSString *msgId;
@property (nonatomic, copy) NSString *pic;//报警图片
@property (nonatomic, assign) NSInteger picCrypt;//消息加密方式 1，设备加密，2平台加密
@property (nonatomic, copy) NSString *picChecksum;//消息解密的密钥
@property (nonatomic, assign) NSInteger time;//报警时间
@property (nonatomic, copy) NSString *timeStr;
@property (nonatomic,copy) NSString *alarmName;//报警点名称
@property (nonatomic, assign) NSInteger alarmType;//报警类型
@property (nonatomic, assign) NSInteger alarmStartTime;//报警发生时间
@property (nonatomic, assign) NSInteger isVideo;//是否有报警录像
@property (nonatomic, assign) NSInteger recState;//存储类型
@property (nonatomic,copy) NSString *picUrlGroup;//图片url组
@property (nonatomic, assign) NSInteger customerType;//设备自定义类型
@property (nonatomic, copy  ) NSString  *customerInfo;//设备自定义信息
@property (nonatomic, assign) NSInteger withTinyVideo;//是否有报警小视频
@property (nonatomic, assign) NSInteger preTime;
@property (nonatomic, assign) NSInteger isCloud;//是否是云储存
@property (nonatomic, assign) NSInteger delayTime;
@property (nonatomic, assign) NSInteger analysisType;   // 分析类型:默认为0，非智能识别

@end

NS_ASSUME_NONNULL_END

//
//  EZIoTResourceInfo.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/23.
//

#import <Realm/Realm.h>
#import "EZIoTDeviceCloudInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTPublicKey : RLMObject
@property (nonatomic, copy) NSString *key; //公钥
@property (nonatomic, assign) NSInteger version; //版本号
@end

@interface EZIoTVideoQualityInfo : RLMObject
@property(nonatomic,assign) NSInteger   streamType;             //码流类型，1：主码流，2：子码流
@property(nonatomic,assign) NSInteger   videoLevel;             //视频品质，0：流畅，1：均衡，2：高清，3：超清
@property(nonatomic,copy)   NSString    *videoQualityName;      //视频品质名称，流畅，均衡,高清，超清
@property(nonatomic,copy)   NSString    *deviceSerial;
@property(nonatomic,copy)   NSString    *customPrimaryKey;
-(void)genPrimaryKey;
@end
RLM_ARRAY_TYPE(EZIoTVideoQualityInfo)

@interface EZIoTCameraVtmInfo : NSObject
@property(nonatomic,copy)   NSString    *cameraRsId;              //监控点id
@property(nonatomic,copy)   NSString    *domain;                //域名
@property(nonatomic,copy)   NSString    *externalIp;            //外网ip
@property(nonatomic,copy)   NSString    *internalIp;            //内网ip
@property(nonatomic,assign) NSInteger   port;                   //端口
@property(nonatomic,assign) NSInteger   forceStreamType;        //强制取流类型(详见接口文档)
@property(nonatomic,copy)   NSString    *url;                   //取流url，仅体验机才会返回,不需要额外拼接和组装
@property(nonatomic,assign) BOOL isBackup;  //是否是备用机房
@property(nonatomic,assign) NSTimeInterval timeInterval;//备用机房时间
@property(nonatomic,strong) EZIoTPublicKey * publicKey;//备用机房时间
@end

@interface EZIoTTalkQOSInfo : NSObject
@property(nonatomic,copy)   NSString    *domain;                //域名
@property(nonatomic,copy)   NSString    *externalIp;            //外网ip
@property(nonatomic,copy)   NSString    *internalIp;            //内网ip
@property(nonatomic,assign) NSInteger   port;                   //端口
@property(nonatomic,assign) BOOL isBackup;  //是否是备用
@end

@interface EZIoTResourceInfo : RLMObject

@property(nonatomic,copy)   NSString *groupName;                    //分组名称
@property(nonatomic,copy)   NSString *setTag;                       //智能设备卡片集合字段
@property(nonatomic,copy)   NSString *setTagName;                   //智能设备卡片集合名称
@property(nonatomic,copy)   NSString *deviceSerial;                 //设备序列号
@property(nonatomic,copy)   NSString *name;                         //资源名称（设备名称、通道名称、子设备名称、按键名称等）
@property(nonatomic,copy)   NSString *groupId;                      //关联的groupID
@property(nonatomic,copy)   NSString *resourceId;                   //资源ID
@property(nonatomic,copy)   NSString *resourceIdentifier;
@property(nonatomic,copy)   NSString *resourceCategory;
@property(nonatomic,copy)   NSString *deviceCategory;               //资源大类
@property(nonatomic,copy)   NSString *localIndex;                   //index
@property(nonatomic,copy)   NSString *category;                     //设备类别,如C1s
@property(nonatomic,copy)   NSArray<NSDictionary *> *failFilters;   //资源列表接口，服务器首次查询失败的所有filter信息
@property(nonatomic,assign) NSInteger isShared;                     //是否共享 0:未分享 1:共享所有者 2:共享用户 3:所有者已结束 4:分享邀请不在时间段内 5:二维码扫描关注者
@property(nonatomic,assign) NSInteger resourceType;                 //资源局部标识
@property(nonatomic,assign) BOOL isCamera;
@property(nonatomic,assign) NSInteger channelNo;                    //资源局部标识
@property(nonatomic,assign) BOOL conceal;                           //是否隐藏 1：隐藏 0：不隐藏
@property (nonatomic, strong) NSDictionary *extInfos;               //扩展字段 realm ignoredProperties  （服务器返回, 无需存DB）
@property (nonatomic, copy) NSString *extInfosStr;
@property(nonatomic,assign) NSInteger globalStatus;                 //是否全局资源


// 视频类设备相关字段
@property(nonatomic,assign) NSInteger   videoLevel;             //清晰度等级：3-超清，2-高清，1-标清，0-流畅
@property(nonatomic,copy)   NSString    *streamBizUrl;          //取流url格式中的业务段，格式：biz=1&a=1&b=2 1-普通用户取流, 2-群组分享取流, 3-视频广场取流, 4-服务内部取流, 5-开放平台普通用户取流,6-开放平台付费用户取流, 7-设备付费用户取流, 8-值守用户取流
@property(nonatomic,assign) NSInteger   permission;             //监控点权限(详见接口文档)
@property(nonatomic,strong) RLMArray<EZIoTVideoQualityInfo *><EZIoTVideoQualityInfo>        *videoQualityInfos; //视频品质列表
@property(nonatomic,strong) EZIoTCameraVtmInfo                      *vtmInfo;           //通道流媒体信息
@property(nonatomic,strong) EZIoTTalkQOSInfo                        *qosTalkInfo;       //qos对讲信息
@property(nonatomic,strong)  EZIoTDeviceCloudInfo  *cloudInfo;         //设备云存储信息

@end

RLM_ARRAY_TYPE(EZIoTResourceInfo)

NS_ASSUME_NONNULL_END

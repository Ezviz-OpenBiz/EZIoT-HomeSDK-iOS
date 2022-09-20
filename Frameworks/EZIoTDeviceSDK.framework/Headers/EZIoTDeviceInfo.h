//
//  EZIoTDeviceInfo.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/22.
//

#import <Realm/Realm.h>
#import "EZIoTResourceInfo.h"
#import "EZIoTPropertyFeatureItem.h"
#import "EZIoTActionFeatureItem.h"

@class EZIoTProductInfo;

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTDeviceStatusExtInfo : RLMObject
@property(nonatomic,copy)   NSString    *deviceSerial;          //设备序列号
@property(nonatomic,assign) NSInteger   upgradeAvailable;       //是否可以升级，0：不可以，1：可以 3:可以
@property(nonatomic,assign) NSInteger   unnormalStatus;         //异常状态，1：异常，0：正常，-1：不支持，目前只有A1用到此字段，表示探测器故障
@property(nonatomic,assign) NSInteger   offlineNotify;          //设备下线通知：0-不通知，1-通知
@end

@interface EZIoTDeviceP2PInfo : RLMObject
@property(nonatomic,copy)   NSString    *customPrimaryKey;      //定制主键
@property(nonatomic,copy)   NSString    *deviceSerial;          //设备序列号
@property(nonatomic,copy)   NSString    *userId;                //设备拥有者userId
@property(nonatomic,copy)   NSString    *ip;                    //IP
@property(nonatomic,assign) NSInteger   port;                   //端口
-(void)genPrimaryKey;
@end
RLM_ARRAY_TYPE(EZIoTDeviceP2PInfo)

@interface EZIoTDeviceWifiInfo : RLMObject
@property(nonatomic,copy)   NSString    *deviceSerial;          //设备序列号
@property(nonatomic,copy)   NSString    *netName;               //网络名称
@property(nonatomic,copy)   NSString    *netType;               //网络类型
@property(nonatomic,copy)   NSString    *addr;                  //网络地址
@property(nonatomic,copy)   NSString    *mask;                  //子网掩码
@property(nonatomic,copy)   NSString    *gateway;               //网关
@property(nonatomic,assign) NSInteger   signal;                 //信号强弱
@property(nonatomic,copy)   NSString    *ssid;                  //wifi热点名称
@end

//p2p信息，根据ezDeviceCapability解析
@interface EZIoTDeviceCapabilityInfo : RLMObject
@property(nonatomic,copy)     NSString        *deviceSerial;          //设备序列号
@property(nonatomic,copy)     NSString        *sc;                    //是否支持以设备为单位建立连接，1：支持，0：不支持
@property(nonatomic,copy)     NSString        *V3;                    //是否支持p2p的v3版本，1：支持，0：不支持
@property(nonatomic,copy)     NSString        *V3Sec;                //是否支持p2p的v3安全加固版本，1：支持，0：不支持 与V3互斥
@property(nonatomic,copy)     NSString        *V3Playback;           //是否支持p2pV3 回放 1：支持，0：不支持
@property(nonatomic,copy)     NSString        *V3Talk;                //是否支持p2pV3 对讲 1：支持，0：不支持
@property(nonatomic,copy)     NSString        *NewDirectReverse;
@property(nonatomic,copy)     NSString        *ptz_left_right;
@property(nonatomic,copy)     NSString        *ptz_top_bottom;
@property(nonatomic,copy)     NSString        *support_wifi_userId;
@property(nonatomic,copy)     NSString        *support_smart_wifi;
@property(nonatomic,copy)     NSString        *DirectPlayback_EndFlag; //是否支持直连回放带结束标记
@end

@interface EZIoTDeviceConnectionInfo : RLMObject
@property(nonatomic,copy)   NSString    *deviceSerial;          //设备序列号
@property(nonatomic,copy)   NSString    *localIp;               //设备局域网IP地址
@property(nonatomic,copy)   NSString    *natIp;                 //设备外网地址
@property(nonatomic,copy)   NSString    *wanIp;    //出口ip
//@property(nonatomic,assign) NSInteger   localHttpPort    ;       //内网Http监听的端口UPNP检测使用  (暂时无用)
//@property(nonatomic,assign) NSInteger   natHttpPort    ;           //外网Http监听的端口UPNP检测使用  (暂时无用)
//@property(nonatomic,assign) NSInteger   localHttpsPort;         //内网Http监听的端口UPNP检测使用  (暂时无用)
//@property(nonatomic,assign) NSInteger   natHttpsPort;           //外网Http监听的端口UPNP检测使用  (暂时无用)
@property(nonatomic,assign) NSInteger   localRtspPort;          //内网RTSP监听端口
@property(nonatomic,assign) NSInteger   natRtspPort;            //外网RTSP监听端口
@property(nonatomic,assign) NSInteger   localCmdPort;           //内网Telent端口
@property(nonatomic,assign) NSInteger   natCmdPort;             //外网Telenet端口
@property(nonatomic,assign) NSInteger   localStreamPort;        //内网推流使用的监听端口
@property(nonatomic,assign) NSInteger   natStreamPort;          //外网推流使用的监听端口
@property(nonatomic,assign) NSInteger   natType;                //设备的网络类型,0:upnp类型,1:完全锥形NAT,2:受限锥形NAT,3:端口受限锥形NAT,4:对称NAT,5:公开的互联网,6:对称型UDP防火墙,7:阻塞UDP防火墙,8:未知类型
@property(nonatomic,assign) BOOL        isUpnp;                 //upnp是否成功
@end

@interface EZIoTDeviceSecretKeyInfo : RLMObject
@property(nonatomic,copy)   NSString    *deviceSerial;          //设备序列号
@property(nonatomic,copy)   NSString    *secretKey;             //key
@property(nonatomic,copy)   NSString    *version;               //版本
@end

@interface EZIoTDeviceTTSInfo: RLMObject
@property(nonatomic,copy)   NSString    *deviceSerial;              //监控点id
@property(nonatomic,copy)   NSString    *domain;                //域名
@property(nonatomic,copy)   NSString    *externalIp;            //外网ip
@property(nonatomic,copy)   NSString    *internalIp;            //内网ip
@property(nonatomic,assign) NSInteger   port;                   //端口
@property(nonatomic,assign) NSInteger   forceStreamType;        //强制取流类型(详见接口文档)
@property(nonatomic,assign) BOOL        isBackup;  //是否是备用机房
@property(nonatomic,copy)   NSString    *idcType;            //
@end

@interface EZIoTDeviceInfo : RLMObject

@property(nonatomic,copy)   NSString    *mac;                  //蓝牙地址
@property(nonatomic,copy)   NSString    *name;                  //名称
@property(nonatomic,copy)   NSString    *userId;                //用户id
@property(nonatomic,copy)   NSString    *catId;                 //添加设备时候需要，确定设备类别
@property(nonatomic,copy)   NSString    *deviceSerial;          //设备序列号
@property(nonatomic,copy)   NSString    *deviceShortSerial;      //设备短序列号
@property(nonatomic,copy)   NSString    *deviceCategory;         //设备品类
@property(nonatomic,copy)   NSString    *deviceType;            //设备类型 如CS-C1s-54WPMFBRT
@property(nonatomic,copy)   NSString    *version;               //版本
@property(nonatomic,copy)   NSString    *supportExtShort;       //设备短能力级，如0|1|-1|
@property(nonatomic,copy)   NSString    *firmwareCode;          //固件识别码
@property(nonatomic,copy)   NSString    *casIp;                 //CAS服务器IP
@property(nonatomic,assign) NSInteger   casPort;                //CAS服务器Port
@property(nonatomic,copy)   NSDate      *userDeviceCreateTime;  //用户添加设备的时间
@property(nonatomic,copy)   NSString    *offlineTime;            //设备离线时间
@property(nonatomic,assign) NSInteger   status;                 //设备在线状态，0：初始化，1：在线，2：不在线，4：黑名单，5：待机模式(C1S 电池模式)
@property(nonatomic,copy)   NSString    *category;              //设备类别,如C1s
@property(nonatomic,assign) NSInteger   channelNumber;          //设备支持的通道数
@property(nonatomic,assign) BOOL        forceUpgrade;           //设备是否需要强制升级,默认false 目前接口没返回该字段，但以后可能有用
@property(nonatomic,assign) BOOL        isRelated;              //是否与当前用户有关联，默认True,如果N1和Ipc都属于当前用户则isRelated=1  反之isRelated=0
@property(nonatomic,copy)   NSString    *ezDeviceCapability;    //ezDevice能力级,{"sc":"1","v3":"1"},说明,sc(Single connection) : 是否支持以设备为单位建立连接，1：支持，0：不支持；v3: 是否支持p2p的v3版本，1：支持，0：不支持.
@property(nonatomic,assign) NSInteger   qosTalkVesion;          //获取支持qos对讲设备版本

@property(nonatomic,copy)   NSString *feature;  //IOT特有的能力项列表
@property(nonatomic,copy)   NSArray<NSDictionary *> *featureArray; //feature字段解析出的字典信息

@property (nonatomic,copy)  NSString *featureValues; //自描述信息的值
@property(nonatomic,copy)   NSString *rnPackage;  //RN配置信息

@property(nonatomic,strong) NSMutableArray<EZIoTPropertyFeatureItem *>       *propFeatureItems;
@property(nonatomic,strong) NSMutableArray<EZIoTActionFeatureItem *>         *actionFeatureItems;

@property (nonatomic, assign) BOOL isMP; //是小程序设备
@property (nonatomic, assign) BOOL isV3; //使用自描述3.0

@property(nonatomic,strong) EZIoTDeviceWifiInfo                    *wifiInfo;              //设备wifi信息
@property(nonatomic,strong) EZIoTDeviceConnectionInfo              *connectionInfo;        //设备连接信息
@property(nonatomic,strong) EZIoTDeviceTTSInfo                     *ttsService;              //来自hcnet等其他来源，需要持久的属性：
@property(nonatomic,strong) EZIoTDeviceSecretKeyInfo               *secretKeyInfo;          //密钥信息
@property(nonatomic,strong) EZIoTDeviceStatusExtInfo               *statusExtInfo;         //设备额外状态信息
@property(nonatomic,strong) EZIoTDeviceCapabilityInfo              *capabilityInfo;     //p2p信息，根据ezDeviceCapability解析
@property(nonatomic,strong) RLMArray<EZIoTDeviceP2PInfo *><EZIoTDeviceP2PInfo>         *p2pInfos;               //p2p信息


- (EZIoTPropertyFeatureItem * _Nullable) getPropertyFeatureValueWithIdentifier:(NSString *)resourceIdentifier
                                                              domainIdentifier:(NSString *)domainIdentifier
                                                            propertyIdentifier:(NSString *)propertyIdentifier
                                                                    localIndex:(NSString *)localIndex;

- (EZIoTActionFeatureItem * _Nullable) getActionFeatureValueWithIdentifier:(NSString *)resourceIdentifier
                                                          domainIdentifier:(NSString *)domainIdentifier
                                                          actionIdentifier:(NSString *)actionIdentifier
                                                                localIndex:(NSString *)localIndex;

@end




NS_ASSUME_NONNULL_END

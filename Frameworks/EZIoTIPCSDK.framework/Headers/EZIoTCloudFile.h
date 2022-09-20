//
//  EZIoTCloudFile.h
//  EZIoTHomeSDKDemo
//
//  Created by yuqian on 2021/12/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTCloudFile : NSObject

@property (nonatomic, copy)   NSString   *seqId;                 //文件Id
@property (nonatomic, copy)   NSString    *deviceSerial;         //设备序列号
@property (nonatomic, assign) NSInteger   channelNo;             //设备通道号
@property (nonatomic, assign) NSInteger   fileType;              //文件类型 0：目录 1：视频文件 2：图片文件 3：音频文件
@property (nonatomic, copy) NSString *startTime; //文件开始时间字符串
@property (nonatomic, copy) NSString *stopTime; //文件结束时间字符串
@property (nonatomic, copy) NSString *createTime;            //文件创建时间字符串
@property (nonatomic, assign) NSInteger   fileSize;              //文件大小 单位B
@property (nonatomic, assign) NSInteger   cloudType;             //云类型 0：未知 1：武汉云存储 2：七牛云存储
@property (nonatomic, copy)   NSString    *fileIndex;            //文件在云存储上的唯一索引
@property (nonatomic, copy)   NSString    *ownerId;              //文件所属用户ID
@property (nonatomic, assign) NSInteger   locked;                 //文件是否锁定 0：未锁定 1：锁定
@property (nonatomic, assign) NSInteger   crypt;                  //是否加密 0--不加 1--加密
@property (nonatomic, copy)   NSString    *keyChecksum;           //验证码MD5值
@property (nonatomic, assign) NSInteger   videoLong;              //录像长度
@property (nonatomic, copy)   NSString    *coverPic;              //封面图片地址
@property (nonatomic, copy)   NSString    *streamUrl;             //云图像表示封面地址；云视频表示此文件所在的云服务器域名和端口，如：cloud.shipin7.com:32723
@property (nonatomic, copy) NSString *storageVersion; //云存储版本类型
@property (nonatomic, assign) NSInteger videoType; //云存储类型，1连续录像、2活动录像


@end

NS_ASSUME_NONNULL_END

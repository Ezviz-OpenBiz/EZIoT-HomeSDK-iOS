//
//  EZIoTUserAreaInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2019/11/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserAreaInfo : NSObject <NSCoding>

@property(nonatomic,copy) NSString *areaId;//id
@property(nonatomic,copy) NSString *name; //区域名称
@property(nonatomic,copy) NSString *domain; //域名
@property(nonatomic,copy) NSString *region; //所属大区
@property(nonatomic,copy) NSString *phoneCode; //手机区号
@property(nonatomic,copy) NSString *index; //首字母索引，用于排序
@property(nonatomic,copy) NSString *code; //区域码 如CN

@end


NS_ASSUME_NONNULL_END


//
//  YSDCLogStorage.h
//  FmdbTest
//
//  Created by qiandong on 7/30/15.
//  Copyright (c) 2015 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YSDCLogItem : NSObject

@property (nonatomic, assign)   long long int   pid;            //DB表生成的自增id，只从DB读，不写入DB。long long的最大值9223372036854775807。而且如果row在上次app周期内被删光了，则下次pid是从1重新开始的。如果没删光，则从上次的pid+1开始。
@property (nonatomic, copy)     NSString        *systemName;    //dclog协议key
@property (nonatomic, strong)   NSNumber        *time;          //客户端时间
@property (nonatomic, copy)     NSString        *uuid;          //给每个记录一个唯一编号。用于按唯一编号查询记录。
@property (nonatomic, strong)   NSData          *data;          //实际发的数据体。格式是由NSDictionary转的NSData

@end


@interface YSDCLogStorage : NSObject

@property(nonatomic,strong) NSString *dbPath;

+ (instancetype)shared;

//保存一个item
- (BOOL)insertItem:(YSDCLogItem *)item;

//保存多个items
- (BOOL)insertItems:(NSArray<YSDCLogItem *> *)items;

//查询最大的pid（刚插入的pid）
- (long long int)queryMaxPid;

//获取一定数量限制的items
- (NSMutableArray<YSDCLogItem *> *)getItemsInLimit:(NSInteger) count;

//删除pid在某个大小范围内的记录
- (BOOL) deleteByMinPid:(NSUInteger)minPid maxPid:(NSUInteger)maxPid;

//删除uuid为某值的记录
- (BOOL) deleteByUuid:(NSString *) uuid;

//删除pid在某个in范围内的记录(pids用逗号隔开）
- (BOOL) deletePidIn:(NSArray *) pids;

//删除某个时间点前的记录
- (BOOL) deleteItemsBeforeTime:(NSNumber *)time;

//获取记录条数
-(NSUInteger)getCountOfRow;


@end

//
//  YSCommonDTO.h
//  YSNetwork
//
//  Created by qiandong on 7/25/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YSDTOMeta : NSObject

@property(nonatomic,assign)     NSInteger   code;
@property(nonatomic,copy)       NSString    *message;

@property(nonatomic,copy)     NSDictionary  *moreInfo; //异常信息

@end

@interface YSDTOPage : NSObject

@property(nonatomic,assign) NSInteger   totalResults;
@property(nonatomic,assign) NSInteger   offset;
@property(nonatomic,assign) NSInteger   limit;
@property(nonatomic,assign) BOOL        hasNext;

@end




@interface YSDTOMeta (results)
//code 200 返回成功
- (BOOL)success;
//code 2004 返回为YES
- (BOOL)casException;
//获取code为2004时 CAS error code
- (NSInteger)casError;
- (NSError *)businessError;

@end


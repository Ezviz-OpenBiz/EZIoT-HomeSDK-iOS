//
//  EZIoTMsgListResp.h
//  EZIoTMessageSDK
//
//  Created by yuqian on 2021/7/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTMsgInfo;

@interface EZIoTMsgListResp : NSObject

@property (nonatomic, strong) NSMutableArray<EZIoTMsgInfo *> * msgInfos;
@property (nonatomic, assign) BOOL hasNext;
@property (nonatomic, copy) NSString *timestamp;

@end

NS_ASSUME_NONNULL_END

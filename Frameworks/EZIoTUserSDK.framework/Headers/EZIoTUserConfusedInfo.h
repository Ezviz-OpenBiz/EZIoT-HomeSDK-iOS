//
//  EZIoTUserConfusedInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserConfusedInfo : NSObject

@property(nonatomic,copy) NSString *confusedEmail;
@property(nonatomic,copy) NSString *confusedPhone;
@property(nonatomic,copy) NSString *encryptedReverseUserName;
@property(nonatomic,copy) NSString *encryptedUserName;

@end

NS_ASSUME_NONNULL_END

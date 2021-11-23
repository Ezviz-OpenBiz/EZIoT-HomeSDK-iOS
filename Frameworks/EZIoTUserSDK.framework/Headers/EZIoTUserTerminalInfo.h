//
//  EZIoTUserTerminalInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZIoTUserTerminal : NSObject <NSCoding>
@property(nonatomic,copy) NSString * addTime;
@property(nonatomic,copy) NSString * ip;
@property(nonatomic,copy) NSString * lastModifytime;
@property(nonatomic,copy) NSString * location;
@property(nonatomic,copy) NSString * name;   //手机名称
@property(nonatomic,copy) NSString * sign;   //featureCode
@property(nonatomic,copy) NSString * signType;
@property(nonatomic,copy) NSString * type;
@property(nonatomic,copy) NSString * userId;
@end

@interface EZIoTUserTerminalData : NSObject <NSCoding>
@property (nonatomic, copy) NSString     *tempId;     //用于删除接口，可以看作临时的用户id
@property (nonatomic, copy) NSString     *phone;      //132****5456
@property (nonatomic, copy) NSString     *email;      //132****5456
@property (nonatomic, assign) NSInteger   limits;      //终端限制数
@property (nonatomic, copy) NSArray      <EZIoTUserTerminal *> *terminals;  //终端列表
@end

@interface EZIoTUserTerminalStatus : NSObject <NSCoding>
@property (nonatomic, assign) BOOL terminalBinded;            //当前终端是否被绑定,0:否,1:是
@property (nonatomic, assign) BOOL terminalOpened;            //终端管理是否开启,0:否,1:是
@end



@interface EZIoTUserTerminalInfo : NSObject <NSCoding>
@property (nonatomic, strong) EZIoTUserTerminalData *terminalData;
@property (nonatomic, strong) EZIoTUserTerminalStatus *terminalStatus;
@end





NS_ASSUME_NONNULL_END

//
//  EZIoTRouter.h
//  EZIoTRouter
//
//  Created by yuqian on 2021/6/17.
//

#import <Foundation/Foundation.h>

#define EZIoT_SERVICE_REGIST(PROTOCOLNAME)  +(void)load { [[EZIoTRouter sharedInstance] registService:[self class] forProtocol:@protocol(PROTOCOLNAME)]; }
#define EZIoT_SERVICE_GET_CLASS(PROTOCOLNAME)  [[EZIoTRouter sharedInstance] getServiceClass:@protocol(PROTOCOLNAME)]
#define EZIoT_SERVICE_GET_INSTANCE(PROTOCOLNAME)  [[EZIoTRouter sharedInstance] getServiceInstance:@protocol(PROTOCOLNAME)]

@interface EZIoTRouter : NSObject

@property (nonatomic, assign) BOOL  enableException;

+ (void)setupRouter;

+ (instancetype)sharedInstance;

- (void)registService:(Class)service forProtocol:(Protocol *)protocol;

- (id)getServiceInstance:(Protocol *)protocol;

- (Class)getServiceClass:(Protocol *)protocol;

@end

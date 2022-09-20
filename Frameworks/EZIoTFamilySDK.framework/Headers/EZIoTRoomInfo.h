//
//  EZIoTRoomInfo.h
//  EZIoTUserSDK
//
//  Created by yuqian on 2021/6/16.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, EZIoTCameraGroupDefenceStatus) {
    EZIoTCameraGroupDefenceInit = 0,      // 初始状态
    EZIoTCameraGroupDefenceHome,          // 在家
    EZIoTCameraGroupDefenceOutside,       // 外出
    EZIoTCameraGroupDefenceSleep          // 睡眠
};


/// 房间分组信息类
@interface EZIoTRoomInfo : RLMObject

///房间ID
@property (nonatomic,copy)       NSString                    *roomId;
///关联家庭Id
@property (nonatomic,copy)       NSString                    *familyId;
///分组名称
@property (nonatomic,copy)       NSString                    *roomName;
///置顶标记：0未置顶 >0置顶，就是后台的返回的index
@property (nonatomic,assign)     double                      topTime;
///用户Id
@property (nonatomic,copy)       NSString                    *userId;
///创建时间
@property (nonatomic,strong)     NSDate                      *createTime;
///更新时间
@property (nonatomic,strong)     NSDate                      *updateTime;
///0初始状态 1在家 2外出 3睡眠
@property (nonatomic,assign)     EZIoTCameraGroupDefenceStatus  defenceStatus;
///背景图片
@property (nonatomic,copy)       NSString                    *background;
///分组图标
@property (nonatomic,copy)       NSString                    *icon;
///是否是默认分组
@property (nonatomic,assign)     BOOL       isDefaultRoom;

@end

NS_ASSUME_NONNULL_END

//
//  YSDBManager.h
//  YSNetwork
//
//  Created by qiandong on 8/2/16.
//  Copyright © 2016 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

//不用了
//#define YS_DB_WRITE(EXPRESSION) [[RLMRealm defaultRealm] transactionWithBlock:^{ EXPRESSION }];

@interface YSDBAccess : NSObject
+ (instancetype)shareIntance;
#pragma mark - Familys DB

//设置当前的家庭配置
- (void)setDefaultFamilyConfiguration:(RLMRealmConfiguration *)configuration;

//根据User/familyId生成configuration
+ (RLMRealmConfiguration *)configurationForUserId:(NSString *)userId familyId:(NSString *)familyId;

//根据User生成家庭的configuration
+ (RLMRealmConfiguration *)familyConfigurationForUserId:(NSString *)userId;

//根据configuration返回realm数据库
+ (RLMRealm *)getRealmForRLMRealmConfiguration:(RLMRealmConfiguration *)configuration;

//返回当前的数据库
//如果未配置configuration，返回default
+ (RLMRealm *)getDefaultFamilyRealm;

//
+ (void)setDefaultRealmForUserId:(NSString *)userId familyId:(NSString *)familyId;

//存放Realm的文件夹
+ (NSURL *)realmFolderURL;

//setup
+ (void)setDefaultRealm;


//打印所有的RealmObject（调试方法）
+ (void)logAllRealmObjects;

@end

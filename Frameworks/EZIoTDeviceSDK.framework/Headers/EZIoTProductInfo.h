//
//  EZIoTProductInfo.h
//  EZIoTDeviceSDK
//
//  Created by yuqian on 2021/6/22.
//
#import <Realm/Realm.h>

NS_ASSUME_NONNULL_BEGIN

@class EZIoTDeviceInfo;

@interface EZIoTConfigVersionItem : RLMObject
@property (nonatomic, copy) NSString *primaryKey; //主键  itemKey + ower FeatureInfol.primaryKey
@property (nonatomic, copy) NSString *type; //EIB,RN,LANG
@property (nonatomic, copy) NSString *md5;
@end
RLM_ARRAY_TYPE(EZIoTConfigVersionItem)

@interface EZIoTProductInfo : RLMObject

@property (nonatomic, copy) NSString *productIdAndVersion; //主键 大类+版本
@property (nonatomic, copy) NSString *productId; //设备型号
@property (nonatomic, copy) NSString *version; //设备版本
@property (nonatomic, copy) NSString *productName; //产品名称
@property (nonatomic, copy) NSString *productModel; //产品型号
@property (nonatomic, copy) NSString *rnPackage;  //RN包信息
@property (nonatomic, copy) NSString *mainCategory; //主类目，如ipc
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *profileStr; //realm不支持dic类型 转str存realm里
@property (nonatomic, copy) NSString *pext;
@property (nonatomic, assign) long long mainCatId; //主类别id
@property (nonatomic, assign) long long catId; //关联的类目id
@property (nonatomic, assign) int channelNo; //通道号
@property (nonatomic, assign) BOOL isHik; //是否是海康设备
@property (nonatomic, strong) RLMArray<EZIoTConfigVersionItem *><EZIoTConfigVersionItem> *configVersions;

+ (EZIoTProductInfo *)getProductInfoBySerial:(NSString *)deviceSerial;
+ (EZIoTProductInfo *)getProductInfoByDeviceInfo:(EZIoTDeviceInfo *)deviceInfo;

- (NSDictionary *)getCapacities;
- (NSDictionary *)getProfileInfo;
- (NSDictionary *)getLiteProfileInfo;

- (void)generatePrimaryKey;

@end

NS_ASSUME_NONNULL_END

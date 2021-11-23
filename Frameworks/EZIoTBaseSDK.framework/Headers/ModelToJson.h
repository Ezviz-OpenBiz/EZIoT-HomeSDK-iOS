//
//  ModelToJson.h
//  Huiyan
//
//  Created by zhaowen5 on 2018/7/21.
//

#import <Foundation/Foundation.h>

@interface ModelToJson : NSObject

//通过对象返回一个NSDictionary，键是属性名称，值是属性值。

+ (NSDictionary*)getObjectData:(id)obj;



//将getObjectData方法返回的NSDictionary转化成JSON

+ (NSString *)getJSON:(id)obj options:(NSJSONWritingOptions)options error:(NSError**)error;

+ (id)getModel:(NSString *)json class:(Class)_class;

@end

//
//  YHMPayHelper.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/20.
//

#import <Foundation/Foundation.h>

@interface YHMPayHelper : NSObject

+(NSMutableDictionary *)getDeviceInfo;

//获取UUID（UUID+keyChain）
+(NSString *)getUUID;


+(NSString *)getAppUserAgent;

@end

//
//  YHMPDecryptData.h
//  YHMedicarePaySDK
//  解析加密数据
//  Created by Jagtu on 2018/8/16.
//

#import <Foundation/Foundation.h>

@interface YHMPDecryptData : NSObject

/**
 解密加密数据
 
 @param responeObj 原始数据
 @param isEncrypt  是否加密，0表示加密
 @param appId      应用id
 @param appSecret  应用密
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret;

/**
 加密
 
 @param param      原始数据
 @param isEncrypt  是否加密
 @param appId      应用id
 @param appSecret  应用密
 @return value
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret;

@end

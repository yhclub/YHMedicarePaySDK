//
//  YHMPayConfig.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/7.
//

#import <YHOnePaySDK/YHOnePayConfig.h>

@interface YHMPayConfig : YHOnePayConfig

/**
 * 应用appId
 */
@property(nonatomic,copy)NSString * appId;

/**
 * 应用密钥
 */
@property(nonatomic,copy)NSString * appSecret;


/**
 初始化设置
 
 @param appId appId（注应用ID与应用的bundleIdentifier对应）
 @param appSecret appSecret
 @param platformHost 平台地址
 */
+(void)initWithAPPID:(NSString *)appId appSecret:(NSString *)appSecret platformHost:(NSString *)platformHost;


@end

//
//  YHMPayConfig.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/7.
//

#import <YHOnePaySDK/YHOnePayConfig.h>

//商户所属渠道类型，请修改为对应的渠道
/*
 01 窗口
 02 自助机
 03 网站
 04 手机app
 05 微信公众号
 06 银医通
 07 微信小程序
 08 支付宝服务窗
 09 药店
 14 市民卡app
 15 i厦门app
 31 美丽厦门微信公众号
 */
#define YHMPAppChannelType @"15"


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

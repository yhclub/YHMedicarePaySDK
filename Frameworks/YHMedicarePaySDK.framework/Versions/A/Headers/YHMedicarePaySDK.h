//
//  YHMedicarePaySDK.h
//  YHMedicarePaySDK（YHMPaySDK）
//
//  Created by Jagtu on 2018/4/27.
//  Copyright © 2018年 yh. All rights reserved.
//
//  Version 2.0.0  by Jagtu  2018/8/2
//

// In this header, you should import all the public headers of your framework using statements like #import <YHMedicarePaySDK/PublicHeader.h>


#import <UIKit/UIKit.h>
//config
#import <YHMedicarePaySDK/YHMPayConfig.h>
#import <YHMedicarePaySDK/YHMPColor.h>
#import <YHMedicarePaySDK/YHMPConstant.h>

/**
 * 单例模式
 * 注：请确保对应用户已实名认证！
 */
@interface YHMedicarePaySDK : NSObject

/**
 *  发起医保结算
 *  ->选择医院 ->选择待结算处方列表 ->确认处方（处方详情） ->结算收银台（完成自费支付） ->结算完成
 *
 *  @param token     用户令牌
 *  @param completionBlock 结算结果回调Block。
 *  注：结算成功后，商户服务端也会收到异步通知。最终结算成功请根据服务端异步通知为准。
 */
+ (void)settleWithToken:(NSString *)token
             completion:(YHMPPayCompletionBlock)completionBlock;

/**
 *  查询已结算记录
 *  ->选择医院 ->展示已结算记录列表页
 *
 *  @param token     用户令牌
 *  @param completionBlock 结算结果回调Block。
 *  注：结算成功后，商户服务端也会收到异步通知。最终结算成功请根据服务端异步通知为准。
 */
+ (void)querySettledRecodeWithToken:(NSString *)token
                         completion:(YHMPPayCompletionBlock)completionBlock;


/**
 *  处理App消息推送
 *  处理包括待结算处方消息、结算成功消息(如自行展示结算结果则不展示)
 *  消息来源：->移动医保支付平台 ->商户服务端 ->商户APP ->SDK
 *
 *  @param userInfo      消息参数或者启动参数
 *  @return 是否处理，YES表示SDK处理该消息并在处理完成时回调block，NO则商户APP自行处理
 */
+ (BOOL)didReceiveNotification:(NSDictionary *)userInfo;


/**
 *  退出
 *  注：清除内存缓存里的用户信息！
 */
+ (void)logout;


@end


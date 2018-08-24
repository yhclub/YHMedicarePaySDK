//
//  YHMedicarePaySDK+Private.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/17.
//

#import "YHMedicarePaySDK.h"
#import "YHMPUserModel.h"

@interface YHMedicarePaySDK (Private)

/**
 *  创建统一支付单例服务
 *
 *  @return 返回单例对象
 */
+ (YHMedicarePaySDK *)defaultService;

/**
 *  退出
 *  注：清除内存缓存里的用户信息！
 */
- (void)logout;

//登录
- (void)loginWithToken:(NSString *)token completion:(dispatch_block_t)completionBlock;


/**
 *  发起医保结算
 *  ->选择医院->选择待结算处方列表 ->确认处方（处方详情） ->结算收银台（完成自费支付） ->结算完成
 */
- (void)doSettle;

/**
 *  @param appId         医院应用AppId
 */
- (void)doSettleWithAppId:(NSString *)appId;


/**
 *  查询已结算记录
 *  ->展示已结算记录列表页
 *
 *  注：结算成功后，商户服务端也会收到异步通知。最终结算成功请根据服务端异步通知为准。
 */
- (void)querySettleRecode;

/**
 *  @param appId        (已选医院)医院应用AppId
 */
- (void)querySettleRecodeWithAppId:(NSString *)appId;


- (BOOL)didReceiveNotification:(NSDictionary *)userInfo;

/**
 *  获取用户信息
 *  @return YHMPUserModel     用户model
 */
- (YHMPUserModel *)getUserInfo;

@end

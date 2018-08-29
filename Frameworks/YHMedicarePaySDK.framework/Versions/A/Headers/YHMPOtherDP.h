//
//  YHMPOtherDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/17.
//

#import "YHMPBaseDP.h"
#import "YHMPOtherParamModel.h"
#import "YHMPChannelRespModel.h"
#import "YHMPSettleRechargeRespModel.h"
#import "YHMPUserRespModel.h"

@interface YHMPOtherDP : YHMPBaseDP

/**
 参数param容器
 */
@property(nonatomic,strong)YHMPOtherParamModel *reqParamModel;

@property(nonatomic,strong)YHMPBaseRespModel *model;

//支付渠道RespModel
@property(nonatomic,strong)YHMPChannelRespModel *channelRespModel;

//结算RespModel
@property(nonatomic,strong)YHMPSettleRechargeRespModel *settleRespModel;

//用户信息RespModel
@property(nonatomic,strong)YHMPUserRespModel *userInfoRespModel;

//获取用户信息
+(YHMPOtherDP *)getUserInfoDPWithToken:(NSString *)token;

//验证接入APP的包名
+(YHMPOtherDP *)getValidateSignDP;

//医保结算（带有短信验证码）
+(YHMPOtherDP *)getMMPayDP;

//发送短信验证码
+(YHMPOtherDP *)getSendSmsDP;

//获取支付渠道
+(YHMPOtherDP *)getChannelDP;

@end

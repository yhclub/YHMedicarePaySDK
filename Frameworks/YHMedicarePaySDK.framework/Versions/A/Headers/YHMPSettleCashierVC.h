//
//  YHMPSettleCashierVC.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/14.
//

#import <YHCommonSDK/YHCommonSDK.h>
#import "YHMPSettleOrderPT.h"
#import "YHMPSettleRechargeDP.h"
#import "YHMPQuerySettleResultDP.h"
#import "YHMPOtherDP.h"
#import "YHMPSettleOrderPT.h"

@interface YHMPSettleCashierVC : YHScrollVC

@property(nonatomic,strong)YHMPSettleRechargeDP *settleRechargeDP;//自费结算(充值结算)

@property(nonatomic,strong)YHMPOtherDP *insuranceSettleDP;//医保结算

@property(nonatomic,strong)YHMPQuerySettleResultDP *settleResultDP;

@property(nonatomic,strong)YHMPOtherDP *channelDP;

@property(nonatomic,strong)YHMPOtherDP *smsCodeDP;

@property(nonatomic,strong)YHMPSettleCashierDP *dataProvider;

@property(nonatomic,strong)YHMPSettleOrderPT *presenter;

-(instancetype)initWithModel:(YHMPPrescModel *)aPresModel;

@end

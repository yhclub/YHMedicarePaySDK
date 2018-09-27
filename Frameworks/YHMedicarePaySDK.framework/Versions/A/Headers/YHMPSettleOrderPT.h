//
//  YHMPSettleOrderPT.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/23.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPayTabelViewPT.h"
#import "YHMPayChannelModel.h"
#import "YHMPOtherDP.h"
#import "YHMPSettleCashierDP.h"

@interface YHMPSettleOrderPT : YHMPayTabelViewPT

@property(nonatomic,weak)YHMPOtherDP *channelDP;

@property(nonatomic,weak)YHMPOtherDP *smsCodeDP;

@property(nonatomic,weak)YHMPSettleCashierDP *dataProvider;

@property(nonatomic,strong)YHMPayChannelModel *selectChannel;

-(void)reloadData;

//开始倒计时
-(void)startCountdown;


-(NSString *)getValidateCode;//验证码

@end


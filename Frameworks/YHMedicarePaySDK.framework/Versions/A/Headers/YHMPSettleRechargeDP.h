//
//  YHMPSettleRechargeDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/23.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseDP.h"

#import "YHMPSettleRechargeRespModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YHMPSettleRechargeDP : YHMPBaseDP

@property(nonatomic,strong)YHMPSettleRechargeRespModel *model;

@property(nonatomic,strong)NSString *depositType;
@property(nonatomic,strong)NSString *rechargeAmount;//金额
@property(nonatomic,strong)NSString *consumeAmount;//消费金额
@property(nonatomic,strong)NSString *hopVoucherId;//商户扣费流水号=

@end

NS_ASSUME_NONNULL_END

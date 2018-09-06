//
//  YHMPQuerySettleResultDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/23.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseDP.h"
#import "YHMPSettleResultRespModel.h"

@interface YHMPQuerySettleResultDP : YHMPBaseDP

@property(nonatomic,strong)YHMPSettleResultRespModel *model;

@property(nonatomic,strong)NSString *traceNo;
@property(nonatomic,strong)NSString *outTradeNo;

@end

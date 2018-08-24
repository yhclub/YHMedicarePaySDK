//
//  YHMPQuerySettleResultDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/23.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseDP.h"
#import "YHSettleResultRespModel.h"

@interface YHMPQuerySettleResultDP : YHMPBaseDP

@property(nonatomic,strong)YHSettleResultRespModel *model;

@property(nonatomic,strong)NSString *traceNo;

@end

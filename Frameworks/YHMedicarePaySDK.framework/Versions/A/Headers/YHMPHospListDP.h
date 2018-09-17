//
//  YHMPHospListDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2017/11/21.
//  Copyright © 2017年 YH. All rights reserved.
//

#import "YHMPHospListRespModel.h"

#define HospListAppType @"14"

@interface YHMPHospListDP : YHMPBaseDP

@property(nonatomic,strong)YHMPHospListRespModel *model;

- (void)initDataWithHospList:(NSArray *)hospList;

@end

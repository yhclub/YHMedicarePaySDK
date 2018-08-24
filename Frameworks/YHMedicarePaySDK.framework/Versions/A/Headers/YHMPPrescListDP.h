//
//  YHMPPrescListDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseDP.h"
#import "YHPresListRespModel.h"

@interface YHMPPrescListDP : YHMPBaseDP

@property(nonatomic,strong)YHMPHospModel *hospModel;

/**
 * 返回参数
 */
@property(nonatomic,strong)YHPresListRespModel *model;

@property(nonatomic,strong)NSArray *presItemArray;

-(YHMPBaseModel *)getModelWithIndexPath:(NSIndexPath *)indexPath;

@end

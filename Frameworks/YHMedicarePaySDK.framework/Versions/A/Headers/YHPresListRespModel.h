//
//  YHPresListRespModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseRespModel.h"
#import "YHMPPrescModel.h"
@class YHPresListRespParamModel;

@interface YHPresListRespModel : YHMPBaseRespModel

@property(nonatomic,strong)YHPresListRespParamModel *param;

@end

@interface YHPresListRespParamModel : NSObject

/** 待扣费单据集合JSON
 *  根据queryType=main时返回,字段说明详见 待扣费单据集合
 */
@property(nonatomic,strong)NSArray *mainList;

//待扣费单据返回记录数
@property(nonatomic,copy)NSString *mainCount;

//待扣费单据总记录数
@property(nonatomic,copy)NSString *mainTotal;


- (YHMPPrescModel *)modelAtIndex:(NSUInteger)index;

@end

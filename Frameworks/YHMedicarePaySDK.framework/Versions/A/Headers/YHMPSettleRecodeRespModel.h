//
//  YHMPSettleRecodeRespModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import "YHMPBaseRespModel.h"
#import "YHMPBillModel.h"

@interface YHMPSettleRecodeRespModel : YHMPBaseRespModel

@property(nonatomic,strong)YHMPBillModel *param;

@end

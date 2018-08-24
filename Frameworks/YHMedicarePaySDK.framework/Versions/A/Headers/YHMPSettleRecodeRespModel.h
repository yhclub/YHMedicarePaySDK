//
//  YHMPSettleRecodeRespModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import "YHMPBaseRespModel.h"
@class YHMPSettleRecodeRespParamModel;

@interface YHMPSettleRecodeRespModel : YHMPBaseRespModel

@property(nonatomic,strong)YHMPSettleRecodeRespParamModel *param;

@end

@interface YHMPSettleRecodeRespParamModel : NSObject

@property(nonatomic,strong)NSArray *bills;
@property(nonatomic,copy)NSString *len;
@property(nonatomic,copy)NSString *totalCount;

@end

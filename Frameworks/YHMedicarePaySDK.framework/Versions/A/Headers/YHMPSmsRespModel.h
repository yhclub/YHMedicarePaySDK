//
//  YHMPSmsRespModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/9/6.
//

#import "YHMPBaseRespModel.h"
@class YHMPSmsRespParamModel;

@interface YHMPSmsRespModel : YHMPBaseRespModel

@property(nonatomic,strong)YHMPSmsRespParamModel *param;

@end

@interface YHMPSmsRespParamModel : NSObject

@property(nonatomic,strong)NSString *message;

@end

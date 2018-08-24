//
//  YHMPChannelRespModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/21.
//

#import "YHMPBaseRespModel.h"
#import "YHMPayChannelModel.h"
@class YHMPChannelRespParamModel;

@interface YHMPChannelRespModel : YHMPBaseRespModel

@property(nonatomic,strong)YHMPChannelRespParamModel *param;

@end

@interface YHMPChannelRespParamModel : YHMPBaseRespModel

@property(nonatomic,copy)NSString *appId;   //应用ID
@property(nonatomic,strong)NSArray *opAppChannelRel;//渠道列表

@end

//
//  YHMPSettleRecordListRespModel.h
//  YHHeYiTong
//
//  Created by zxl on 2018/8/24.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseRespModel.h"
@class YHMPSettleRecodeListParamModel;

@interface YHMPSettleRecordListRespModel : YHMPBaseRespModel

@property(nonatomic,strong)YHMPSettleRecodeListParamModel *param;

@end

@interface YHMPSettleRecodeListParamModel : NSObject

@property(nonatomic,strong)NSArray *bills;
@property(nonatomic,copy)NSString *len;
@property(nonatomic,copy)NSString *totalCount;

@end


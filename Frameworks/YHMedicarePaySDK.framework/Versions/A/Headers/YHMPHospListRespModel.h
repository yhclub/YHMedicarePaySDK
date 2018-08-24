//
//  YHMPHospListRespModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2017/12/5.
//  Copyright © 2017年 YH. All rights reserved.
//

#import "YHMPBaseRespModel.h"
@class YHMPHospListModel;

@interface YHMPHospListRespModel : YHMPBaseRespModel

@property(nonatomic,strong)YHMPHospListModel *param;

@end

@interface YHMPHospListModel : NSObject

@property(nonatomic,strong)NSArray *hospitalList;

@end



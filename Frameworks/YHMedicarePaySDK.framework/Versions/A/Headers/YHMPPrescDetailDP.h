//
//  YHMPPrescDetailDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseDP.h"
#import "YHMPPrescModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YHMPPrescDetailDP : YHMPBaseDP

@property(nonatomic,strong)id<YHMPSettleBillProtocol> model;

@property(nonatomic,strong)NSMutableArray *presItemArray;

-(id)getModelWithIndexPath:(NSIndexPath *)indexPath;

@end

NS_ASSUME_NONNULL_END

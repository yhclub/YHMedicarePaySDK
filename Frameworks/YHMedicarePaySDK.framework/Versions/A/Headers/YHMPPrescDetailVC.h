//
//  YHMPPrescDetailVC.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <YHCommonSDK/YHCommonSDK.h>
#import "YHMPPrescDetailPT.h"
#import "YHMPPrescModel.h"

@interface YHMPPrescDetailVC : YHScrollVC

@property(nonatomic,strong)YHMPPrescDetailPT *presenter;

@property(nonatomic,strong)YHMPPrescDetailDP *dataProvider;

-(instancetype)initWithModel:(YHMPPrescModel *)aPresModel;

@end

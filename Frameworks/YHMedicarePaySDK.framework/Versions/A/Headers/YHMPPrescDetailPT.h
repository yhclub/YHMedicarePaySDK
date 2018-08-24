//
//  YHMPPrescDetailPT.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPayTabelViewPT.h"
#import "YHMPPrescDetailDP.h"
#import "YHMPPrescModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YHMPPrescDetailPT : YHMPayTabelViewPT

@property(nonatomic,weak)YHMPPrescDetailDP *dataProvider;

@end

NS_ASSUME_NONNULL_END

//
//  YHMPPrescListPT.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/21.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPayTabelViewPT.h"
#import "YHMPPrescListDP.h"
#import "YHMPPrescModel.h"
#import "YHMPHospModel.h"

@interface YHMPPrescListPT :YHMPayTabelViewPT

@property(nonatomic,weak)YHMPPrescListDP *dataProvider;

@end

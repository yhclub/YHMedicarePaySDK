//
//  YHMPPrescListVC.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/21.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <YHCommonSDK/YHCommonSDK.h>
#import "YHMPPrescListPT.h"
#import "YHMPPrescListDP.h"
#import "YHMPHospListDP.h"

typedef  NS_ENUM(NSInteger,YHMPPrescVisitType){
    YHMPPrescVisitTypeOutpatient,//门诊
    YHMPPrescVisitTypeInHospital,//住院
    YHMPPrescVisitTypeExamination//体检
};

@interface YHMPPrescListVC : YHPullRefreshController <YHNetProtocol>

@property(nonatomic,strong)YHMPPrescListPT *presenter;

@property(nonatomic,strong)YHMPPrescListDP *dataProvider;

@property(nonatomic,strong)YHMPHospListDP *guideListDp;

@property(nonatomic,assign)YHMPPrescVisitType visitType;

-(instancetype)initWithModel:(YHMPHospModel *)hospModel;

//选择就诊类型 0为门诊 1为住院
-(void)setVisitType:(YHMPPrescVisitType)visitType;

@end

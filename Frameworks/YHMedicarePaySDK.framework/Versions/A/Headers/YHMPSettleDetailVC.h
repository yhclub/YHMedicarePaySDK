//
//  YHMPSettleDetailVC.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import <YHCommonSDK/YHCommonSDK.h>
#import "YHMPSettleDetailPT.h"
#import "YHMPSettleRecodeDetailDP.h"
#import "YHMPSettleResultModel.h"

@interface YHMPSettleDetailVC : YHBaseViewController <YHNetProtocol>

@property(nonatomic,strong)YHMPSettleDetailPT *presenter;

@property(nonatomic,strong)YHMPSettleRecodeDetailDP *dataProvider;

@property(nonatomic,strong)YHMPQuerySettleResultDP *settleResultDP;

@property(nonatomic,strong)YHMPSettleResultModel *resultModel;
@property(nonatomic,strong)YHMPPrescModel *prescModel;

-(instancetype)initWithBillSn:(NSString *)billSn;
-(instancetype)initWithTraceNo:(NSString *)traceNo;

@end

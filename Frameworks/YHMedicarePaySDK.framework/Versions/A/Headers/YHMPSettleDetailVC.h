//
//  YHMPSettleDetailVC.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import <YHCommonSDK/YHCommonSDK.h>
#import "YHMPSettleDetailPT.h"
#import "YHMPSettleRecodeDP.h"

@interface YHMPSettleDetailVC : YHBaseViewController <YHNetProtocol>

@property(nonatomic,strong)YHMPSettleDetailPT *presenter;

@property(nonatomic,strong)YHMPSettleRecodeDP *dataProvider;



@end

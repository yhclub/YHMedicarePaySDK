//
//  YHMPSettleRecodeDetailDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import "YHMPBaseDP.h"
#import "YHMPSettleRecodeRespModel.h"

@interface YHMPSettleRecodeDetailDP : YHMPBaseDP

/**
 * 查询详情
 * queryType： onlineRecordDetail
*/
//入参
@property(nonatomic,copy)NSString *billSn;
@property(nonatomic,copy)NSString *traceNo;


//响应
@property(nonatomic,strong)YHMPSettleRecodeRespModel *model;


//详情数据
@property(nonatomic,strong)NSMutableArray *detailArray;

-(void)reloadDetailDataWithModel:(id<YHMPSettleBillProtocol>)billModel;

@end

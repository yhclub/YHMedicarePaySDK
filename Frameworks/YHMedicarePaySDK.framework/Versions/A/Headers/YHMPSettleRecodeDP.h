//
//  YHMPSettleRecodeDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import "YHMPBaseDP.h"
#import "YHMPSettleRecodeRespModel.h"

@interface YHMPSettleRecodeDP : YHMPBaseDP

/**
 * 查询结算记录(分页)
 * queryType： onlineRecord
 * @param beginDate 起始日期
 * @param endDate 结束日期
 */
-(void)startWithBeginDate:(NSString *)beginDate endDate:(NSString *)endDate;

/**
 * 查询详情
 * queryType： onlineRecordDetail
*/
-(void)startWithBillSn:(NSString *)billSn;


//响应
@property(nonatomic,strong)YHMPSettleRecodeRespModel *model;

//数据
@property(nonatomic,strong)YHSettleResultRespParamModel *resultModel;

//详情数据
@property(nonatomic,strong)NSMutableArray *detailArray;

-(void)reloadDetailDataWithModel:(id<YHMPSettleBillProtocol>)budgetModel;

@end

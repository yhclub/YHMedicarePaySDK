//
//  YHMPSettleResultModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/28.
//

#import <Foundation/Foundation.h>

@interface YHMPSettleResultModel : NSObject

@property(nonatomic,copy)NSString *result;//交易结果状态码
@property(nonatomic,copy)NSString *resultDES;//交易结果说明
@property(nonatomic,copy)NSString *amount;//交易金额
@property(nonatomic,copy)NSString *cardNo;//卡号
@property(nonatomic,copy)NSString *cardType;//卡类型
@property(nonatomic,copy)NSString *outTradeNo;//商户业务流水号
@property(nonatomic,copy)NSString *tradeMode;//充值方式
@property(nonatomic,copy)NSString *origTraceNo;//查询交易平台跟踪号
@property(nonatomic,copy)NSString *origTraceTime;//查询交易成功时间
@property(nonatomic,copy)NSDictionary *extra;//额外出参
//resNote、callSn、responseContent(JSON）

-(BOOL)isSuccess;
-(BOOL)isFailed;
-(BOOL)isInProcess;
-(BOOL)isInit;

@end

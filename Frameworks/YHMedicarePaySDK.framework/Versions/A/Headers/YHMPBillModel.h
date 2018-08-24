//
//  YHMPBillModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import <Foundation/Foundation.h>
#import "YHMPSettleBillProtocol.h"

@interface YHMPBillModel : NSObject<YHMPSettleBillProtocol>

@property(nonatomic,copy)NSString *voucherNo;      //单据号
@property(nonatomic,copy)NSString *zhzfe0;      //账户支付额
@property(nonatomic,copy)NSString *grzfe0;      //个人支付额
@property(nonatomic,copy)NSString *jjzfe0;      //基金支付额
@property(nonatomic,copy)NSString *gwybz0;      //公务员补助
@property(nonatomic,copy)NSString *fybfy0;      //非医保费用
@property(nonatomic,copy)NSString *cfdxje;      //超封顶线金额
@property(nonatomic,copy)NSString *bjjjzf;      //保健基金支付
@property(nonatomic,copy)NSString *sybxzf;      //商业保险支付
@property(nonatomic,copy)NSString *bcbxze;      //本次报销总额
@property(nonatomic,copy)NSString *ybzhye;      //医保账户余额
@property(nonatomic,copy)NSString *ylzfje;      //乙类支付额
@property(nonatomic,copy)NSString *jkzhzf;      //健康账户支付
@property(nonatomic,copy)NSString *jkzhye;      //健康账户余额
@property(nonatomic,copy)NSString *gjzhzf;      //共济账户支付
@property(nonatomic,copy)NSString *mzbzje;      //民政补助金额
@property(nonatomic,copy)NSString *patientType;      //结算身份
@property(nonatomic,copy)NSString *settleChannel;      //结算渠道
@property(nonatomic,copy)NSString *drugState;      //取药状态
@property(nonatomic,copy)NSString *receiptState;      //发票状态;
@property(nonatomic,copy)NSString *extState;      //平台交易状态
@property(nonatomic,copy)NSString *cardNo;      //平台交易卡号
@property(nonatomic,copy)NSString *userName;      //用户姓名
@property(nonatomic,copy)NSString *deptName;      //科室名称
@property(nonatomic,copy)NSString *crtDate;      //平台交易日期
@property(nonatomic,copy)NSString *crtTime;      //平台交易时间
@property(nonatomic,copy)NSString *billSn;      //平台交易流水

//待扣费单据明细集合     List
@property(nonatomic,strong)NSArray *detailList;

//扩展出参
@property(nonatomic,strong)NSDictionary *extra;

@end

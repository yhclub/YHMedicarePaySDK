//
//  YHMPSettleBillProtocol.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import <Foundation/Foundation.h>

@protocol YHMPSettleBillProtocol <NSObject>

@required

/**
 * --- 处方信息 ---
 */
//获取单据号
-(NSString *)getVoucherNo;

//平台单据号
-(NSString *)getVoucherId;

//处方明细
-(NSArray *)getDetailList;

/**
 * 是否是医保病人
 */
-(BOOL)isInsurancePatientType;

/**
 * --- 获取支付费用信息 ---
 */
//总费用(本次报销总额)
-(double)getTotalAmount;

//还需自费金额
-(double)getPersonalPayAmount;


//乙类支付额
-(double)getBClassAmount;

/**
 * --- 获取支付费用信息-其他部分 ---
 */
//医保账户支付金额
-(double)getInsuranceAmount;

//医保个人账户支付金额
-(double)getInsurancePersonalAmount;

//医保统筹基金支付金额
-(double)getInsurancePlanAmount;
//院内账户支付
-(double)getHosAccountAmount;

//公务员补助
-(double)getCivilSubsidyAmount;
//非医保费用
-(double)getOtherInsuranceAmount;

//超封顶线金额
-(double)getExcessAmount;

//保健基金支付
-(double)getHealthcareAmount;

//商业保险支付
-(double)getCommercialAmount;

//共济账户支付
-(double)getMutualAidAmount;

//民政补助金额
-(double)getAffairsSubsidyAmount;

//健康账户支付
-(double)getHealthAccAmount;

//其他优惠
-(double)getOtherDerateAmount;

/**
 * 账户信息
 */
//医保账户余额
-(double)getInsuranceBalance;

//健康账户余额
-(double)getHealthAccBalance;


/**
 * --- 类型显示 ---
 */
//患者费用类型
-(NSString *)getPatientTypeName;


/**
 * --- 就诊人信息 ---
 */
//获取卡号信息,有名字则显示名字(卡号)
-(NSString *)getCardInfo;


/**
 * --- 就诊信息 ---
 */
//科室名称
-(NSString *)getDepaName;
//医生姓名
-(NSString *)getDoctorName;
//处方时间
-(NSString *)getRecipeTime;

@optional

//其他扩展参数
-(NSDictionary *)getExtra;

//医院名称
-(NSString *)getHospName;

//医院地址
-(NSString *)getHospUrl;

@end


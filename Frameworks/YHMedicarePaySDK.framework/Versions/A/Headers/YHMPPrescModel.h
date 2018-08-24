//
//  YHMPPrescModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YHMPSettleBillProtocol.h"
#import "YHMPPresItemModel.h"

@interface YHMPPrescModel : NSObject<YHMPSettleBillProtocol>

@property(nonatomic,copy)NSString *appId;
@property(nonatomic,copy)NSString *hospName;

@property(nonatomic,copy)NSString *hisCustId;       //患者HIS档案编号
@property(nonatomic,copy)NSString *registerNo;      //定点机构业务流水号
@property(nonatomic,copy)NSString *voucherNo;       //单据号
@property(nonatomic,copy)NSString *recipeNo;        //处方号
@property(nonatomic,copy)NSString *recipeType;      //处方类别
@property(nonatomic,copy)NSString *applyDepaId;     //申请医疗机构科室ID
@property(nonatomic,copy)NSString *applyDepaName;   //申请科室名称
@property(nonatomic,copy)NSString *applyDoctorId;   //申请医生ID
@property(nonatomic,copy)NSString *applyDoctorName; //申请医生姓名
@property(nonatomic,copy)NSString *recipeTime;      //处方时间
@property(nonatomic,copy)NSString *recipeDoctorName;//处方医生名称
@property(nonatomic,copy)NSString *fee;             //总费用
@property(nonatomic,copy)NSString *execDepaId;      //执行科室ID
@property(nonatomic,copy)NSString *execDepaName;    //执行科室名称
@property(nonatomic,copy)NSString *cardNo;      //卡号
@property(nonatomic,copy)NSString *userAge;     //病人年龄
@property(nonatomic,copy)NSString *bckbcs;      //本次看病次数
@property(nonatomic,copy)NSString *bcsfcs;      //本次收费次数
@property(nonatomic,copy)NSString *sftsmz;      //是否特殊门诊
@property(nonatomic,copy)NSString *sftsbz;      //是否特殊病种
@property(nonatomic,copy)NSString *sfsysf;      //是否生育收费
@property(nonatomic,copy)NSString *doctorIdNo;  //医生证件号码
@property(nonatomic,copy)NSString *bqzdbm;      //病情诊断编码
@property(nonatomic,copy)NSString *bqzdms;      //病情诊断描述
@property(nonatomic,copy)NSString *yszjjb;      //医师诊金等级
@property(nonatomic,copy)NSString *mzlb00;      //门诊类别
@property(nonatomic,copy)NSString *sfygwd;      //是否医改网点
@property(nonatomic,copy)NSString *payKind;     //扣费类别
@property(nonatomic,copy)NSString *mzlsh0;      //医保门诊流水号
@property(nonatomic,copy)NSString *note;        // 备注


/**
 * 患者费用类型，用来区分后续是调用门诊自费结算还是门诊医保结算的重要参数
 * 00:自费卡患者
 * 01:医保卡患者
 */
@property(nonatomic,copy)NSString *patientType;

//交完预交金还需要充值的金额(patientType=00时,有此值）
@property(nonatomic,copy)NSString *rechargeAmount;

//待扣费单据明细集合     List
@property(nonatomic,strong)NSArray *detailList;

//扩展出参（grzfe0个人支付额、ybzfe0医保支付额、hopVoucherId平台单据号）
@property(nonatomic,strong)NSDictionary *extra;

@end
\

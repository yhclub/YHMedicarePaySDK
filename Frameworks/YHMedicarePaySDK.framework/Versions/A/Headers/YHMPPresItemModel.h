//
//  YHMPPresItemModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import <Foundation/Foundation.h>

@interface YHMPPresItemModel : NSObject

@property(nonatomic,copy)NSString *hisCustId;           //患者HIS档案编号
@property(nonatomic,copy)NSString *registerNo;          //定点机构业务流水号
@property(nonatomic,copy)NSString *voucherNo ;          //单据号
@property(nonatomic,copy)NSString *voucherItemNo;       //单据子序号
@property(nonatomic,copy)NSString *recipeType;          //处方类别
@property(nonatomic,copy)NSString *itemCode;            //项目编码
@property(nonatomic,copy)NSString *itemName;            //项目名称
@property(nonatomic,copy)NSString *itemSpec;            //项目规格
@property(nonatomic,copy)NSString *itemForm;            //项目剂型
@property(nonatomic,copy)NSString *itemDose;            //项目剂量
@property(nonatomic,copy)NSString *itemUnit;            //项目单位
@property(nonatomic,copy)NSString *itemUsage;           //项目用法用量
@property(nonatomic,copy)NSString *frequency;           //频次
@property(nonatomic,copy)NSString *price;        //单价
@property(nonatomic,copy)NSString *num;                   //数量
@property(nonatomic,copy)NSString *unit;        //单位
@property(nonatomic,copy)NSString *fee;                 //总费用
@property(nonatomic,copy)NSString *recipeTime;          //处方时间
@property(nonatomic,copy)NSString *recipeDoctorName;    //处方医生名称
@property(nonatomic,copy)NSString *mediSettleState;     //结算标志
@property(nonatomic,copy)NSString *mediSettleTime;      //结算时间
@property(nonatomic,copy)NSString *dosageUnit;          //用量单位
@property(nonatomic,copy)NSString *pillDay;             //药品天数
@property(nonatomic,copy)NSString *note;        //备注

@end

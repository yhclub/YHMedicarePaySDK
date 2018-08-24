//
//  YHMPUserModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/8.
//

#import <Foundation/Foundation.h>

@interface YHMPUserModel : NSObject

/**
 * 用户登录令牌
 */
@property(nonatomic,copy)NSString * userToken;

@property(nonatomic,copy)NSString *userName;        //用户姓名
@property(nonatomic,copy)NSString *contactNumber;           //用户电话
@property(nonatomic,copy)NSString *cardNo;          //卡号
@property(nonatomic,copy)NSString *cardType;        //卡类型

//---nullable---//
@property(nonatomic,copy)NSString *idNo;            //证件号
@property(nonatomic,copy)NSString *idType;          //证件类型(01身份证)

//---null---//
@property(nonatomic,copy)NSString *hisCustId;       //患者HIS档案编号
@property(nonatomic,copy)NSString *accountType;     //帐户类型
@property(nonatomic,copy)NSString *registerNo;      //门诊号


@end

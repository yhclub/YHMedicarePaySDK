//
//  YHMPOtherParamModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/17.
//

#import <Foundation/Foundation.h>

@interface YHMPOtherParamModel : NSObject

@property(nonatomic,copy)NSString *method;//方法名
@property(nonatomic,copy)NSString *extra;//扩展入参

//获取用户信息
@property(nonatomic,copy)NSString *token;//用户令牌

//包名验证
@property(nonatomic,copy)NSString *packageName;//包名
@property(nonatomic,copy)NSString *sign;//签名

//发送短信验证码


//医保结算（带有短信验证码）
@property(nonatomic,copy)NSString *depositType;//支付方式
@property(nonatomic,copy)NSString *amount;//金额
@property(nonatomic,copy)NSString *smsCode;//短信验证码
@property(nonatomic,copy)NSString *hopVoucherId;//平台单据号


//获取支付渠道


@end

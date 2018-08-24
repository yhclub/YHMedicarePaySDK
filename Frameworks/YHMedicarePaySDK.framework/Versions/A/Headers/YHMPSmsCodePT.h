//
//  YHMPSmsCodePT.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/21.
//

#import "YHMPayCommonPT.h"

@interface YHMPSmsCodePT : YHMPayCommonPT

@property(nonatomic,weak)YHMPOtherDP *smsCodeDP;

@property(nonatomic,strong)NSString *validateCode;//验证码

@end

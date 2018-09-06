//
//  YHMPHospModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/25.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHMPHospModel : NSObject<NSCopying>

@property(nonatomic,copy)NSString *hospName;      //医院名称
@property(nonatomic,copy)NSString *appId;         //医院appid
@property(nonatomic,copy)NSString *appSecret;     //医院appid对应密钥
@property(nonatomic,copy)NSString *url;           //医院支付平台地址

@end

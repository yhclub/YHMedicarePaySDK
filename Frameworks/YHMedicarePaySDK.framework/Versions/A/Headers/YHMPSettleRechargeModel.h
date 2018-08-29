//
//  YHMPSettleRechargeModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/23.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YHMPSettleRechargeModel : NSObject

@property(nonatomic,copy)NSString *orderNo;     //订单号
@property(nonatomic,copy)NSString *chargeNo;       //String    支付平台充值订单号
@property(nonatomic,copy)NSString *channel;       //支付渠道
@property(nonatomic,copy)NSDictionary *credential;      //JSON 吊起客户端支付凭据
@property(nonatomic,copy)NSString *directUrl;       //ALI_WAP支付返回支付跳转链接
@property(nonatomic,copy)NSString *cardKind;        //银行卡类型
@property(nonatomic,copy)NSString *outChargeNo;
@property(nonatomic,copy)NSString *qrcode;
@property(nonatomic,copy)NSString *url;
@property(nonatomic,copy)NSString *html;
@property(nonatomic,copy)NSString *optional;

@property(nonatomic,copy)NSString *createDate;

@property(nonatomic,copy)NSString *settleRecordId;       //string    结算记录ID
@property(nonatomic,copy)NSString *traceNo;       //string    平台交易跟踪号
@property(nonatomic,copy)NSString *traceTime;       //string    交易成功时间
@property(nonatomic,strong)NSDictionary *extra;   //JSON    额外参数 ,webCallbackUrl:web回调地址

@end

NS_ASSUME_NONNULL_END

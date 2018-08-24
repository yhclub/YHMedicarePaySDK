//
//  YHMPBaseReqModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/8.
//

#import <Foundation/Foundation.h>
#import "YHMPDeviceModel.h"

#define YHMPFirstPageNo @"1"

@class YHMPPageParamReqModel;
@interface YHMPBaseReqModel : NSObject

@property(nonatomic,copy)NSString *appId;

@property(nonatomic,copy)NSString *appSecret;

@property(nonatomic,copy)NSString *transType;

@property(nonatomic,copy)NSString *version;

@property(nonatomic,copy)NSString *sign;

@property(nonatomic,copy)NSString *signType;    //加签方式，默认MD5

@property(nonatomic,copy)NSString *encryptType; //加密方式，默认AES

@property(nonatomic,copy)NSString *isEncrypt;   //是否加密加签 (0|1 目前服务端未不支持)
@property(nonatomic,strong)NSMutableDictionary *param;//业务参数 extra扩展入参

@property(nonatomic,copy)NSString *timestamp;//e.g 20171127051619060

@property(nonatomic,strong)YHMPPageParamReqModel *pageParam;//分页参数

@property(nonatomic,strong)NSMutableDictionary *paramBody;//最外层参数

@property(nonatomic,strong)YHMPDeviceModel *deviceInfo;

/**
 *  返回最终请求参数
 */
-(NSMutableDictionary *)reqParam;

@end

@interface YHMPPageParamReqModel : NSObject

@property(nonatomic,copy)NSString *pageNo;
@property(nonatomic,copy)NSString *pageSize;

-(BOOL)isFirstPage;

-(void)setNextPage;


@end

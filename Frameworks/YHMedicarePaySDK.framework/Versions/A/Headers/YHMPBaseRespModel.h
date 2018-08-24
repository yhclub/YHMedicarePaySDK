//
//  YHMPBaseRespModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/16.
//

#import <Foundation/Foundation.h>

@interface YHMPBaseRespModel : NSObject

@property(nonatomic,copy)NSString *respCode;//请求返回的代码
@property(nonatomic,copy)NSString *respMsg;//请求返回提示消息

//子类需返回的处理业务参数
//@property(nonatomic,copy)id param;//解密数据

@property(nonatomic,copy)NSString *encryptType;//加密算法
@property(nonatomic,copy)NSString *signType;//签名算法
@property(nonatomic,copy)NSString *sign;    //签名(服务端的)
@property(nonatomic,copy)NSString *signClient;    //签名
@property(nonatomic,copy)NSString *timestamp;//服务端时间戳

/**
 * 返回正常数据
 */
-(BOOL)isAccess;

//报文合法性校验错误
-(BOOL)isCorrectSign;

@end

//
//  YHMPBaseDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/7.
//

#import <YHNetSDK/YHNetSDK.h>
#import "YHMPBaseReqModel.h"

@interface YHMPBaseDP : YHBaseLoadMoreDP

/**
 参数容器
 */
@property(nonatomic,strong)YHMPBaseReqModel *reqModel;

/**
 初始化参数
 */
-(void)initData;
-(void)initDataWithAppId:(NSString *)appId appSecret:(NSString *)appSecret appHost:(NSString *)appHost;

@end

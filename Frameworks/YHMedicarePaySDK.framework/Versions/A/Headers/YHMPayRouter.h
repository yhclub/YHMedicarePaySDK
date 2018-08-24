//
//  YHMPayRouter.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/8.
//

#import <Foundation/Foundation.h>
#import <YHMedicarePaySDK/YHMPayConfig.h>
#import <YHMedicarePaySDK/YHMPConstant.h>
#import <YHMedicarePaySDK/YHMPPrescModel.h>
#import <YHMedicarePaySDK/YHMPHospModel.h>

@interface YHMPayRouter : NSObject

/**
 *  ->选择医院
 */
+(void)gotoHospListVC:(void(^)(YHMPHospModel * selectedModel,NSArray *hospList))actionAfterChooseBlock;

/**
 *  ->选择待结算处方列表
 */
+(void)gotoPrescListVC:(YHMPHospModel *)hospModel;
+(void)gotoPrescListVC:(YHMPHospModel *)hospModel hospList:(NSArray *)hospList;

/**
 *  ->确认处方（处方详情）
 */
+(void)gotoPrescDetailVC:(YHMPPrescModel *)prescModel;

/**
 * ->结算收银台
 */
+(void)gotoSettleCashierVC:(YHMPPrescModel *)prescModel;

/**
 * ->结算成功完成
 */
+(void)gotoSettleDetailVC:(YHMPPrescModel *)prescModel;


/**
 *  查询已结算记录
 *  ->展示已结算记录列表页
 */
+(void)gotoSettledRecodeVC:(YHMPPrescModel *)prescModel;



+(void)test;


/**
 *  打开下一个页面
 *  present YHBaseNavController,其rootViewController为vc
 */
+(void)gotoNextVC:(UIViewController *)vc;

@end

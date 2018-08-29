//
//  YHMPSettleRecordListMonthModel.h
//  YHHeYiTong
//
//  Created by zxl on 2018/8/24.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHMPSettleRecordListMonthModel : NSObject

@property(nonatomic,copy)NSString *month;

@property(nonatomic,copy)NSString *totalAmount;

@property(nonatomic,strong)NSArray *list;

@end

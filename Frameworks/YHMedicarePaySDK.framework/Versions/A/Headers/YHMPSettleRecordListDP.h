//
//  YHMPSettleRecordListDP.h
//  YHHeYiTong
//
//  Created by zxl on 2018/8/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseDP.h"
#import "YHMPSettleRecordListRespModel.h"

@interface YHMPSettleRecordListDP : YHMPBaseDP

@property(nonatomic,strong)NSMutableArray *sectionHeadDataArray;

@property(nonatomic,strong)NSMutableArray *dataArray;

@property(nonatomic,strong)YHMPSettleRecordListRespModel *model;

@property(nonatomic,strong)NSMutableArray *currentTotalArray;

@end

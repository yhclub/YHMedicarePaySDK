//
//  YHMPPresSetionCell.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/21.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseTableViewCell.h"
#import "YHMPayCommonPT.h"

@interface YHMPPresSetionCell : YHMPBaseTableViewCell <YHDataProtocol>

@property(nonatomic,strong)YHMPayCommonPT *presenter;

@end

//
//  YHMPSettleRecordListCell.h
//  YHHeYiTong
//
//  Created by zxl on 2018/8/22.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseTableViewCell.h"
#import "YHMPayCommonPT.h"

@interface YHMPSettleRecordListCell : YHMPBaseTableViewCell<YHDataProtocol>

@property(nonatomic,strong)UILabel *leftBottomLabel;

@property(nonatomic,strong)UILabel *rightBottomLabel;

@property(nonatomic,strong)YHMPayCommonPT *pt;

+(CGFloat)getCellHeight;

@end

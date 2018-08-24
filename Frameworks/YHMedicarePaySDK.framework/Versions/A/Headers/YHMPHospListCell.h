//
//  YHMPHospListCell
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/21.
//  Copyright © 2017年 YH. All rights reserved.
//

#import "YHMPBaseTableViewCell.h"
#import "YHMPHospListCellPT.h"

@interface YHMPHospListCell : YHMPBaseTableViewCell<YHDataProtocol>

@property(nonatomic,strong)YHMPHospListCellPT *presenter;


+(CGFloat)getCellHeight;

@end

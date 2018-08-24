//
//  YHMPCommonCell.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/21.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHMPBaseTableViewCell.h"

@interface YHMPCommonCell : YHMPBaseTableViewCell <YHDataProtocol>

@property(nonatomic,strong)YHMPayCommonPT *presenter;

@property(nonatomic,assign)BOOL showLeftImage;

@property(nonatomic,assign)BOOL showBottomLine;

@end

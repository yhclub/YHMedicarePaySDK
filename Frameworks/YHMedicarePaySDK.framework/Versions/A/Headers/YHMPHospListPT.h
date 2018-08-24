//
//  YHMPHospListPT.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2017/12/3.
//  Copyright © 2017年 YH. All rights reserved.
//

#import "YHMPayTabelViewPT.h"
#import "YHMPHospListDP.h"
#import "YHMPHospListCellPT.h"
#import "YHMPHospModel.h"

typedef void(^YHMPHospListChooseBlock)(YHMPHospModel * selectedModel,NSArray *hospList);

@interface YHMPHospListPT : YHMPayTabelViewPT

@property(nonatomic,weak)YHMPHospListDP *dataProvider;

@property(nonatomic,copy)YHMPHospListChooseBlock actionAfterChooseBlock;

-(id)initWithView:(UITableView *)view;

@end

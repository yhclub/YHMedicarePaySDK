//
//  YHMPHospListVC.h
//  YHRongYiTong
//
//  选择医院列表页面
//  Created by ljt on 2018/8/16.
//  Copyright © 2017年 YH. All rights reserved.
//

#import "YHMPHospListPT.h"
#import "YHMPHospListDP.h"
#import "YHMPHospModel.h"

@interface YHMPHospListVC : YHPullRefreshController<YHNetProtocol>

@property(nonatomic,strong)UITableView *baseTableView;

@property(nonatomic,strong)YHMPHospListPT *presenter;

@property(nonatomic,strong)YHMPHospListDP *dataProvider;

-(id)initWithActionAfterChooseBlock:(YHMPHospListChooseBlock)actionAfterChooseBlock;

-(void)setActionAfterChooseBlock:(YHMPHospListChooseBlock)actionAfterChooseBlock;

@end

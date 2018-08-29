//
//  YHMPSettleRecordHeaderView.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/28.
//

#import <UIKit/UIKit.h>

@interface YHMPSettleRecordHeaderView :  UITableViewHeaderFooterView<YHDataProtocol>

@property(nonatomic,strong)UIView *bgView;

@property(nonatomic,strong)UIView *blueView;

@property(nonatomic,strong)UILabel *leftTitleLabel;

@property(nonatomic,strong)UILabel *totalLabel;

@property(nonatomic,strong)UIView *bottomLine;

@property(nonatomic,strong)YHMPayCommonPT *pt;

@end

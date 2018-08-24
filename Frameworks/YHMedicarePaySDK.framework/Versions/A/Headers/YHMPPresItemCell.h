//
//  YHMPPresItemCell.h
//  YHMedicarePaySDK
//  处方明细项目cell
//  Created by Jagtu on 2018/8/18.
//

#import "YHMPBaseTableViewCell.h"

@interface YHMPPresItemCell : YHMPBaseTableViewCell<YHDataProtocol>

@property(nonatomic,strong)YHMPayCommonPT *presenter;

@property(nonatomic,strong)UILabel *leftSubTitleLabel;

@property(nonatomic,assign)BOOL hiddenBottomLine;

@end

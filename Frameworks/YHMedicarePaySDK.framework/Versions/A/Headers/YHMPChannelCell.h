//
//  YHMPChannelCell.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/21.
//

#import "YHMPBaseTableViewCell.h"
#import "YHMPayCommonPT.h"

@interface YHMPChannelCell : YHMPBaseTableViewCell<YHDataProtocol>

@property(nonatomic,strong)YHMPayCommonPT *presenter;

@property(nonatomic,strong)UILabel *leftSubTitleLabel;

@end

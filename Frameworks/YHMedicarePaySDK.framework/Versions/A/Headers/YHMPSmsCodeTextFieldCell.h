//
//  YHMPSmsCodeTextFieldCell.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/21.
//

#import "YHMPBaseTableViewCell.h"
#import "YHMPSmsCodePT.h"

@interface YHMPSmsCodeTextFieldCell : YHMPBaseTableViewCell <YHDataProtocol>

@property(nonatomic,strong)YHMPSmsCodePT *presenter;

//开始倒计时
-(void)startCountdown;


@end

//
//  YHMPHospListHeaderView.h
//  YHMedicarePaySDK
//
//  Created by jagtu on 2018/7/18.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <YHBaseSDK/YHBaseSDK.h>

@interface YHMPHospListHeaderView : YHBaseView

@property(nonatomic,copy)NSString *title;

@property(nonatomic,copy)dispatch_block_t block;

@end

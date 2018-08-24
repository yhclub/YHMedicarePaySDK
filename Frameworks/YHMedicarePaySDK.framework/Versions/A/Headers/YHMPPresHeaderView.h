//
//  YHMPPresHeaderView.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/6/21.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YHMPPresHeaderView : UITableViewHeaderFooterView

@property(nonatomic,strong)UIImageView *segmentingImage;

@property(nonatomic,strong)UIView *bottomLine;

@property(nonatomic,strong)UILabel *titleLabel;

@property(nonatomic,assign)BOOL showBottomLine;
@property(nonatomic,assign)BOOL hiddenSegmentingImage;

-(void)setTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END

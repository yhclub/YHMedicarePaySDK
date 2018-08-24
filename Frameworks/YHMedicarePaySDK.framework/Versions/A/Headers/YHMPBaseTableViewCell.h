//
//  YHMPBaseTableViewCell.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/16.
//

#import <UIKit/UIKit.h>

@interface YHMPBaseTableViewCell : UITableViewCell

@property(nonatomic,strong)UIView *bgView;

@property(nonatomic,strong)UIImageView *leftImageView;

@property(nonatomic,strong)UIImageView *rightImageView;

@property(nonatomic,strong)UILabel *leftTitleLabel;

@property(nonatomic,strong)UILabel *rightTitleLabel;

@property(nonatomic,strong)UIView *bottomLine;

@property(nonatomic,strong)UIView *topCornerView;
@property(nonatomic,strong)UIView *bottomCornerView;

-(void)initData;

-(void)createView;

-(void)addContraint;

-(void)setBgViewCorner;

-(void)setBgViewCornerWithRowIndex:(NSInteger )rowIndex withSectionNum:(NSInteger)num;

@end

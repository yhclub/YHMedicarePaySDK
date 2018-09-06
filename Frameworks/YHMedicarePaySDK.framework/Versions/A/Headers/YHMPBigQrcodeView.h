//
//  YHMPBigQrcodeView.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/9/4.
//

#import <YHBaseSDK/YHBaseSDK.h>

@interface YHMPBigQrcodeView : YHBaseView

- (instancetype)initWithImageView:(UIImageView *)origle;

-(void)refreshImage:(UIImage *)image;

@end

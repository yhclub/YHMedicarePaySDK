//
//  UIImage+YHMP.h
//  YHMedicarePaySDK
//
//  Created by jagtu on 2018/4/9.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (YHMP)


FOUNDATION_EXPORT NSString * const YHMedicarePayBundle;

/**
 获取bundle image

 @param imageName name
 @return image
 */
+(UIImage *)mp_imageWithName:(NSString *)imageName;


/**
  获取bundle image name

 @param imageName name
 @return str
 */
+(NSString *)mp_getImageName:(NSString *)imageName;

@end

//
//  YHMPConstant.h
//  YHMedicarePaySDK
//
//  Created by jagtu on 2018/4/9.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHMPConstant : NSObject

//! Project version number for YHMedicarePaySDK.
FOUNDATION_EXPORT double YHMedicarePaySDKVersionNumber;

//! Project version string for YHMedicarePaySDK.
FOUNDATION_EXPORT const unsigned char YHMedicarePaySDKVersionString[];

FOUNDATION_EXPORT NSString * const YHMPBundle;
FOUNDATION_EXPORT NSString * const YHMPDefaultAppService;
FOUNDATION_EXPORT NSString * const YHMPDefaultEncryptType;
FOUNDATION_EXPORT NSString * const YHMPDefaultSignType;
FOUNDATION_EXPORT NSString * const YHMPDefaultInterfaceVersion;

FOUNDATION_EXPORT CGFloat const YHMPCellLeftPadding;

FOUNDATION_EXPORT CGFloat const YHMPCellRightPadding;

FOUNDATION_EXPORT CGFloat const YHMPCornerRadius;

FOUNDATION_EXPORT CGFloat const YHMPCellHeight;

typedef void(^YHMPPayCompletionBlock)(NSString * respCode,NSString * respMsg,NSDictionary * resultDic);


typedef void(^YHMPScrollViewPTBlock)(UIScrollView *scrollView);



@end

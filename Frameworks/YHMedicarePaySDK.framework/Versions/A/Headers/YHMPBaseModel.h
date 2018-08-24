//
//  YHMPBaseModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/16.
//

#import <Foundation/Foundation.h>

@interface YHMPBaseModel : NSObject

@property(nonatomic,copy)NSString *leftTitle;

@property(nonatomic,copy)NSString *leftImage;

@property(nonatomic,copy)NSString *rightTitle;

@property(nonatomic,copy)NSString *rightImage;

@property(nonatomic,assign)BOOL hiddenRightArrow;

@property(nonatomic,assign)BOOL hiddenBottomLine;

@property(nonatomic,assign)BOOL showTopCorner;

@property(nonatomic,assign)BOOL showBottomCorner;

@end

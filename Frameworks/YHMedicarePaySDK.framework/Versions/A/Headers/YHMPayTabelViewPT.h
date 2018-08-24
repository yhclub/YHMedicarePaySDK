//
//  YHMPayTabelViewPT.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/13.
//

#import <Foundation/Foundation.h>

typedef void(^YHScrollViewPTBlock)(UIScrollView *scrollView);

@interface YHMPayTabelViewPT : NSObject<UITableViewDelegate,UITableViewDataSource>

@property(nonatomic,weak)UITableView *tableView;

@property(nonatomic,copy)YHScrollViewPTBlock scrollBlock;

-(id)initWithView:(UITableView *)view;

@end

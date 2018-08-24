//
//  YHMPPickerSheetView.h
//  YHHeYiTong
//  选择器操作表
//  Created by Jagtu on 2018/6/22.
//  Copyright © 2018年 YH. All rights reserved.
//
#import <YHBaseSDK/YHBaseSDK.h>

@class YHMPPickerSheetView;

NS_ASSUME_NONNULL_BEGIN

@protocol YHMPPickerSheetViewDataSource<NSObject>
@required

// returns the number of 'columns' to display.
- (NSInteger)numberOfComponentsInPickerSheet:(YHMPPickerSheetView *)pickerSheetView;

// returns the # of rows in each component..
- (NSInteger)pickerSheet:(YHMPPickerSheetView *)pickerSheetView numberOfRowsInComponent:(NSInteger)component;

// these methods return either a plain NSString, a NSAttributedString, or a view (e.g UILabel) to display the row for the component.
// for the view versions, we cache any hidden and thus unused views and pass them back for reuse.
// If you return back a different object, the old one will be released. the view will be centered in the row rect
- (nullable NSString *)pickerSheet:(YHMPPickerSheetView *)pickerSheetView titleForRow:(NSInteger)row forComponent:(NSInteger)component __TVOS_PROHIBITED;

@optional

- (void)pickerSheet:(YHMPPickerSheetView *)pickerSheetView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;

// Called when a button is clicked. The view will be automatically dismissed after this call returns
- (void)pickerSheet:(YHMPPickerSheetView *)pickerSheetView clickedButtonAtIndex:(NSInteger)buttonIndex;

@end


@interface YHMPPickerSheetView : YHBaseView

@property(nonatomic,strong)UIView *mainView;

@property(nonatomic,strong)UIButton *confirmBtn;

@property(nonatomic,strong)CALayer *topLayer;
/**
 中间视图
 */
@property(nonatomic,strong)UIView *middleView;
/**
 标题
 */
@property(nonatomic,copy)NSString *title;

@property(nullable,nonatomic,weak) id<YHMPPickerSheetViewDataSource> dataSource;                // default is nil. weak reference

@property(nonatomic) NSInteger cancelButtonIndex;

@property(nonatomic) NSInteger confirmButtonIndex;

- (NSInteger)selectedRowInComponent:(NSInteger)component;                                   // returns selected row. -1 if nothing selected

// selection. in this case, it means showing the appropriate row in the middle
- (void)selectRow:(NSInteger)row inComponent:(NSInteger)component;

/**
 通用基础页面，只需要把新增的子view添加到middleview
 
 @param subView subview
 */
-(void)addSubviewToMiddleView:(UIView *)subView;


/**
 点击确定按钮
 */

-(void)confirm;

@end

NS_ASSUME_NONNULL_END

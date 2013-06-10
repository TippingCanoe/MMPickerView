//
//  MMPickerView.h
//  MMPickerView
//
//  Created by Madjid Mahdjoubi on 6/5/13.
//  Copyright (c) 2013 GG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMPickerView : UIView  <UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic, strong) UILabel *pickerViewLabel;
@property (nonatomic, strong) UIView *pickerViewLabelView;
@property (nonatomic, strong) UIView *pickerContainerView; 
@property (nonatomic, strong) UIView *pickerViewContainerView; 
@property (nonatomic, strong) UIView *pickerTopBarView;
@property (nonatomic, strong) UIImageView *pickerTopBarImageView;
@property (nonatomic, strong) UIButton *pickerDoneButton;
@property (nonatomic, strong) UIPickerView *pickerView;
@property (nonatomic, strong) NSArray *pickerViewArray;
@property (nonatomic, strong) NSString *pickerViewChosenString;


+(void)showInView: (UIView *)view
        withArray: (NSArray *)array;

+(void)showInView: (UIView *)view
        withArray: (NSArray *)array
        completion: (void(^)(void))completion;

+(void)dismiss;

+(void)dismissWithCompletion: (void(^)(void))completion;;


+(NSString *)pickerViewChosenString;

@end
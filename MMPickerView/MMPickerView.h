//
//  MMPickerView.h
//  MMPickerView
//
//  Created by Madjid Mahdjoubi on 6/5/13.
//  Copyright (c) 2013 GG. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const MMbackgroundColor;
extern NSString * const MMtextColor;
extern NSString * const MMtoolbarColor;
extern NSString * const MMbuttonColor;
extern NSString * const MMfont;
extern NSString * const MMvalueY;
extern NSString * const MMselectedObject;
extern NSString * const MMtoolbarBackgroundImage;

@interface MMPickerView: UIView

+ (void)showPickerViewInView: (UIView *)view
                 withStrings: (NSArray *)strings
                 withOptions: (NSDictionary *)options
                   selection: (void(^)(id selectedObject))selection
                  completion: (void(^)(id selectedObject))completion
                cancellation: (void(^)(id lastSelectedObject))cancellation;

+ (void)showPickerViewInView: (UIView *)view
                 withObjects: (NSArray *)objects
                 withOptions: (NSDictionary *)options
     objectToStringConverter: (NSString *(^)(id object))converter
                   selection: (void(^)(id selectedObject))selection
                  completion: (void(^)(id selectedObject))completion
                cancellation: (void(^)(id lastSelectedObject))cancellation;


@end

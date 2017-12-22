//
//  SYFavoriteButton.h
//  SYFavoriteButton
//
//  Created by Sunnyyoung on 15/8/27.
//  Copyright (c) 2015年 GeekBean Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SYFavoriteButton : UIButton

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) UIColor *favoredColor;
@property (nonatomic, strong) UIColor *defaultColor;
@property (nonatomic, strong) UIColor *circleColor;
@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, assign) CGFloat duration;

@end

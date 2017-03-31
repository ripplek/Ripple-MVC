//
//  UIView+Frame.h
//  BaseMVC
//
//  Created by 张坤 on 2017/3/23.
//  Copyright © 2017年 zhangkun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

- (CGFloat)left;
- (CGFloat)top;
- (CGFloat)right;
- (CGFloat)bottom;
- (CGFloat)width;
- (CGFloat)height;
- (void)setLeft:(CGFloat)left;
- (void)setTop:(CGFloat)top;
- (void)setRight:(CGFloat)right;
- (void)setBottom:(CGFloat)bottom;
- (void)setWidth:(CGFloat)width;
- (void)setHeight:(CGFloat)height;

@end

//
//  UIButton+ytcChain.h
//  LinkChainUIKit
//
//  Created by mac on 17/8/6.
//  Copyright © 2017年 YTCProuduct. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ytcChainProtocol.h"

#import "ytcChainHeader.h"

@interface UIButton (ytcChain)<ytcChainProtocolDelegate>

#pragma mark ====================== 通用属性

-(UIButton*(^)(float x,float y,float width,float height))tc_FrameValue;

-(UIButton*(^)(CGRect rect))tc_FrameRect;

-(UIButton*(^)(CGRect bounds))tc_Bounds;

-(UIButton*(^)(NSInteger tag))tc_Tag;

-(UIButton*(^)(CGFloat alpha))tc_Alpha;

-(UIButton*(^)(BOOL hidden))tc_Hidden;

-(UIButton*(^)(UIColor *tintColor))tc_TintColor;

-(UIButton*(^)(UIColor *BGColor))tc_BGColor;

-(UIButton*(^)(tcColor color))tc_BGColorEnum;

-(UIButton*(^)(BOOL opaque))tc_Opaque;

-(UIButton*(^)(BOOL userInterFaceEnable))tc_UserInterA;

-(UIButton*(^)(GestureType gesture, id Target, SEL selctor))tc_Gestrure;

-(UIButton*(^)(CGFloat x, CGFloat y))tc_CenterValue;

-(UIButton*(^)(CGPoint center))tc_CenterPoint;

-(UIButton*(^)(CGFloat CornerRadius))tc_CorRadiu;

-(UIButton*(^)(BOOL MaskToBounds))tc_MaskToB;

-(UIButton*(^)(CALayer *mask))tc_Mask;

-(UIButton*(^)(CGAffineTransform transform))tc_Transform;

-(UIButton*(^)(BOOL multipleTouchEnabled))tc_MultiTouch;

-(UIButton*(^)(BOOL clipsToBounds))tc_ClipsBounce;

-(UIButton*(^)(UIViewContentMode contentMode))tc_ContentMode;

-(UIButton*(^)(UIView *maskView))tc_MaskView;


@end
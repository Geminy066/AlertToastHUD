//
//  CQPointHUD.h
//  弹窗哈哈哈
//
//  Created by 蔡强 on 2017/6/7.
//  Copyright © 2017年 kuaijiankang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CQPointHUD : UIView

#pragma mark - 纯文本toast提示
/** 纯文本toast提示 */
+ (void)showToastWithMessage:(NSString *)message;

#pragma mark - 图文toast提示
/** 图文toast提示 */
+ (void)showToastWithMessage:(NSString *)message image:(NSString *)imageName;

#pragma mark - 带block回调的弹窗
/** 带block回调的弹窗 */
+ (void)showAlertWithButtonClickedBlock:(void(^)())buttonClickedBlock;

#pragma mark - 带网络图片与block回调的弹窗
/** 带网络图片与block回调的弹窗 */
+ (void)showAlertWithImageURL:(NSString *)imageURL ButtonClickedBlock:(void(^)())buttonClickedBlock;

#pragma mark - 炫彩弹窗
/**
 兑换成功后展示的弹窗
 
 @param couponName 优惠券名称
 @param validityTime 有效期
 @param checkButtonClickedBlock “查看优惠券”按钮点击后的回调
 */
+ (void)showConversionSucceedAlertWithCouponName:(NSString *)couponName validityTime:(NSString *)validityTime checkCouponButtonClickedBlock:(void(^)())checkButtonClickedBlock;

@end

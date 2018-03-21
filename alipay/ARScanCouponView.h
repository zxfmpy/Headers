//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ARScanCouponModel;

@interface ARScanCouponView : UIView
{
    ARScanCouponModel *_model;
    CDUnknownBlockType _comfirmBlock;
    CDUnknownBlockType _cancelBlock;
}

+ (void)hideAllCouponView;
+ (id)showCouponViewWithModel:(CDUnknownBlockType)arg1 comfirmBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType comfirmBlock; // @synthesize comfirmBlock=_comfirmBlock;
- (void).cxx_destruct;
- (void)dismissView;
- (void)handleGoToPocket;
- (void)handleTapConfirmButton;
- (void)setupContentViewsWithSuperView:(id)arg1;
- (void)setupBaseView;
- (void)dimissButtonWithSuperView:(id)arg1;
- (id)initWithModel:(CDUnknownBlockType)arg1 ComfirmBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;

@end

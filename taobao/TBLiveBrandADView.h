//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, TBLiveADVSItem, UIImageView;

@interface TBLiveBrandADView : UIView
{
    UIImageView *_logoImgView;
    CAShapeLayer *_maskLayer;
    TBLiveADVSItem *_currentItem;
}

@property(retain, nonatomic) TBLiveADVSItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
- (void).cxx_destruct;
- (void)onTap:(id)arg1;
- (void)refreshView;
- (id)initWithADItem:(struct CGRect)arg1 item:(id)arg2;

@end

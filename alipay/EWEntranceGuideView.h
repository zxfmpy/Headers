//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EWPopoverView.h"

@class UIButton, UIImageView;

@interface EWEntranceGuideView : EWPopoverView
{
    UIImageView *_backgroundImageView;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)show;
- (void)hide;
- (void)addView;
- (double)popViewHeight;
- (double)popViewWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end


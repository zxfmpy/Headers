//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKSpockSlideLockView, _TtC9MBKBaseUI15RoundShadowView;

@interface MBKSpockLockButton : UIView
{
    CDUnknownBlockType _buttonAction;
    CDUnknownBlockType _tapDisableStateAction;
    _TtC9MBKBaseUI15RoundShadowView *_contentView;
    MBKSpockSlideLockView *_sliderView;
    UIView *_cannotLockView;
}

@property(retain, nonatomic) UIView *cannotLockView; // @synthesize cannotLockView=_cannotLockView;
@property(retain, nonatomic) MBKSpockSlideLockView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) _TtC9MBKBaseUI15RoundShadowView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType tapDisableStateAction; // @synthesize tapDisableStateAction=_tapDisableStateAction;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
- (void).cxx_destruct;
- (void)resetSlider;
- (void)setToCannotLockMode:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


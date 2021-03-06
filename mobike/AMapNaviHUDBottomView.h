//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UISwitch;
@protocol AMapNaviHUDBottomViewDelegate;

@interface AMapNaviHUDBottomView : UIView
{
    _Bool _isMirror;
    id <AMapNaviHUDBottomViewDelegate> _delegate;
    UIButton *_backButton;
    UILabel *_switchLabel;
    UISwitch *_mirrorSwitch;
}

@property(retain, nonatomic) UISwitch *mirrorSwitch; // @synthesize mirrorSwitch=_mirrorSwitch;
@property(retain, nonatomic) UILabel *switchLabel; // @synthesize switchLabel=_switchLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool isMirror; // @synthesize isMirror=_isMirror;
@property(nonatomic) id <AMapNaviHUDBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchButtonAction:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)updateConstraints;
- (void)buildHUDBottomView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


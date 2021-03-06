//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class DrawerRichStateView, NMAsynUrlImageView, QQAvatarView, QQTaskEntryModel, UIAccessibilityElement, UIControl, UIImageView, UILabel, UIView;

@interface DrawerMyInfoView : UIButton
{
    UIButton *_nick;
    UIButton *_level;
    UIImageView *_vip;
    UIView *_headBg;
    QQAvatarView *_headView;
    UIButton *_imageQR;
    UIControl *_panel;
    UIControl *_signHolderView;
    NMAsynUrlImageView *_signInIconImgView;
    UIImageView *_signInHintImgView;
    UILabel *_signWordLabel;
    UIImageView *_gameIconImageView;
    QQTaskEntryModel *_taskEntryModel;
    DrawerRichStateView *_richState;
    UIAccessibilityElement *_helperElement;
}

@property(retain, nonatomic) UIAccessibilityElement *helperElement; // @synthesize helperElement=_helperElement;
@property(retain, nonatomic) DrawerRichStateView *richState; // @synthesize richState=_richState;
- (void).cxx_destruct;
- (void)handleThemeChangeNotification;
- (void)onAppBecomeActive;
- (void)handleGetSignInInfoNotification;
- (void)showSignInHit:(_Bool)arg1;
- (void)touchesCancle:(id)arg1;
- (void)touchesDown:(id)arg1;
- (void)goToSignInPage:(id)arg1;
- (void)goToTaskPage:(id)arg1;
- (void)switchSignInOrTask:(id)arg1;
- (double)nickLabelMaxWidthWithLeft:(double)arg1;
- (double)nickLabelLeft;
- (void)hideInfoHint;
- (void)showInfoHint;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)showMyQR:(id)arg1;
- (void)goUserSummary:(id)arg1;
- (void)animateAvatarPendant;
- (void)refreshContents;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)reloadAppearance;
- (void)reLayoutSubViews;
- (void)layoutSubviews;
- (void)refreshTaskRedDot;
- (void)initTaskView;
- (void)initSignView;
- (void)initEntryView;
- (id)initWithFrame:(struct CGRect)arg1;

@end


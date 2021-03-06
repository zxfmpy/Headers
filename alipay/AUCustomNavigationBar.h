//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UIViewController;

@interface AUCustomNavigationBar : UIView
{
    id _target;
    SEL _action;
    id _leftItemtarget;
    SEL _leftItemaction;
    UIView *_backgroundView;
    NSString *_backButtonTitle;
    UIColor *_backButtonTitleColor;
    UIImage *_backButtonImage;
    NSString *_title;
    UIColor *_titleColor;
    UIView *_titleView;
    NSString *_rightItemTitle;
    UIColor *_rightItemTitleColor;
    UIImage *_rightItemImage;
    NSString *_rightItemVoiceOverText;
    UIImageView *_backImageView;
    UILabel *_backTitleLabel;
    UIButton *_leftItem;
    UILabel *_titleLabel;
    UIButton *_rightItem;
    UIViewController *_currentVC;
}

+ (id)navigationBarForCurrentVC:(id)arg1;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) UIButton *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *leftItem; // @synthesize leftItem=_leftItem;
@property(retain, nonatomic) UILabel *backTitleLabel; // @synthesize backTitleLabel=_backTitleLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) NSString *rightItemVoiceOverText; // @synthesize rightItemVoiceOverText=_rightItemVoiceOverText;
@property(retain, nonatomic) UIImage *rightItemImage; // @synthesize rightItemImage=_rightItemImage;
@property(retain, nonatomic) UIColor *rightItemTitleColor; // @synthesize rightItemTitleColor=_rightItemTitleColor;
@property(retain, nonatomic) NSString *rightItemTitle; // @synthesize rightItemTitle=_rightItemTitle;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *backButtonImage; // @synthesize backButtonImage=_backButtonImage;
@property(retain, nonatomic) UIColor *backButtonTitleColor; // @synthesize backButtonTitleColor=_backButtonTitleColor;
@property(retain, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *leftItemVoiceOverText;
- (void)setNavigationBarBlurEffective;
- (void)setNavigationBarRightItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setNavigationBarRightItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setNavigationBarLeftItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setNavigationBarLeftItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)onClickedLeftItem:(id)arg1;
- (void)onClicked:(id)arg1;
- (void)onCancelClicked:(id)arg1;
- (void)onWillClicked:(id)arg1;
- (void)back;
- (id)initWithFrame:(struct CGRect)arg1 currentVC:(id)arg2;
- (_Bool)aui_isKindOfClass:(Class)arg1;

@end


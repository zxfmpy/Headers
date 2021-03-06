//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIBaseRichViewController.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class CAShapeLayer, CFT_UIMoneyPickerView, NSArray, NSMutableArray, NSMutableDictionary, NSString, SFImageView, UIButton, UIImageView, UILabel;

@interface CFT_UIThemeRedGiftViewController : CFT_UIBaseRichViewController <UIScrollViewDelegate>
{
    _Bool _isClosing;
    UILabel *_wishingLabel;
    UIButton *_ChangeButton;
    UIImageView *_changeImageView;
    CFT_UIMoneyPickerView *_moneyPicker;
    UIImageView *_footerImageView;
    int _money_index;
    long long _totalAmount;
    UILabel *_moneyLabel;
    UILabel *_yuanLabel;
    NSMutableArray *arrayWishSeq;
    CAShapeLayer *_tcircleLayer;
    UILabel *_groupSendRedNum;
    int _groupTotalAmount;
    NSMutableDictionary *_RedGiftparam;
    NSString *_comefrom;
    NSString *_uin;
    NSString *_skey;
    NSString *_skey_type;
    NSString *_appinfo;
    NSString *_nick;
    NSString *_theme_type;
    unsigned long long _themeResourceType;
    NSString *_recvType;
    NSString *_wishingText;
    NSArray *_moneyArray;
    NSArray *_wishArray;
    NSArray *_groupRedCountArray;
    NSString *_themeImgUrl;
    SFImageView *_sfBackgroundImageView;
}

@property(retain, nonatomic) SFImageView *sfBackgroundImageView; // @synthesize sfBackgroundImageView=_sfBackgroundImageView;
@property(copy, nonatomic) NSString *themeImgUrl; // @synthesize themeImgUrl=_themeImgUrl;
@property(retain, nonatomic) NSArray *groupRedCountArray; // @synthesize groupRedCountArray=_groupRedCountArray;
@property(retain, nonatomic) NSArray *wishArray; // @synthesize wishArray=_wishArray;
@property(retain, nonatomic) NSArray *moneyArray; // @synthesize moneyArray=_moneyArray;
@property(retain, nonatomic) NSString *wishingText; // @synthesize wishingText=_wishingText;
@property(retain, nonatomic) NSString *recvType; // @synthesize recvType=_recvType;
@property(nonatomic) unsigned long long themeResourceType; // @synthesize themeResourceType=_themeResourceType;
@property(retain, nonatomic) NSString *theme_type; // @synthesize theme_type=_theme_type;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *appinfo; // @synthesize appinfo=_appinfo;
@property(retain, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
@property(retain, nonatomic) NSMutableDictionary *RedGiftparam; // @synthesize RedGiftparam=_RedGiftparam;
- (void)qpay_hb_pack;
- (void)qpay_hb_group_pack;
- (void)nextStep:(id)arg1;
- (void)changeGourpRedCount:(id)arg1;
- (void)changeWish:(id)arg1;
- (void)showMoneylabel:(_Bool)arg1;
- (void)setNextButtonTitle:(int)arg1;
- (void)ChangeButtonClick:(id)arg1;
- (void)ChangeButtonPress:(id)arg1;
- (void)ChangeButtonPressLeave:(id)arg1;
- (void)onBackgroundTapped;
- (void)closeButtonClick:(id)arg1;
- (void)sfImageView:(id)arg1 didAnimationStarted:(_Bool)arg2 error:(id)arg3;
- (void)_reloadSFBackgroudImage:(id)arg1 error:(id)arg2 playAnimation:(_Bool)arg3;
- (void)_loadSFBackgroundImageViewIfNeed;
- (void)_loadBackgroundImageViewImage;
- (void)layoutSubviewsOnView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)arcShapeLayer:(double)arg1;
- (void)addCloseButton;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


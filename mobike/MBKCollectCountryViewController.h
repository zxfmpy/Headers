//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKRegisterViewController.h"

@class MBKCollectCountryScrollView, NSMutableArray, UIButton, UILabel;

@interface MBKCollectCountryViewController : MBKRegisterViewController
{
    NSMutableArray *_supportedCountriesArray;
    CDUnknownBlockType _collectCountryResultBlock;
    UILabel *_messageLabel;
    UILabel *_tipLabel;
    MBKCollectCountryScrollView *_countryScrollView;
    UIButton *_confirmButton;
    long long _selectedCountryID;
}

+ (void)load;
@property(nonatomic) long long selectedCountryID; // @synthesize selectedCountryID=_selectedCountryID;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MBKCollectCountryScrollView *countryScrollView; // @synthesize countryScrollView=_countryScrollView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) CDUnknownBlockType collectCountryResultBlock; // @synthesize collectCountryResultBlock=_collectCountryResultBlock;
- (void).cxx_destruct;
- (void)updateConfirmButtonState;
- (void)realNameWithProgress:(long long)arg1;
- (void)confirmButtonClicked:(id)arg1;
@property(retain, nonatomic) NSMutableArray *supportedCountriesArray; // @synthesize supportedCountriesArray=_supportedCountriesArray;
- (void)startRequest;
- (void)setupView;
- (void)viewDidLoad;
- (void)addBackButtonWithImage:(id)arg1;
- (_Bool)shouldHideNavigationBarShadow;

@end


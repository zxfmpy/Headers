//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ExploreActionButton, ExploreOrderedData, NSString, SSThemedLabel, TTImageView, UIView;
@protocol TTPlayerControlView;

@interface TTMoviePlayerControlFinishAdAction : NSObject
{
    _Bool _isAd;
    _Bool _isIndetail;
    TTImageView *_logoImageView;
    SSThemedLabel *_titleLabel;
    ExploreActionButton *_actionBtn;
    UIView<TTPlayerControlView> *_baseView;
    UIView *_backView;
    NSString *_title;
    NSString *_imageURL;
    NSString *_openURL;
    ExploreOrderedData *_data;
}

@property(retain, nonatomic) ExploreOrderedData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UIView<TTPlayerControlView> *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) _Bool isIndetail; // @synthesize isIndetail=_isIndetail;
@property(readonly, nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(retain, nonatomic) ExploreActionButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (id)placeholderView;
- (void)sendTrackEvent:(id)arg1 label:(id)arg2;
- (void)logoImageViewTapped:(id)arg1;
- (void)listenCall:(id)arg1;
- (void)showForm:(id)arg1;
- (void)actionBtnClicked:(id)arg1;
- (void)refreshSubView:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithBaseView:(id)arg1;

@end


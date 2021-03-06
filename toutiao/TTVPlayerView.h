//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVPlayerContext-Protocol.h"

@class NSString, TTVPlayerStateStore;
@protocol TTVPlayerControlTipView><TTVPlayerContext, TTVPlayerViewControlView><TTVPlayerContext, TTVPlayerViewTrafficView><TTVPlayerContext, TTVViewLayout;

@interface TTVPlayerView : UIView <TTVPlayerContext>
{
    UIView *_playerLayer;
    TTVPlayerStateStore *_playerStateStore;
    UIView *_logoImageView;
    UIView *_snapView;
    UIView *_waveView;
    UIView *_backgroundView;
    UIView<TTVViewLayout> *_changeResolutionView;
    UIView<TTVViewLayout> *_changeResolutionAlertView;
    UIView<TTVPlayerViewControlView><TTVPlayerContext> *_controlView;
    UIView<TTVPlayerViewTrafficView><TTVPlayerContext> *_trafficView;
    UIView<TTVPlayerControlTipView><TTVPlayerContext> *_tipView;
}

@property(nonatomic) __weak UIView<TTVPlayerControlTipView><TTVPlayerContext> *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) __weak UIView<TTVPlayerViewTrafficView><TTVPlayerContext> *trafficView; // @synthesize trafficView=_trafficView;
@property(nonatomic) __weak UIView<TTVPlayerViewControlView><TTVPlayerContext> *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) __weak UIView<TTVViewLayout> *changeResolutionAlertView; // @synthesize changeResolutionAlertView=_changeResolutionAlertView;
@property(nonatomic) __weak UIView<TTVViewLayout> *changeResolutionView; // @synthesize changeResolutionView=_changeResolutionView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIView *waveView; // @synthesize waveView=_waveView;
@property(retain, nonatomic) UIView *snapView; // @synthesize snapView=_snapView;
@property(retain, nonatomic) UIView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(nonatomic) __weak UIView *playerLayer; // @synthesize playerLayer=_playerLayer;
- (void).cxx_destruct;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)ttv_kvo;
- (void)layoutSubviews;
- (void)reorderViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


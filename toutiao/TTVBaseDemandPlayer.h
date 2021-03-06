//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVPlayerControlViewDelegate-Protocol.h"
#import "TTVPlayerControllerDataSource-Protocol.h"
#import "TTVPlayerControllerDelegate-Protocol.h"

@class NSHashTable, NSMutableArray, NSObject, NSString, TTVBasePlayerModel, TTVDemandPlayerContext, TTVDemanderTrackerManager, TTVPlayerBackgroundManager, TTVPlayerControlTipView, TTVPlayerController, TTVPlayerStateStore, TTVPlayerView;
@protocol TTVBaseDemandPlayerDelegate, TTVPlayerControlBottomView><TTVPlayerContext, TTVPlayerTipCreator, TTVPlayerViewControlView><TTVPlayerContext;

@interface TTVBaseDemandPlayer : UIView <TTVPlayerControllerDataSource, TTVPlayerControlViewDelegate, TTVPlayerControllerDelegate>
{
    TTVBasePlayerModel *_playerModel;
    TTVDemanderTrackerManager *_commonTracker;
    id <TTVPlayerTipCreator> _tipCreator;
    UIView<TTVPlayerControlBottomView><TTVPlayerContext> *_bottomBarView;
    UIView<TTVPlayerViewControlView><TTVPlayerContext> *_controlView;
    NSObject<TTVBaseDemandPlayerDelegate> *_delegate;
    TTVDemandPlayerContext *_context;
    UIView *_rotateView;
    TTVPlayerController *_playerController;
    TTVPlayerControlTipView *_tipView;
    TTVPlayerStateStore *_playerStateStore;
    long long _currentResolution;
    NSHashTable *_delegates;
    NSHashTable *_map;
    TTVPlayerView *_playerView;
    TTVPlayerBackgroundManager *_backgroundManager;
    NSMutableArray *_parts;
}

@property(retain, nonatomic) NSMutableArray *parts; // @synthesize parts=_parts;
@property(retain, nonatomic) TTVPlayerBackgroundManager *backgroundManager; // @synthesize backgroundManager=_backgroundManager;
@property(retain, nonatomic) TTVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSHashTable *map; // @synthesize map=_map;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) long long currentResolution; // @synthesize currentResolution=_currentResolution;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(retain, nonatomic) TTVPlayerControlTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) TTVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak UIView *rotateView; // @synthesize rotateView=_rotateView;
@property(retain, nonatomic) TTVDemandPlayerContext *context; // @synthesize context=_context;
@property(nonatomic) __weak NSObject<TTVBaseDemandPlayerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView<TTVPlayerViewControlView><TTVPlayerContext> *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIView<TTVPlayerControlBottomView><TTVPlayerContext> *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) id <TTVPlayerTipCreator> tipCreator; // @synthesize tipCreator=_tipCreator;
@property(retain, nonatomic) TTVDemanderTrackerManager *commonTracker; // @synthesize commonTracker=_commonTracker;
@property(retain, nonatomic) TTVBasePlayerModel *playerModel; // @synthesize playerModel=_playerModel;
- (void).cxx_destruct;
- (void)sendAction:(unsigned long long)arg1 payload:(id)arg2;
- (void)enterFullScreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exitFullScreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)controlViewPlayerMoreButtonClicked:(id)arg1;
- (void)controlViewPlayerShareButtonClicked:(id)arg1;
- (void)controlView:(id)arg1 seekProgress:(double)arg2 complete:(CDUnknownBlockType)arg3;
- (void)controlViewBackButtonClicked:(id)arg1;
- (void)controlViewFullScreenButtonClicked:(id)arg1 isFull:(_Bool)arg2;
- (void)controlViewPlayButtonClicked:(id)arg1 isPlay:(_Bool)arg2;
- (struct CGRect)ttv_movieViewFrameAfterExitFullscreen;
- (_Bool)shouldAutoRotate;
- (void)seekVideoToProgress:(double)arg1 complete:(CDUnknownBlockType)arg2;
- (id)videoPlayerTipView;
- (id)videoPlayerTrafficView;
- (id)videoPlayerControlView;
- (void)removeMiniSliderView;
- (void)setLogoImageView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)pauseWithPayload:(id)arg1;
- (void)playWithPayload:(id)arg1;
- (void)pause;
- (void)play;
- (void)stop;
- (void)registerTracker:(id)arg1;
- (void)layoutSubviews;
- (void)setVideoWatchCount:(long long)arg1 playText:(id)arg2;
- (void)setVideoTitle:(id)arg1;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (_Bool)shouldReactToPlay;
- (void)ttv_addPlayerStateStore;
- (void)reset;
- (void)ttv_addPlayerTracker;
- (void)ttv_addTipView;
- (void)ttv_kvo;
- (void)registerPart:(id)arg1;
- (void)ttv_addPlayerController;
- (void)createTipViewSubViews;
- (void)runOnMainThread:(CDUnknownBlockType)arg1;
- (void)addBackgroundManager;
- (void)configureParts;
- (void)readyToPlay;
- (void)registerDelegate:(id)arg1;
- (void)unregisterDelegate:(id)arg1;
- (void)releaseAysnc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setEnableRotate:(_Bool)arg1;
- (void)setBannerHeight:(float)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setIsInDetail:(_Bool)arg1;
- (void)setShowTitleInNonFullscreen:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


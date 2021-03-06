//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiveRoomBaseView.h"

#import "HTSLivePushMessageViewDelegate-Protocol.h"
#import "LiveCommentViewDelegate-Protocol.h"

@class HTSCocosSource, HTSLiveAnimationEngine, HTSLiveMessageQueue, HTSLiveRankButton, HTSLiveRoomGiftView, HTSLiveRoomStore, LiveCommentView, LiveFanPiaoView, LiveMessageListView, LiveRoomBannerResponseModel, LiveUserProfileView, NSMutableSet, NSNumber, NSString, UIButton, UILabel;

@interface LiveRoomInteractionView : LiveRoomBaseView <LiveCommentViewDelegate, HTSLivePushMessageViewDelegate>
{
    LiveRoomBannerResponseModel *_topBbannerModel;
    LiveRoomBannerResponseModel *_bottomBannerModel;
    UILabel *_watermark;
    UIButton *_topActivityEntrance;
    UIButton *_bottomActivityEntrance;
    NSMutableSet *_observerSet;
    HTSLiveMessageQueue *_pushMessageQueue;
    HTSLiveMessageQueue *_redEnvelopeQueue;
    HTSLiveMessageQueue *_roomNotifyQueue;
    _Bool _needKickOut;
    _Bool _isForbidden;
    HTSLiveRoomStore *_roomStore;
    HTSLiveRankButton *_rankButton;
    LiveCommentView *_commentView;
    LiveMessageListView *_messageListView;
    UIButton *_diggBtn;
    NSNumber *_fanPiaoCount;
    HTSLiveRoomGiftView *_liveRoomGiftView;
    LiveFanPiaoView *_liveFanPiaoView;
    UIButton *_commentBtn;
    LiveUserProfileView *_liveUserProfileView;
    HTSLiveAnimationEngine *_animationEngine;
    HTSCocosSource *_cocosSource;
}

+ (id)pr_watermarkGradientLayer;
@property(retain, nonatomic) HTSCocosSource *cocosSource; // @synthesize cocosSource=_cocosSource;
@property(retain, nonatomic) HTSLiveAnimationEngine *animationEngine; // @synthesize animationEngine=_animationEngine;
@property(retain, nonatomic) LiveUserProfileView *liveUserProfileView; // @synthesize liveUserProfileView=_liveUserProfileView;
@property(nonatomic) __weak UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(nonatomic) __weak LiveFanPiaoView *liveFanPiaoView; // @synthesize liveFanPiaoView=_liveFanPiaoView;
@property(nonatomic) __weak HTSLiveRoomGiftView *liveRoomGiftView; // @synthesize liveRoomGiftView=_liveRoomGiftView;
@property(nonatomic) _Bool isForbidden; // @synthesize isForbidden=_isForbidden;
@property(retain, nonatomic) NSNumber *fanPiaoCount; // @synthesize fanPiaoCount=_fanPiaoCount;
@property(nonatomic) __weak UIButton *diggBtn; // @synthesize diggBtn=_diggBtn;
@property(readonly, nonatomic) LiveMessageListView *messageListView; // @synthesize messageListView=_messageListView;
@property(readonly, nonatomic) __weak LiveCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) HTSLiveRankButton *rankButton; // @synthesize rankButton=_rankButton;
@property(retain, nonatomic) HTSLiveRoomStore *roomStore; // @synthesize roomStore=_roomStore;
- (void).cxx_destruct;
- (void)shouldGoNewLiveRoomFromRankWithRoomID:(id)arg1;
- (void)shouldShowUserProfileFromRankWithModel:(id)arg1 withType:(unsigned long long)arg2;
- (void)showRankList;
- (void)animationChange:(id)arg1;
- (void)showGiftView;
- (void)didtouchRoomNotifyViewWithRoomNotifyMessage:(id)arg1;
- (void)comment;
- (void)diggClick:(id)arg1;
- (void)__refresh;
- (void)pushMessageView:(id)arg1 didClickWithPushMessage:(id)arg2;
- (void)sendBarrage:(id)arg1 comment:(id)arg2;
- (void)sendComment:(id)arg1 comment:(id)arg2;
- (void)pr_handleRankMessage:(id)arg1;
- (void)pr_enter:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)dataWithScreenshotInPNGFormat;
- (void)pr_userDidTakeScreenshot:(id)arg1;
- (void)renderRankAnimation:(id)arg1 sourceQueue:(id)arg2;
- (void)refreshUserInfo;
- (void)showToolView:(_Bool)arg1;
- (void)stop;
- (void)roomWillAppear:(_Bool)arg1;
- (void)didReceiveMessage:(id)arg1;
@property(readonly, nonatomic) _Bool textFieldIsFirstResponder;
- (void)refreshLiveRoomModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 liveRoomModel:(id)arg2;
- (void)dealloc;
- (void)receiveGestureGiftMessage:(id)arg1;
- (void)kickOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DWContainerViewController.h"

#import "DWActorProtocol-Protocol.h"
#import "DWDanmakuDelelgate-Protocol.h"
#import "DWDanmakuRendererDelegate-Protocol.h"
#import "TBSVideoBackCoverViewDelegate-Protocol.h"
#import "TBSVideoInteractiveViewHelperDelegate-Protocol.h"
#import "TBSVideoMenuActionProtocol-Protocol.h"
#import "TBSVideoUserViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DWBackCoverView, DWCollectLogoView, DWContext, DWDanmakuDataLoader, DWDanmakuRender, DWFloatingWindow, DWGoodListView, DWInteractiveViewController, DWPlayer, DWVideoModel, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, TBMPBPlayerView, TBSVideoBackCoverView, TBSVideoInteractiveViewHelper, TBSVideoUserInfoData, TBSVideoUserView, TBSViewShowContext, UIButton, UIImageView, UILabel, UITextField, UIView;
@protocol DWContainerProtocal, DWInteractiveProtocol, TBIctAddWeexCallbackProtocol;

@interface DWContainer : DWContainerViewController <TBSVideoUserViewDelegate, TBSVideoBackCoverViewDelegate, TBSVideoInteractiveViewHelperDelegate, TBSVideoMenuActionProtocol, DWDanmakuRendererDelegate, DWDanmakuDelelgate, UITextFieldDelegate, DWActorProtocol>
{
    _Bool _videoPrepared;
    _Bool _shouldBackCoverViewWhenComplete;
    _Bool _muted;
    _Bool _showInteractiveTipsView;
    _Bool _rightMixBtnHidden;
    _Bool _videoComplete;
    _Bool _showLikeBtn;
    _Bool _showGoodsListBtn;
    _Bool _showReportBtn;
    _Bool _showDanmakuBtn;
    _Bool _shouldUseNewBackCoverViewWhenComplete;
    _Bool _wrapViewCanAnimated;
    _Bool _shouldHideAllInteractive;
    _Bool _collectLogoToast;
    _Bool _appearResumePlay;
    _Bool _statusBarHidden;
    _Bool _haveLoadDanmakuTimeProfile;
    _Bool _landspaceForDelay;
    _Bool _delayTransitionScreen;
    _Bool _isGoodListShow;
    _Bool _lastDanmakuStatus;
    NSObject *director;
    DWGoodListView *_normalGoodList;
    DWGoodListView *_fullScreenGoodList;
    DWGoodListView *_portraitFullScreenGoodList;
    DWContext *_context;
    id <DWContainerProtocal> _delegate;
    double _currentTime;
    UIView *_dwContainterSuperView;
    DWVideoModel *_videoModel;
    long long _preViewMode;
    long long _viewMode;
    id <DWInteractiveProtocol> _interactiveDelegate;
    id <TBIctAddWeexCallbackProtocol> _addWeexCallbackDelegate;
    NSArray *_cmpFrameData;
    NSDictionary *_videoLogoData;
    NSMutableDictionary *_interativeTypePortraitViewMapper;
    NSMutableDictionary *_interativeTypeLandscapeViewMapper;
    DWCollectLogoView *_collectLogoView;
    DWBackCoverView *_landscapeBackView;
    DWBackCoverView *_portraitBackView;
    UIButton *_goShopBtn;
    UIButton *_followBtn;
    UILabel *_titleLable;
    NSString *_shopURL;
    NSString *_userName;
    UIImageView *_interactiveTipsView;
    NSMutableArray *_curTimeLineModels;
    long long _currentTrackerIndex;
    DWPlayer *_player;
    TBMPBPlayerView *_videoView;
    DWInteractiveViewController *_interactiveVC;
    DWDanmakuRender *_danmakuRender;
    DWDanmakuDataLoader *_danmakuLoader;
    NSMutableDictionary *_danmakuTimeDic;
    NSMutableArray *_coverViews;
    TBSViewShowContext *_fullContext;
    TBSVideoBackCoverView *_fullBackView;
    TBSVideoUserView *_userView;
    TBSVideoUserInfoData *_userInfo;
    TBSVideoInteractiveViewHelper *_interactiveViewHelper;
    UIButton *_muteButton;
    UITextField *_inputView;
    UIView *_inputCoverView;
    long long _orientation;
    DWFloatingWindow *_floatingWindow;
    UIImageView *_videoLogoImageView;
    struct CGRect _portraitFrame;
    struct CGRect _anchorOldFrame;
    struct CGRect _originFrame;
    struct CGRect _originPlayerFrame;
}

@property(retain, nonatomic) UIImageView *videoLogoImageView; // @synthesize videoLogoImageView=_videoLogoImageView;
@property(retain, nonatomic) DWFloatingWindow *floatingWindow; // @synthesize floatingWindow=_floatingWindow;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIView *inputCoverView; // @synthesize inputCoverView=_inputCoverView;
@property(retain, nonatomic) UITextField *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool lastDanmakuStatus; // @synthesize lastDanmakuStatus=_lastDanmakuStatus;
@property(nonatomic) struct CGRect originPlayerFrame; // @synthesize originPlayerFrame=_originPlayerFrame;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool isGoodListShow; // @synthesize isGoodListShow=_isGoodListShow;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) TBSVideoInteractiveViewHelper *interactiveViewHelper; // @synthesize interactiveViewHelper=_interactiveViewHelper;
@property(retain, nonatomic) TBSVideoUserInfoData *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) TBSVideoUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) TBSVideoBackCoverView *fullBackView; // @synthesize fullBackView=_fullBackView;
@property(retain, nonatomic) TBSViewShowContext *fullContext; // @synthesize fullContext=_fullContext;
@property(retain, nonatomic) NSMutableArray *coverViews; // @synthesize coverViews=_coverViews;
@property(nonatomic) _Bool delayTransitionScreen; // @synthesize delayTransitionScreen=_delayTransitionScreen;
@property(nonatomic) _Bool landspaceForDelay; // @synthesize landspaceForDelay=_landspaceForDelay;
@property(retain, nonatomic) NSMutableDictionary *danmakuTimeDic; // @synthesize danmakuTimeDic=_danmakuTimeDic;
@property(nonatomic) _Bool haveLoadDanmakuTimeProfile; // @synthesize haveLoadDanmakuTimeProfile=_haveLoadDanmakuTimeProfile;
@property(retain, nonatomic) DWDanmakuDataLoader *danmakuLoader; // @synthesize danmakuLoader=_danmakuLoader;
@property(retain, nonatomic) DWDanmakuRender *danmakuRender; // @synthesize danmakuRender=_danmakuRender;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) DWInteractiveViewController *interactiveVC; // @synthesize interactiveVC=_interactiveVC;
@property(retain, nonatomic) TBMPBPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) DWPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long currentTrackerIndex; // @synthesize currentTrackerIndex=_currentTrackerIndex;
@property(nonatomic) struct CGRect anchorOldFrame; // @synthesize anchorOldFrame=_anchorOldFrame;
@property(retain, nonatomic) NSMutableArray *curTimeLineModels; // @synthesize curTimeLineModels=_curTimeLineModels;
@property(nonatomic) _Bool appearResumePlay; // @synthesize appearResumePlay=_appearResumePlay;
@property(retain, nonatomic) UIImageView *interactiveTipsView; // @synthesize interactiveTipsView=_interactiveTipsView;
@property(nonatomic) _Bool collectLogoToast; // @synthesize collectLogoToast=_collectLogoToast;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *shopURL; // @synthesize shopURL=_shopURL;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIButton *goShopBtn; // @synthesize goShopBtn=_goShopBtn;
@property(retain, nonatomic) DWBackCoverView *portraitBackView; // @synthesize portraitBackView=_portraitBackView;
@property(retain, nonatomic) DWBackCoverView *landscapeBackView; // @synthesize landscapeBackView=_landscapeBackView;
@property(retain, nonatomic) DWCollectLogoView *collectLogoView; // @synthesize collectLogoView=_collectLogoView;
@property(nonatomic) _Bool shouldHideAllInteractive; // @synthesize shouldHideAllInteractive=_shouldHideAllInteractive;
@property(nonatomic) _Bool wrapViewCanAnimated; // @synthesize wrapViewCanAnimated=_wrapViewCanAnimated;
@property(retain, nonatomic) NSMutableDictionary *interativeTypeLandscapeViewMapper; // @synthesize interativeTypeLandscapeViewMapper=_interativeTypeLandscapeViewMapper;
@property(retain, nonatomic) NSMutableDictionary *interativeTypePortraitViewMapper; // @synthesize interativeTypePortraitViewMapper=_interativeTypePortraitViewMapper;
@property(retain, nonatomic) NSDictionary *videoLogoData; // @synthesize videoLogoData=_videoLogoData;
@property(retain, nonatomic) NSArray *cmpFrameData; // @synthesize cmpFrameData=_cmpFrameData;
@property(nonatomic) __weak id <TBIctAddWeexCallbackProtocol> addWeexCallbackDelegate; // @synthesize addWeexCallbackDelegate=_addWeexCallbackDelegate;
@property(nonatomic) __weak id <DWInteractiveProtocol> interactiveDelegate; // @synthesize interactiveDelegate=_interactiveDelegate;
@property(nonatomic) _Bool shouldUseNewBackCoverViewWhenComplete; // @synthesize shouldUseNewBackCoverViewWhenComplete=_shouldUseNewBackCoverViewWhenComplete;
@property(nonatomic) _Bool showDanmakuBtn; // @synthesize showDanmakuBtn=_showDanmakuBtn;
@property(nonatomic) _Bool showReportBtn; // @synthesize showReportBtn=_showReportBtn;
@property(nonatomic) _Bool showGoodsListBtn; // @synthesize showGoodsListBtn=_showGoodsListBtn;
@property(nonatomic) _Bool showLikeBtn; // @synthesize showLikeBtn=_showLikeBtn;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) long long preViewMode; // @synthesize preViewMode=_preViewMode;
@property(retain, nonatomic) DWVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) _Bool videoComplete; // @synthesize videoComplete=_videoComplete;
@property(nonatomic) _Bool rightMixBtnHidden; // @synthesize rightMixBtnHidden=_rightMixBtnHidden;
@property(nonatomic) _Bool showInteractiveTipsView; // @synthesize showInteractiveTipsView=_showInteractiveTipsView;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool shouldBackCoverViewWhenComplete; // @synthesize shouldBackCoverViewWhenComplete=_shouldBackCoverViewWhenComplete;
@property(nonatomic) _Bool videoPrepared; // @synthesize videoPrepared=_videoPrepared;
@property(nonatomic) __weak UIView *dwContainterSuperView; // @synthesize dwContainterSuperView=_dwContainterSuperView;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) struct CGRect portraitFrame; // @synthesize portraitFrame=_portraitFrame;
@property(nonatomic) __weak id <DWContainerProtocal> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DWContext *context; // @synthesize context=_context;
@property(nonatomic) __weak DWGoodListView *portraitFullScreenGoodList; // @synthesize portraitFullScreenGoodList=_portraitFullScreenGoodList;
@property(nonatomic) __weak DWGoodListView *fullScreenGoodList; // @synthesize fullScreenGoodList=_fullScreenGoodList;
@property(nonatomic) __weak DWGoodListView *normalGoodList; // @synthesize normalGoodList=_normalGoodList;
@property(nonatomic) __weak NSObject *director; // @synthesize director;
- (void).cxx_destruct;
- (void)reportAction;
- (id)utDataForFullScreenClick;
- (void)handleLikedOperation:(id)arg1;
- (id)likeBtnClicked:(id)arg1;
- (void)goAttentionBtn:(id)arg1;
- (void)closeBtnClicked;
- (void)addCart:(id)arg1;
- (void)goShopItemBtmClickedFrom:(id)arg1;
- (void)goItemFromNewList:(id)arg1;
- (void)hideNewGoodListView;
- (void)showGoodListFrom:(id)arg1;
- (void)replayBtnClicked;
- (void)hidePortraitBackView;
- (void)showPortraitBackView;
- (void)hideLandscapeBackView;
- (void)showLandscapeBackView;
- (void)hideBackCoverView;
- (void)onDelayShareFrom:(id)arg1;
- (void)shareBtnClickedFrom:(id)arg1;
- (void)reportVideo:(id)arg1;
- (void)goshopBtnClicked:(id)arg1 from:(id)arg2;
- (void)onClickedMuteButton:(id)arg1;
- (void)setMuteButtonStatus:(_Bool)arg1;
- (void)updateMuteButton:(_Bool)arg1;
- (void)updateUserView;
- (void)updateBackCoverViewLayout;
- (void)updateBackCoverView;
- (void)updateInteractiveButtonsView;
- (void)adjustSubViews;
- (void)showViewsWhenPlayerControllerShow;
- (void)hideViewsWhenPlayerControllerHide;
- (_Bool)haveUserInfo;
- (void)setFullScreenInfo:(id)arg1;
- (void)updateLikeButton;
- (void)hideNewInteractiveView;
- (void)removeCoverView:(id)arg1;
- (void)addCoverView:(id)arg1;
- (void)tapInputCoverViewAction;
- (void)hideInputBar;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)keyBoardWillHide:(id)arg1;
- (void)keyBoardWillShow:(id)arg1;
- (void)handleDeviceOrientationDidChange:(long long)arg1;
- (void)addNoticeForKeyboard;
- (void)showInputBar;
- (void)sendDanmakuBtnClicked;
- (void)handleWeexSendDanma:(CDUnknownBlockType)arg1;
- (void)hideDanmakuView;
- (void)showDanmakuView;
- (_Bool)getSendDanmaStatus;
- (void)setSendDanmaStatus:(_Bool)arg1;
- (void)sendDanmakuWithContent:(id)arg1;
- (double)timeForBarrageRenderer:(id)arg1;
- (void)loadDanmakuTimeProfile;
- (void)initDanmakuRenderer;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToWindow;
- (void)closeFloatingWindow;
- (struct CGRect)floatingWindowFrame;
- (void)updateStatusBar:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)fullscreen;
- (_Bool)landscapeFullscreen;
- (void)didMoveToParentViewController:(id)arg1;
- (void)showAllInteractiveView;
- (void)hideAllInteractiveView;
- (void)onVideoClose;
- (void)onVideoSliderStartDrag;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoTimeChanged:(double)arg1;
- (void)onVideoComplete;
- (long long)modelTypeOf:(id)arg1;
- (id)typeKeyWith:(id)arg1;
- (void)showAllInteractiveViewForTypeViewMapper:(id)arg1;
- (void)hideAllInteractiveViewForTypeViewMapper:(id)arg1;
- (void)removeFromSuperViewForTypeViewMapper:(id)arg1;
- (void)resetInteractiveView;
- (id)screenType;
- (void)hiddenInteractiveViewWithModel:(id)arg1 type:(long long)arg2;
- (void)updateInteractiveViewWithModel:(id)arg1;
- (id)parseXYWithAnchorAry:(id)arg1 index:(long long)arg2;
- (_Bool)needHideAnimateWithFrame:(struct CGRect)arg1;
- (void)dealWithTrackerModel:(id)arg1 movingview:(id)arg2 index:(long long)arg3 isPortrait:(_Bool)arg4;
- (void)updateComponentFrame;
- (_Bool)needChangeParent:(id)arg1;
- (struct CGPoint)componentPointWidthX:(float)arg1 y:(float)arg2 componentSize:(struct CGSize)arg3 renderOrientation:(id)arg4;
- (struct CGPoint)componentPointWidthX:(float)arg1 y:(float)arg2 componentSize:(struct CGSize)arg3 renderOrientation:(id)arg4 isFullModel:(_Bool)arg5;
- (void)goShop;
- (void)updateRightMixBtnFrame;
- (void)updateTitleBtnFrame;
- (void)updateFollowBtnFrame;
- (void)showRightMixBtn;
- (void)hideRightMixBtn;
- (void)handleWeexAddFollow:(CDUnknownBlockType)arg1;
- (void)showFollowBtn;
- (void)updateGoshopFrame;
- (void)updateVideoLogoHidden;
- (void)updateVideoLogoFrame;
- (void)setupVideoLogo;
- (void)setCollectLogoData:(id)arg1;
- (void)updateFrame:(struct CGRect)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleToastNoti:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)onInteractiveHidden;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

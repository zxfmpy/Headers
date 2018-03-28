//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTImagePreviewTopBarDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TTImagePickerLoadingView, TTImagePreviewBottomView, TTImagePreviewTopBar, TTImagePreviewVideoManager, UICollectionView, UIImageView, UIPanGestureRecognizer, UIView;
@protocol TTImagePreviewViewControllerDelegate;

@interface TTImagePreviewViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, TTImagePreviewTopBarDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _currentIndex;
    NSMutableArray *_selectModels;
    NSArray *_allModels;
    _Bool _hideNavBarAndBottomBar;
    _Bool _statusBarHidden;
    _Bool _naviBarHidden;
    UIPanGestureRecognizer *_panGesture;
    _Bool _onPaning;
    struct CGPoint _initGesturePoint;
    struct CGRect _initFrame;
    UIView *_imgView;
    _Bool _statusBarAutoHidden;
    _Bool _lastHidden;
    _Bool _canComplete;
    _Bool _firstDisplay;
    id <TTImagePreviewViewControllerDelegate> _delegate;
    unsigned long long _maxLimit;
    UIImageView *_tapView;
    TTImagePickerLoadingView *_loadingView;
    UICollectionView *_collectionView;
    TTImagePreviewBottomView *_bottomView;
    TTImagePreviewTopBar *_topView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _direction;
    long long _enterOrientation;
    TTImagePreviewVideoManager *_videoManager;
    long long _previewType;
}

+ (id)selectPreviewViewControllerWithVideo:(id)arg1 delegate:(id)arg2;
+ (id)selectPreviewViewControllerWithModes:(id)arg1 selects:(id)arg2 index:(long long)arg3 delegate:(id)arg4;
+ (id)deletePreviewViewControllerWithModes:(id)arg1 index:(long long)arg2 delegate:(id)arg3;
@property(nonatomic) _Bool firstDisplay; // @synthesize firstDisplay=_firstDisplay;
@property(nonatomic) long long previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) TTImagePreviewVideoManager *videoManager; // @synthesize videoManager=_videoManager;
@property(nonatomic) long long enterOrientation; // @synthesize enterOrientation=_enterOrientation;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) TTImagePreviewTopBar *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) TTImagePreviewBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool canComplete; // @synthesize canComplete=_canComplete;
@property(retain, nonatomic) TTImagePickerLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool lastHidden; // @synthesize lastHidden=_lastHidden;
@property(nonatomic, getter=isStatusBarAutoHidden) _Bool statusBarAutoHidden; // @synthesize statusBarAutoHidden=_statusBarAutoHidden;
@property(nonatomic) __weak UIImageView *tapView; // @synthesize tapView=_tapView;
@property(nonatomic) unsigned long long maxLimit; // @synthesize maxLimit=_maxLimit;
@property(nonatomic) __weak id <TTImagePreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *animatedImageView; // @synthesize animatedImageView=_imgView;
@property(readonly, copy, nonatomic) NSArray *allModels; // @synthesize allModels=_allModels;
@property(readonly, nonatomic) NSMutableArray *selectModels; // @synthesize selectModels=_selectModels;
@property(readonly, nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)changeSelectModels;
- (void)removeSelectModelIndex:(unsigned long long)arg1;
- (void)removeSelectModel:(id)arg1;
- (void)addSelectModel:(id)arg1;
- (void)dismissMySelf:(_Bool)arg1;
- (void)onSingleTapCell:(id)arg1 indexPath:(id)arg2;
- (void)refreshNaviBarAndBottomBarState;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectAction;
- (void)ttImagePreviewTopBarOnButtonClick:(long long)arg1;
- (void)onClickSubmit;
- (void)configCollectionView;
- (void)dismiss:(_Bool)arg1 isGestureAnimate:(_Bool)arg2;
- (void)presentOn:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)changePanAnimated:(id)arg1;
- (void)resetPanAnimated;
- (void)preparePanAnimated:(id)arg1;
- (void)panGestureAction:(id)arg1;
- (void)viewDidLoad;
- (void)setSelectModels:(id)arg1;
- (id)initWithModes:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEGoodsListViewProtocol-Protocol.h"
#import "AWETaobaoDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAwemeModel, AWEButton, AWEGoodsManager, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIPageControl, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface AWEGoodsCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, AWETaobaoDelegate, AWEGoodsListViewProtocol>
{
    _Bool _isAnimating;
    _Bool _isShowing;
    UIView *_baseView;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UIButton *_closeBtn;
    UILabel *_emptyLabel;
    UILabel *_tipsLabel;
    UIImageView *_loadingLogo;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    AWEButton *_manageGoodsBtn;
    UIPanGestureRecognizer *_panGes;
    UITapGestureRecognizer *_dismissGes;
    UITapGestureRecognizer *_refreshGes;
    AWEGoodsManager *_goodsManager;
    AWEAwemeModel *_awemeModel;
    double _baseViewHeight;
    NSString *_referString;
    struct CGPoint _lastLocation;
}

@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) double baseViewHeight; // @synthesize baseViewHeight=_baseViewHeight;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
@property(retain, nonatomic) AWEGoodsManager *goodsManager; // @synthesize goodsManager=_goodsManager;
@property(retain, nonatomic) UITapGestureRecognizer *refreshGes; // @synthesize refreshGes=_refreshGes;
@property(retain, nonatomic) UITapGestureRecognizer *dismissGes; // @synthesize dismissGes=_dismissGes;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) AWEButton *manageGoodsBtn; // @synthesize manageGoodsBtn=_manageGoodsBtn;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *loadingLogo; // @synthesize loadingLogo=_loadingLogo;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (id)_getCornerLayerForRect:(struct CGRect)arg1;
- (void)openInTaobaoWithGoods:(id)arg1 enterFrom:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)manageGoodsBtnClicked:(id)arg1;
- (void)shadowClicked:(id)arg1;
- (void)longSildeClose:(id)arg1;
- (void)refreshImageClicked:(id)arg1;
- (void)_stopLoadingAnimation;
- (void)_startLoadingAnimation;
- (void)loadData;
- (void)loadDataIfNeeded;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)showOnView:(id)arg1 animated:(_Bool)arg2;
- (void)showOnView:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)_layoutSubViewsFrame;
- (void)_addGesture;
- (void)_setupUI;
- (void)_removeObservers;
- (void)_addObservers;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAwemeModel:(id)arg1 refer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

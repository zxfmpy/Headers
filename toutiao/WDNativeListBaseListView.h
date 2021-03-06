//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "SSImpressionProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class NSObject, NSString, NSTimer, SSThemedTableView, TTCategory, WDNativeListModel;
@protocol WDNativeListBaseListViewLoadingDelegate, WDNativeListBaseListViewModelDelegate;

@interface WDNativeListBaseListView : SSViewBase <UITableViewDelegate, UITableViewDataSource, SSImpressionProtocol, UIViewControllerErrorHandler>
{
    _Bool _isAutoRefresh;
    _Bool _isCurrentDisplayView;
    _Bool _isDragLoadMore;
    _Bool _allowPreLoadMore;
    _Bool _isViewAppear;
    _Bool _isShowing;
    _Bool _enablePullDown;
    _Bool _isPullRefreshMore;
    SSThemedTableView *_tableView;
    NSObject<WDNativeListBaseListViewModelDelegate> *_viewModel;
    id <WDNativeListBaseListViewLoadingDelegate> _delegate;
    double _bottomInset;
    NSString *_enterType;
    TTCategory *_currentCategory;
    NSTimer *_preLoadMoreTimer;
    WDNativeListModel *_listModel;
}

@property(retain, nonatomic) WDNativeListModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) _Bool isPullRefreshMore; // @synthesize isPullRefreshMore=_isPullRefreshMore;
@property(nonatomic) _Bool enablePullDown; // @synthesize enablePullDown=_enablePullDown;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(nonatomic) _Bool allowPreLoadMore; // @synthesize allowPreLoadMore=_allowPreLoadMore;
@property(nonatomic) _Bool isDragLoadMore; // @synthesize isDragLoadMore=_isDragLoadMore;
@property(retain, nonatomic) NSTimer *preLoadMoreTimer; // @synthesize preLoadMoreTimer=_preLoadMoreTimer;
@property(retain, nonatomic) TTCategory *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(nonatomic) _Bool isCurrentDisplayView; // @synthesize isCurrentDisplayView=_isCurrentDisplayView;
@property(copy, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(readonly, nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) _Bool isAutoRefresh; // @synthesize isAutoRefresh=_isAutoRefresh;
@property(nonatomic) __weak id <WDNativeListBaseListViewLoadingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<WDNativeListBaseListViewModelDelegate> *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)needRerecordImpressions;
- (unsigned long long)impressionType;
- (id)impressionKeyName;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sessionExpiredAction;
- (void)emptyViewBtnAction;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)disappearRecommendCardCellNotice:(id)arg1;
- (void)dislikeCellNotice:(id)arg1;
- (void)addToFirstPageCellViewClose:(id)arg1;
- (void)fontSizeChanged:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)addObserveNotification;
- (_Bool)shouldShowPullRefreshTip;
- (void)tryPreloadMore;
- (id)loadMoreExtra;
- (void)setListTopInset:(double)arg1 BottomInset:(double)arg2;
- (void)endUpdate;
- (void)loadListViewWithCathedData;
- (_Bool)hasLocalCathedData;
- (void)clearLocalCathedData;
- (void)setHintInsets:(struct UIEdgeInsets)arg1;
- (void)loadMoreInfo;
- (void)triggerPullUp;
- (void)pullRefreshInfo;
- (void)triggerPullDown;
- (void)setIsViewAppear:(_Bool)arg1 andIsShowing:(_Bool)arg2;
- (id)viewModelClassFromModel:(id)arg1;
- (void)constructViewModelWithModel:(id)arg1;
- (double)barHeight;
- (void)willDisappear;
- (void)willAppear;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 widthModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 widthModel:(id)arg2 enablePullDown:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


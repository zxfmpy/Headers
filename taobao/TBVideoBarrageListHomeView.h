//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBVideoBarrageErrorView, TBVideoBarrageHeaderView, TBVideoBarrageRequestModel, TBVideoSVCommentInputView, TBVideoTweSVVC, UILabel, UITableView;

@interface TBVideoBarrageListHomeView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasLoadAllPage;
    CDUnknownBlockType _closeBlock;
    UITableView *_mainTableView;
    TBVideoBarrageHeaderView *_headerView;
    TBVideoSVCommentInputView *_inputView;
    TBVideoTweSVVC *_parentVC;
    TBVideoBarrageRequestModel *_requestModel;
    NSString *_currentVideoId;
    NSMutableArray *_dataSource;
    long long _currentPage;
    long long _barrageCount;
    double _startMin;
    double _endMin;
    UILabel *_emptyTipLabel;
    TBVideoBarrageErrorView *_errorView;
}

@property(retain, nonatomic) TBVideoBarrageErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(nonatomic) double endMin; // @synthesize endMin=_endMin;
@property(nonatomic) double startMin; // @synthesize startMin=_startMin;
@property(nonatomic) long long barrageCount; // @synthesize barrageCount=_barrageCount;
@property(nonatomic) _Bool hasLoadAllPage; // @synthesize hasLoadAllPage=_hasLoadAllPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *currentVideoId; // @synthesize currentVideoId=_currentVideoId;
@property(retain, nonatomic) TBVideoBarrageRequestModel *requestModel; // @synthesize requestModel=_requestModel;
@property(nonatomic) __weak TBVideoTweSVVC *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) TBVideoSVCommentInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) TBVideoBarrageHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showCommentInputView:(_Bool)arg1;
- (void)sendRequestAtPageIndex:(long long)arg1;
- (void)queryBarrageWithVideoId:(id)arg1;
- (void)setHomeViewController:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

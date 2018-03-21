//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSQuizBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSQuizWinnerViewModel, NSString, UILabel, UITableView, UIView;

@interface KSQuizWinnersViewController : KSQuizBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _showUserDetailBlock;
    UILabel *_descLabel;
    UIView *_splitLine;
    UITableView *_tableView;
    KSQuizWinnerViewModel *_viewModel;
}

@property(retain, nonatomic) KSQuizWinnerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(copy, nonatomic) CDUnknownBlockType showUserDetailBlock; // @synthesize showUserDetailBlock=_showUserDetailBlock;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (void)_loadData;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_setupTableView;
- (void)_setupTitleViews;
- (id)initWithViewModel:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

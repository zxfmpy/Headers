//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEStoryCommentInputViewDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWECommentListManager, AWEStoryCommentHeaderView, AWEStoryCommentInputView, AWEStoryCommentTransitionManager, NSString, UILabel, UITableView, UIView;

@interface AWEStoryCommentReplyChainViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEStoryCommentInputViewDelegate, AWEUserMessage, BTDRouterViewControllerProtocol>
{
    UILabel *_loadingLabel;
    UILabel *_emptyLabel;
    AWEStoryCommentHeaderView *_headerView;
    UIView *_tableHeaderView;
    UITableView *_tableView;
    AWEStoryCommentInputView *_commentInputView;
    UIView *_keyboardMaskView;
    NSString *_replyId;
    NSString *_authorNickName;
    AWECommentListManager *_commentManager;
    long long _selectedRow;
    AWEStoryCommentTransitionManager *_transitionManager;
}

+ (void)load;
@property(retain, nonatomic) AWEStoryCommentTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) AWECommentListManager *commentManager; // @synthesize commentManager=_commentManager;
@property(copy, nonatomic) NSString *authorNickName; // @synthesize authorNickName=_authorNickName;
@property(copy, nonatomic) NSString *replyId; // @synthesize replyId=_replyId;
@property(retain, nonatomic) UIView *keyboardMaskView; // @synthesize keyboardMaskView=_keyboardMaskView;
@property(retain, nonatomic) AWEStoryCommentInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) AWEStoryCommentHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
- (void).cxx_destruct;
- (void)didFinishBindPhone;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (void)keyboardMaskViewTapped:(id)arg1;
- (void)longPressAtCell:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (_Bool)commentInputViewShouldReturn:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_deleteCommentWithCommentId:(id)arg1 indexPath:(id)arg2;
- (void)_resetReplyState;
- (void)_dismiss;
- (void)_endRefreshing;
- (void)_refreshData;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)initWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SSThemedTableView;
@protocol TTVCommentModelProtocol;

@interface TTVCommentListReplyView : SSThemedView <UITableViewDataSource, UITableViewDelegate>
{
    SSThemedView *_wrapper;
    SSThemedTableView *_replyTableView;
    id <TTVCommentModelProtocol> _toComment;
    NSArray *_replyArr;
    CDUnknownBlockType _replyActionBlock;
    CDUnknownBlockType _replyUserBlock;
}

+ (_Bool)shouldShowMoreReplyCellForReplyArr:(id)arg1 toComment:(id)arg2;
+ (double)showMoreReplyCellHeight;
+ (double)heightForReplyTableViewWithReplyArr:(id)arg1 width:(double)arg2 toComment:(id)arg3;
+ (double)heightForListViewWithReplyArr:(id)arg1 width:(double)arg2 toComment:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType replyUserBlock; // @synthesize replyUserBlock=_replyUserBlock;
@property(copy, nonatomic) CDUnknownBlockType replyActionBlock; // @synthesize replyActionBlock=_replyActionBlock;
@property(retain, nonatomic) NSArray *replyArr; // @synthesize replyArr=_replyArr;
@property(retain, nonatomic) id <TTVCommentModelProtocol> toComment; // @synthesize toComment=_toComment;
@property(retain, nonatomic) SSThemedTableView *replyTableView; // @synthesize replyTableView=_replyTableView;
@property(retain, nonatomic) SSThemedView *wrapper; // @synthesize wrapper=_wrapper;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshReplyListWithComment:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)refreshFramesWithWidth:(double)arg1;
- (void)refreshReplyListBackgroundColors;
- (void)buildReplyTableView;
- (void)didClickReplyToViewUser:(CDUnknownBlockType)arg1;
- (void)didClickReplyToMakeAction:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWidth:(double)arg1 toComment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

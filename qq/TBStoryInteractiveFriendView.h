//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>
#import <QQMainProject/TBStoryInteractiveCommentCellDelegate-Protocol.h>
#import <QQMainProject/TBStoryInteractiveLikeCellDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, TBFeedCommentInfoModel, TBFeedLikeInfoModel, TBQQUserInfoModel, UITableView;
@protocol TBStoryInteractiveContentDelegate;

@interface TBStoryInteractiveFriendView : UIView <UITableViewDelegate, UITableViewDataSource, TBBizNetworkLogicDelegate, TBStoryInteractiveCommentCellDelegate, TBStoryInteractiveLikeCellDelegate>
{
    UITableView *_tableView;
    long long _showType;
    long long _entryType;
    long long _feedType;
    _Bool _isGroupStory;
    _Bool _hasLikeCell;
    _Bool _hasCommentCell;
    long long _reportCommentSeq;
    unsigned long long _likeStrangerSeq;
    unsigned long long _commentStrangerSeq;
    NSMutableArray *_fetchedStrangerList;
    NSMutableArray *_toRequestGroupMembers;
    NSMutableArray *_commentList;
    double _likeHeight;
    NSMutableArray *_commentHeightList;
    NSMutableArray *_fetchedUserPlate;
    NSMutableArray *_fetchUserPlateSeq;
    id <TBStoryInteractiveContentDelegate> _delegate;
    unsigned long long _detailSource;
    double _innerContentHeight;
    TBQQUserInfoModel *_userModel;
    TBFeedLikeInfoModel *_likeModel;
    TBFeedCommentInfoModel *_commentModel;
}

@property(retain, nonatomic) TBFeedCommentInfoModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) TBFeedLikeInfoModel *likeModel; // @synthesize likeModel=_likeModel;
@property(retain, nonatomic) TBQQUserInfoModel *userModel; // @synthesize userModel=_userModel;
@property(nonatomic) double innerContentHeight; // @synthesize innerContentHeight=_innerContentHeight;
@property(nonatomic) unsigned long long detailSource; // @synthesize detailSource=_detailSource;
@property(nonatomic) __weak id <TBStoryInteractiveContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getArrayItemSafe:(id)arg1 index:(unsigned long long)arg2;
- (double)getCommentBottomY;
- (double)getCommentRelativeY:(unsigned int)arg1 relativeType:(long long)arg2;
- (void)needToReloadData;
- (void)actionFetchGroupMemberCard:(id)arg1;
- (void)handleRspUserInfo:(id)arg1 seq:(unsigned long long)arg2;
- (void)handleUserPlateInfoNotification:(id)arg1;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didClickCommentNickToMemoryCard;
- (void)didClickLikeNickToMemoryCard;
- (void)showSelectStyleAtIndex:(long long)arg1;
- (void)commentLongTapGesture:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)filterFecthed:(id)arg1;
- (void)requestGroupMemeberCard:(id)arg1 groupCode:(id)arg2;
- (void)addUinsToRequstGroupMember:(id)arg1;
- (void)appendTotalTipsModel;
- (void)refreshCommentModel;
- (void)refreshLikeModel;
- (void)fetchStrangerUserIcon;
- (void)refreshTableView:(struct CGSize)arg1;
- (void)refreshWithSize:(struct CGSize)arg1 showType:(long long)arg2 feedType:(long long)arg3 user:(id)arg4 commentModel:(id)arg5 likeModel:(id)arg6;
- (void)addNotifi;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 entryType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

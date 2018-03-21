//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSFeedBaseComponent.h"

#import "KSFeedHorizontalToolBarDelegate-Protocol.h"
#import "KSFeedVerticalToolBarDelegate-Protocol.h"

@class KSFeedToolBar, KSSlideActionController, LikableAnimation, NSString;

@interface KSFeedToolBarComponent : KSFeedBaseComponent <KSFeedVerticalToolBarDelegate, KSFeedHorizontalToolBarDelegate>
{
    CDStruct_9a43728d _componentFlags;
    NSString *_likeObserveToken;
    NSString *_privacyObserveToken;
    NSString *_hateObserveToken;
    NSString *_commentCountObserverToken;
    _Bool _disableHateButton;
    CDUnknownBlockType _tapCommentBlock;
    CDUnknownBlockType _tapAddCommentBlock;
    long long _originalFeedStatus;
    LikableAnimation *_likeAnimation;
    KSSlideActionController *_shareVC;
}

@property(retain, nonatomic) KSSlideActionController *shareVC; // @synthesize shareVC=_shareVC;
@property(readonly, nonatomic) _Bool disableHateButton; // @synthesize disableHateButton=_disableHateButton;
@property(retain, nonatomic) LikableAnimation *likeAnimation; // @synthesize likeAnimation=_likeAnimation;
@property(nonatomic) long long originalFeedStatus; // @synthesize originalFeedStatus=_originalFeedStatus;
@property(copy, nonatomic) CDUnknownBlockType tapAddCommentBlock; // @synthesize tapAddCommentBlock=_tapAddCommentBlock;
@property(copy, nonatomic) CDUnknownBlockType tapCommentBlock; // @synthesize tapCommentBlock=_tapCommentBlock;
- (void).cxx_destruct;
- (id)_moreActionItems;
- (void)didTadAddCommentButton:(id)arg1;
- (void)didTapMusicInfo:(id)arg1;
- (void)didTapFollowButton:(id)arg1;
- (void)didTapAvatar:(id)arg1;
- (void)didTapShareButton:(id)arg1;
- (void)didTapLikeButton:(id)arg1;
- (void)didTapCommentButton:(id)arg1;
- (void)untopThisTag;
- (void)topThisTag;
- (void)negativeThisFeed;
- (void)didTapUnpick;
- (void)unpicThisFeedFromTopic;
- (void)unfollowThisFeed;
- (void)followThisFeed;
- (void)deleteThisFeed;
- (void)changePhotoVisibility;
- (void)reportThisFeed;
- (void)enterFansTop;
- (void)componentDidDisappear:(_Bool)arg1;
- (void)didAttachToContainer:(id)arg1 inView:(id)arg2;
- (struct CGPoint)positionComponentFrom:(struct CGPoint)arg1;
- (void)updateShareItem:(_Bool)arg1;
- (void)updateHateItem:(_Bool)arg1;
- (void)updateLikeItem:(_Bool)arg1;
- (void)updateFollowItem:(_Bool)arg1;
- (void)reloadData;
@property(nonatomic) _Bool updatingPrivacy; // @dynamic updatingPrivacy;
- (id)sourceTagName;
- (id)permission;
@property(readonly, nonatomic) KSFeedToolBar *toolBar; // @dynamic toolBar;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

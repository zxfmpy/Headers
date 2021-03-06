//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class FRInviteFriendsUserWrapperStructModel, SSThemedLabel, TTColorAsFollowButton;

@interface TTInviteFriendCell : SSThemedTableViewCell
{
    CDUnknownBlockType _inviteFriendBlock;
    SSThemedLabel *_nameLabel;
    TTColorAsFollowButton *_inviteButton;
    FRInviteFriendsUserWrapperStructModel *_model;
}

+ (double)heightForInviteFriendCell;
@property(retain, nonatomic) FRInviteFriendsUserWrapperStructModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TTColorAsFollowButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType inviteFriendBlock; // @synthesize inviteFriendBlock=_inviteFriendBlock;
- (void).cxx_destruct;
- (void)inviteButtonClick:(id)arg1;
- (void)configWithInviteFriendModel:(id)arg1;
- (void)bindRAC;
- (void)constraintsViews;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


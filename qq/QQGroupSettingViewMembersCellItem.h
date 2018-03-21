//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QQAvatarView, UIButton, UILabel;
@protocol QQGroupSettingViewMembersDelegate;

@interface QQGroupSettingViewMembersCellItem : UIView
{
    UIButton *_responeTouch;
    UILabel *_nameLabel;
    NSString *_uin;
    QQAvatarView *_avatarView;
    long long _discussGroupUin;
    _Bool _isFromDiscuss;
    id <QQGroupSettingViewMembersDelegate> _membersCellDelegate;
}

@property(nonatomic) _Bool isFromDiscuss; // @synthesize isFromDiscuss=_isFromDiscuss;
@property(nonatomic) id <QQGroupSettingViewMembersDelegate> membersCellDelegate; // @synthesize membersCellDelegate=_membersCellDelegate;
- (void)dealloc;
- (void)setUin:(id)arg1 withNick:(id)arg2 AndDiscussUin:(long long)arg3;
- (void)setUin:(id)arg1 withNick:(id)arg2;
- (void)setUIImage:(id)arg1 withText:(id)arg2;
- (void)setTextColor:(id)arg1;
- (void)onActivityIconClick:(id)arg1;
- (void)getDiscussMemberRemarkFinishCallBack:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

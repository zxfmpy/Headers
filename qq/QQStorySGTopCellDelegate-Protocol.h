//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSString, QQStorySGTopCell;

@protocol QQStorySGTopCellDelegate <NSObject>
- (void)storyShareGroupCell:(QQStorySGTopCell *)arg1 deleteMembers:(NSArray *)arg2;
- (void)storyShareGroupCell:(QQStorySGTopCell *)arg1 joinShareGroup:(NSString *)arg2;
- (void)storyShareGroupCell:(QQStorySGTopCell *)arg1 inviteFriend:(NSArray *)arg2;
- (void)storyShareGroupCell:(QQStorySGTopCell *)arg1 updateGroupName:(NSString *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SSUserModel, TTCommentDetailHeaderDigItem;

@protocol TTCommentDetailHeaderDigItemDelegate <NSObject>

@optional
- (void)commentDetailHeaderDigItem:(TTCommentDetailHeaderDigItem *)arg1 diggUsersAccessoryClicked:(id)arg2;
- (void)commentDetailHeaderDigItem:(TTCommentDetailHeaderDigItem *)arg1 diggUserAvatarClicked:(SSUserModel *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class TBMsgTabNodeInfo;

@protocol QQStoryNodeActionSheetHandlerDelegate <NSObject>
- (void)loseInterestDidSuccess:(TBMsgTabNodeInfo *)arg1;
- (void)setForbiddenStatusDidSuccess:(TBMsgTabNodeInfo *)arg1 isForbidden:(_Bool)arg2;
- (void)quitShareGroupDidSuccess:(TBMsgTabNodeInfo *)arg1;
- (void)subscribeDidSuccess:(TBMsgTabNodeInfo *)arg1 isSubscribed:(_Bool)arg2;
@end

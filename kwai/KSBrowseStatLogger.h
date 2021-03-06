//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSFeedStatLogger-Protocol.h"

@class NSMutableSet, NSNumber, NSString;

@interface KSBrowseStatLogger : NSObject <KSFeedStatLogger>
{
    unsigned int _slideUpPlayCount;
    unsigned int _slideDownPlayCount;
    NSNumber *_cIndex;
    unsigned long long _enterTime;
    unsigned long long _leaveTime;
    NSMutableSet *_loggers;
}

@property(retain, nonatomic) NSMutableSet *loggers; // @synthesize loggers=_loggers;
@property(nonatomic) unsigned int slideDownPlayCount; // @synthesize slideDownPlayCount=_slideDownPlayCount;
@property(nonatomic) unsigned int slideUpPlayCount; // @synthesize slideUpPlayCount=_slideUpPlayCount;
@property(nonatomic) unsigned long long leaveTime; // @synthesize leaveTime=_leaveTime;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSNumber *cIndex; // @synthesize cIndex=_cIndex;
- (void).cxx_destruct;
- (id)statPackage;
- (void)addStatLogger:(id)arg1;
- (void)reportWithFeed:(id)arg1;
- (void)commentSended:(id)arg1;
- (void)openCommentsPopup;
- (void)followWithParam:(id)arg1;
- (void)shareWithFeed:(id)arg1;
- (void)unlikeWithFeed:(id)arg1;
- (void)likeWithFeed:(id)arg1;
@property(readonly, nonatomic) unsigned int reportCount;
@property(readonly, nonatomic) unsigned int negativeCount;
@property(readonly, nonatomic) unsigned int commentCount;
@property(readonly, nonatomic) unsigned int expandCommentPopupWindowCount;
@property(readonly, nonatomic) unsigned int forwardCount;
@property(readonly, nonatomic) unsigned int followCount;
@property(readonly, nonatomic) unsigned int likeCount;
@property(readonly, nonatomic) unsigned long long stayDuration;
- (void)leave;
- (void)clearAllData;
- (void)enter;
- (void)updateStatIndex:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


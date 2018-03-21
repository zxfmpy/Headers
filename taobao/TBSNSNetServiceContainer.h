//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSNSBasicServiceDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBSNSNetServiceContainerDelegate;

@interface TBSNSNetServiceContainer : NSObject <TBSNSBasicServiceDelegate>
{
    id <TBSNSNetServiceContainerDelegate> _delegate;
    NSMutableArray *_operations;
}

@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(nonatomic) __weak id <TBSNSNetServiceContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidCancelLoad:(id)arg1;
- (unsigned int)markForModel:(id)arg1;
- (void)removeOperationByModel:(id)arg1;
- (_Bool)checkTimeStamp;
- (void)addTag:(id)arg1 feedId:(id)arg2;
- (void)hostCancelHostWithMark:(int)arg1 feedId:(id)arg2;
- (void)hostRemoveFeedWithMark:(int)arg1 feedId:(id)arg2 topicName:(id)arg3;
- (void)hostRecommendFeedWithMark:(int)arg1 feedId:(id)arg2;
- (void)weexConfig:(int)arg1;
- (void)getNewChannelFeedCntWithMark:(int)arg1 timestamp:(unsigned long long)arg2;
- (void)removeRedPointParam:(id)arg1;
- (void)getRedPointTabId:(long long)arg1 tabVersion:(id)arg2 canChangeIcon:(_Bool)arg3 tabHashCode:(long long)arg4 timestamp:(unsigned long long)arg5;
- (void)setRecommendSwitch:(_Bool)arg1 withMark:(int)arg2;
- (void)doNotRecommend:(unsigned long long)arg1 withMark:(int)arg2;
- (void)forbidDynamic:(unsigned long long)arg1 forbid:(_Bool)arg2;
- (void)forbidDynamic:(unsigned long long)arg1 feedID:(unsigned long long)arg2 forbid:(_Bool)arg3 withMark:(int)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

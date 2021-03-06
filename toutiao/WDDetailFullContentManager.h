//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTService-Protocol.h"

@class NSMutableArray, NSString;
@protocol WDDetailFullContentManagerDelegate;

@interface WDDetailFullContentManager : NSObject <TTService>
{
    double _threadPriority;
    id <WDDetailFullContentManagerDelegate> _delegate;
    NSMutableArray *_operations;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(nonatomic) __weak id <WDDetailFullContentManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double threadPriority; // @synthesize threadPriority=_threadPriority;
- (void).cxx_destruct;
- (id)cdnHostWithIndex:(unsigned long long)arg1;
- (id)detailUrlStringAtIndex:(unsigned long long)arg1 answerID:(id)arg2 useCDN:(_Bool)arg3;
- (void)notifyFinish:(id)arg1;
- (void)fetchDetailForAnswerEntity:(id)arg1 withOperationPriority:(long long)arg2 atIndex:(unsigned long long)arg3 notifyError:(_Bool)arg4 useCDN:(_Bool)arg5;
- (void)fetchDetailForAnswerEntity:(id)arg1 useCDN:(_Bool)arg2;
- (void)resumeAllRequests;
- (void)suspendAllRequests;
- (void)cancelAllRequests;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


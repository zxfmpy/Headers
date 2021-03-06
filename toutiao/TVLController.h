//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TVLDelegate-Protocol.h"
#import "TVLRetryDelegate-Protocol.h"

@class NSString, TVLApiRequestInfo, TVLLiveInfoFetcher, TVLLogger, TVLRetryProcessor, UIView;
@protocol TVLDelegate, TVLPlayer;

@interface TVLController : NSObject <TVLDelegate, TVLRetryDelegate>
{
    _Bool _isPrepared;
    _Bool _hasShowedFirstFrame;
    _Bool _hasReportOut;
    TVLLiveInfoFetcher *_fetcher;
    id <TVLPlayer> _player;
    id <TVLDelegate> _delegate;
    TVLApiRequestInfo *_dataSource;
    TVLRetryProcessor *_retryProcessor;
    TVLLogger *_logger;
}

@property(nonatomic) _Bool hasReportOut; // @synthesize hasReportOut=_hasReportOut;
@property(nonatomic) _Bool hasShowedFirstFrame; // @synthesize hasShowedFirstFrame=_hasShowedFirstFrame;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(retain, nonatomic) TVLLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) TVLRetryProcessor *retryProcessor; // @synthesize retryProcessor=_retryProcessor;
@property(retain, nonatomic) TVLApiRequestInfo *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TVLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <TVLPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) TVLLiveInfoFetcher *fetcher; // @synthesize fetcher=_fetcher;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) UIView *playerView;
- (void)setRetryLimitTime:(unsigned long long)arg1;
- (id)popEvent;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)reportToApplication:(id)arg1;
- (void)tryNextURL;
- (void)resetPlayer;
- (void)refetchLiveInfo;
- (void)stallEnd;
- (void)stallStart;
- (void)startRender;
- (void)recieveError:(id)arg1;
- (void)logOnFinish;
- (void)reset;
- (void)updateProcess;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay:(id)arg1;
- (void)fetchLiveInfo;
- (id)initWithOwnPlayer:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


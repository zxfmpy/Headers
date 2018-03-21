//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoPlayerInternal.h"

#import "APResourceLoaderDelegate-Protocol.h"

@class APMediaPlayerLogInfo, APResourceLoader, AVURLAsset, NSDate, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MediaPlayerInternal : VideoPlayerInternal <APResourceLoaderDelegate>
{
    _Bool _needCache;
    _Bool _isCloudId;
    _Bool _networkResource;
    _Bool _supportRangeAccess;
    _Bool _readyForDisplay;
    _Bool _providesPreciseDurationAndTiming;
    _Bool _seeking;
    _Bool _waitingForLayerReadyToPlay;
    NSString *_cloudID;
    APResourceLoader *_resourceLoader;
    APMediaPlayerLogInfo *_logInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSDate *_lastSeekedDate;
    AVURLAsset *_currentAsset;
    NSError *_networkError;
    CDStruct_1b6d18a9 _seekTime;
}

@property(nonatomic) _Bool waitingForLayerReadyToPlay; // @synthesize waitingForLayerReadyToPlay=_waitingForLayerReadyToPlay;
@property(retain, nonatomic) NSError *networkError; // @synthesize networkError=_networkError;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) _Bool providesPreciseDurationAndTiming; // @synthesize providesPreciseDurationAndTiming=_providesPreciseDurationAndTiming;
@property(retain, nonatomic) AVURLAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSDate *lastSeekedDate; // @synthesize lastSeekedDate=_lastSeekedDate;
@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(nonatomic) _Bool supportRangeAccess; // @synthesize supportRangeAccess=_supportRangeAccess;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) APMediaPlayerLogInfo *logInfo; // @synthesize logInfo=_logInfo;
@property(nonatomic) _Bool networkResource; // @synthesize networkResource=_networkResource;
@property(retain, nonatomic) APResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSString *cloudID; // @synthesize cloudID=_cloudID;
@property(nonatomic) _Bool isCloudId; // @synthesize isCloudId=_isCloudId;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
- (void).cxx_destruct;
- (void)loader:(id)arg1 cacheProgress:(double)arg2;
- (void)loader:(id)arg1 startRequestTask:(id)arg2;
- (void)loader:(id)arg1 failLoadingWithError:(id)arg2;
- (void)notifyDelegateFailedWithError:(id)arg1;
- (void)notifyDelegateCurrentLoadedTime:(double)arg1;
- (void)handleLoadingComplete;
- (_Bool)isLoading;
- (void)processLoadedTimeRanges;
- (void)processPlayItem:(id)arg1 playBackKeyPath:(id)arg2;
- (void)processPlayItemStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reportRemoteLog;
- (void)removeReferenceCount;
- (void)addReferenceCount;
- (void)stopResourceLoader;
- (void)setAutomaticallyWaitsToMinimizeStalling:(_Bool)arg1;
- (void)removeObserversForCurrentItem;
- (void)addObserversForCurrentItem;
- (_Bool)prepareInfoForAsset:(id)arg1;
- (id)resourceLoaderWithIdentifier:(id)arg1;
- (id)playItemFromCacheWithIdentifierWithLoader:(id)arg1;
- (id)playItemFromCacheWithIdentifier:(id)arg1;
- (id)playItemFromCacheWithIdentifierWithoutLoader:(id)arg1;
- (void)setCurrentItem:(id)arg1;
- (_Bool)replaceCurrentItemWithIdentifier:(id)arg1;
- (id)getVideoItemWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)seekEnd;
- (void)seek:(CDStruct_1b6d18a9)arg1;
- (void)loadThumbnail;
- (void)clean;
- (void)stop;
- (void)play;
- (void)setIdentifier:(id)arg1 business:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

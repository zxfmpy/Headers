//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSDownloader-Protocol.h"

@class KSUCdnResourceLoadStatEvent, KSURLSessionTaskAgent, NSArray, NSError, NSLock, NSString, NSURL;

@interface KSMultiCDNFileDownloader : NSObject <KSDownloader>
{
    _Bool _lastURL;
    int _resourceType;
    NSArray *_cdns;
    NSString *_url;
    long long _currentCdnIndex;
    NSString *_pageUrl;
    unsigned long long _downloadStatus;
    long long _receivedSize;
    long long _expectedSize;
    NSURL *_filePath;
    NSError *_error;
    KSURLSessionTaskAgent *_taskAgent;
    unsigned long long _taskSeqId;
    NSLock *_lock;
    long long _failSum;
    long long _successSum;
    KSUCdnResourceLoadStatEvent *_statisticEvent;
}

@property(retain, nonatomic) KSUCdnResourceLoadStatEvent *statisticEvent; // @synthesize statisticEvent=_statisticEvent;
@property(nonatomic) _Bool lastURL; // @synthesize lastURL=_lastURL;
@property(nonatomic) long long successSum; // @synthesize successSum=_successSum;
@property(nonatomic) long long failSum; // @synthesize failSum=_failSum;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned long long taskSeqId; // @synthesize taskSeqId=_taskSeqId;
@property(retain, nonatomic) KSURLSessionTaskAgent *taskAgent; // @synthesize taskAgent=_taskAgent;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) long long receivedSize; // @synthesize receivedSize=_receivedSize;
@property unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) int resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(nonatomic) long long currentCdnIndex; // @synthesize currentCdnIndex=_currentCdnIndex;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSArray *cdns; // @synthesize cdns=_cdns;
- (void).cxx_destruct;
- (id)currentUrl;
- (void)cancel;
- (void)reDownloadWithProgress:(CDUnknownBlockType)arg1 progress:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_nextUrl;
- (void)dealloc;
- (id)initWithCDNs:(id)arg1 oldURL:(id)arg2;
- (id)init;
- (id)downloadTaskWithProgress:(id *)arg1 cancellationToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


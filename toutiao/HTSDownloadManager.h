//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSString, NSURLSession;

@interface HTSDownloadManager : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_URLoutputStreams;
    NSMutableDictionary *_URLCallbacks;
    NSMutableDictionary *_URLProgress;
    NSMutableDictionary *_URLDestinations;
    NSMutableDictionary *_URLProgerssBlocks;
    NSString *_diskCachePath;
    NSLock *_lock;
    NSURLSession *_session;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)pr_getFileFullPathWithURL:(id)arg1;
- (long long)pr_getDownLoadSizeWithURL:(id)arg1;
- (id)pr_makeDiskCachePath;
- (id)downloadDataTaskWithURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 destination:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadDataTaskWithURL:(id)arg1 progress:(id *)arg2 destination:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

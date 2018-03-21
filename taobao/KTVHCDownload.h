//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSDictionary, NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@interface KTVHCDownload : NSObject <NSURLSessionDataDelegate>
{
    double _timeoutInterval;
    NSDictionary *_commonHeaderFields;
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSOperationQueue *_sessionDelegateQueue;
    NSMutableDictionary *_delegateDictionary;
    NSLock *_lock;
}

+ (id)download;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *delegateDictionary; // @synthesize delegateDictionary=_delegateDictionary;
@property(retain, nonatomic) NSOperationQueue *sessionDelegateQueue; // @synthesize sessionDelegateQueue=_sessionDelegateQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSDictionary *commonHeaderFields; // @synthesize commonHeaderFields=_commonHeaderFields;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (void).cxx_destruct;
- (void)cleanBackgroundTaskAsync;
- (void)cleanBackgroundTask;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)downloadWithRequest:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

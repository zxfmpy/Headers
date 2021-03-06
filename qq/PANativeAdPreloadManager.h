//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface PANativeAdPreloadManager : NSObject <IAsynDownloadImageObserver>
{
    NSMutableArray *_taskArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *taskArray; // @synthesize taskArray=_taskArray;
- (void).cxx_destruct;
- (_Bool)isDisplayImmediately;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (_Bool)isImageCached:(id)arg1;
- (void)preloadImage:(id)arg1;
- (void)preloadVideo:(id)arg1 vid:(id)arg2;
- (void)preloadNextTask;
- (void)preloadTaskWithJSQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


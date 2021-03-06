//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "H5ServiceDelegate-Protocol.h"

@class H5WebViewController, NSString;

@interface NebulaStartApplicationItem : NSObject <H5ServiceDelegate>
{
    _Bool _handleFinished;
    _Bool _hasLoadingPage;
    H5WebViewController *_loadingPage;
}

@property(retain, nonatomic) H5WebViewController *loadingPage; // @synthesize loadingPage=_loadingPage;
@property(nonatomic) _Bool hasLoadingPage; // @synthesize hasLoadingPage=_hasLoadingPage;
@property(nonatomic) _Bool handleFinished; // @synthesize handleFinished=_handleFinished;
- (void).cxx_destruct;
- (id)pageInfo:(id)arg1;
- (void)animate:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)notifyEvent:(id)arg1 isBegin:(_Bool)arg2;
- (void)handleFinishedWithError:(id)arg1 app:(id)arg2 params:(id)arg3 nburl:(id)arg4;
- (void)startLoadingPage:(id)arg1 params:(id)arg2;
- (void)showLoadingPage:(id)arg1;
- (void)beginPrepare;
- (id)nburl:(id)arg1;
- (id)resetNburl:(id)arg1 app:(id)arg2;
- (void)logFinished:(id)arg1 startTime:(double)arg2 appId:(id)arg3 app:(id)arg4 params:(id)arg5 nburl:(id)arg6;
- (id)finalLaunchParams:(id)arg1 appId:(id)arg2;
- (_Bool)isVersionValid:(id)arg1 params:(id)arg2;
- (id)process:(unsigned long long)arg1 info:(id)arg2 params:(id)arg3;
- (void)prepareApplication:(id)arg1 params:(id)arg2 nbversion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


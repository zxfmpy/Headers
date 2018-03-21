//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBURLActionHandler-Protocol.h"
#import "aluUIAppearanceDelegate-Protocol.h"

@class NSString;

@interface TBLoginURLHandler : NSObject <TBURLActionHandler, aluUIAppearanceDelegate>
{
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _cancelationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)resetHandlers;
- (void)doLogin;
- (void)dealloc;
- (void)openSmsLogin;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

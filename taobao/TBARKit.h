//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "ARSCNViewDelegate-Protocol.h"
#import "ARSessionDelegate-Protocol.h"
#import "TBARKitProtocol-Protocol.h"

@class JSContext, NSString, TBARKitProxy;

@interface TBARKit : WVDynamicHandler <ARSCNViewDelegate, ARSessionDelegate, TBARKitProtocol>
{
    JSContext *_webviewContext;
    id _scnView;
    TBARKitProxy *_proxy;
}

+ (_Bool)ARKitSupported;
+ (void)loadARKit;
+ (unsigned long long)instanceScope;
@property(retain, nonatomic) TBARKitProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) id scnView; // @synthesize scnView=_scnView;
@property(retain, nonatomic) JSContext *webviewContext; // @synthesize webviewContext=_webviewContext;
- (void).cxx_destruct;
- (void)dispatchEvent:(id)arg1 withParam:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (id)dictionaryFromAnchor:(id)arg1;
- (id)vector3ToArray: /* Error: Ran out of types for this method. */;
-     // Error parsing type: @80@0:8{?=[4]}16, name: matrix4ToArray:
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (float)getAmbientIntensity;
- (id)getViewMatrix;
- (id)getProjectionMatrix;
- (void)startARKitWithParam:(id)arg1;
- (void)setupARKitContext:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)removeSCNView;
- (void)dealloc;
- (void)resumeWithContext:(id)arg1;
- (void)pauseWithContext:(id)arg1;
- (void)resetWithContext:(id)arg1 withNextRequest:(id)arg2;
- (void)releaseInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


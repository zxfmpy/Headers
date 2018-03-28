//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTWebViewDelegate-Protocol.h"

@class NSConditionLock, NSString;

@interface RCTWebViewManager : RCTViewManager <RCTWebViewDelegate>
{
    NSConditionLock *_shouldStartLoadLock;
    _Bool _shouldStartLoad;
}

+ (id)__rct_export__1375;
+ (id)__rct_export__1024;
+ (id)__rct_export__903;
+ (id)__rct_export__782;
+ (id)__rct_export__661;
+ (id)__rct_export__540;
+ (id)propConfig_dataDetectorTypes;
+ (id)propConfig_mediaPlaybackRequiresUserAction;
+ (id)propConfig_allowsInlineMediaPlayback;
+ (id)propConfig_onShouldStartLoadWithRequest;
+ (id)propConfig_onMessage;
+ (id)propConfig_onLoadingError;
+ (id)propConfig_onLoadingFinish;
+ (id)propConfig_onLoadingStart;
+ (id)propConfig_automaticallyAdjustContentInsets;
+ (id)propConfig_contentInset;
+ (id)propConfig_injectedJavaScript;
+ (id)propConfig_messagingEnabled;
+ (id)propConfig_scalesPageToFit;
+ (id)propConfig_decelerationRate;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_bounces;
+ (id)propConfig_source;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)startLoadWithResult:(_Bool)arg1 lockIdentifier:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadForRequest:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)postMessage:(id)arg1 message:(id)arg2;
- (void)stopLoading:(id)arg1;
- (void)reload:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

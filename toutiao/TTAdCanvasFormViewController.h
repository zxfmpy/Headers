//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "YSWebViewDelegate-Protocol.h"

@class NSString, SSJSBridgeWebView, SSThemedButton, SSThemedImageView, TTAdAppointAlertScriptModel, TTAdLoadingView, TTAdRetryView, UITapGestureRecognizer;

@interface TTAdCanvasFormViewController : UIViewController <YSWebViewDelegate, UIScrollViewDelegate>
{
    _Bool _needNotification;
    _Bool _keyBoardShow;
    _Bool _needCheckFail;
    TTAdAppointAlertScriptModel *_model;
    SSJSBridgeWebView *_webview;
    UITapGestureRecognizer *_gesture;
    unsigned long long _fromSource;
    SSThemedButton *_cancelButton;
    SSThemedImageView *_cancelImageView;
    TTAdLoadingView *_loadingView;
    TTAdRetryView *_retryView;
}

@property(nonatomic) _Bool needCheckFail; // @synthesize needCheckFail=_needCheckFail;
@property(nonatomic) _Bool keyBoardShow; // @synthesize keyBoardShow=_keyBoardShow;
@property(retain, nonatomic) TTAdRetryView *retryView; // @synthesize retryView=_retryView;
@property(retain, nonatomic) TTAdLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SSThemedImageView *cancelImageView; // @synthesize cancelImageView=_cancelImageView;
@property(retain, nonatomic) SSThemedButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) unsigned long long fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) SSJSBridgeWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) _Bool needNotification; // @synthesize needNotification=_needNotification;
@property(retain, nonatomic) TTAdAppointAlertScriptModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)registerJSBridge;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (struct CGRect)frameforWebView;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)evaluateJavaScriptIfNeeded;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadFormWebView;
- (void)completeWithType:(unsigned long long)arg1;
- (void)cancelTouched:(id)arg1;
- (void)closeViewController;
- (void)buildupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


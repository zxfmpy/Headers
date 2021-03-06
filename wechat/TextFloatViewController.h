//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMRTCMenuResponderDelegate-Protocol.h"
#import "MMRichTextSelectEventDelegate-Protocol.h"
#import "TransitioningAnimationDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class CTRichTextView, CrossfadeAnimationController, MMRichTextCoverView, MMScrollView, NSString, UIButton, UIFont, UIView;
@protocol ILinkEventExt, TextFloatPreviewDelegate;

@interface TextFloatViewController : MMUIViewController <TransitioningAnimationDelegate, MMRTCMenuResponderDelegate, ILinkEventExt, scrollViewDelegate, MMRichTextSelectEventDelegate>
{
    UIView *m_oBackView;
    UIButton *m_view;
    MMScrollView *m_oScrollView;
    CTRichTextView *m_oRichTextView;
    id <ILinkEventExt> m_linkDelegate;
    struct CGPoint m_origin;
    id <TextFloatPreviewDelegate> m_delegate;
    _Bool _bNeedRebuildTextView;
    _Bool m_bHidden;
    MMRichTextCoverView *m_oRichTextCoverView;
    CrossfadeAnimationController *m_transitionInstance;
    _Bool m_allowAutorotate;
    struct CGRect m_originFrame;
    NSString *_nsContent;
    UIFont *_oFont;
    unsigned long long _parserType;
}

@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(nonatomic) __weak id <TextFloatPreviewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getCurrentViewController;
- (id)getScrollView;
- (void)onRichTextViewExit;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillDismiss:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)hideWithAnimate:(_Bool)arg1;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onSingleTap;
- (void)onSingleTapWithPoint:(struct CGPoint)arg1;
- (void)setOriginFrame:(struct CGRect)arg1;
- (void)setContent:(id)arg1;
- (void)updateTextView;
- (void)setLinkDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)showTransitioningAnimationCompleted;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


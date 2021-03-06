//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APSKLaunchpadDelegate-Protocol.h"

@class APSKLaunchpad, FeedbackReportData, NSString, NSTimer, UIButton, UIImage, UIImageView, UIWindow;

@interface ASFeedBackServiceImpl : NSObject <APSKLaunchpadDelegate>
{
    _Bool _isINalipay;
    UIWindow *_feedBackWindow;
    UIButton *_suggestButton;
    UIImage *_screenImage;
    UIImageView *_shareImageView;
    APSKLaunchpad *_launchPad;
    NSTimer *_timer;
    FeedbackReportData *_msg;
    NSString *_feedBackSwitch;
}

@property(retain, nonatomic) NSString *feedBackSwitch; // @synthesize feedBackSwitch=_feedBackSwitch;
@property(nonatomic) _Bool isINalipay; // @synthesize isINalipay=_isINalipay;
@property(retain, nonatomic) FeedbackReportData *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) APSKLaunchpad *launchPad; // @synthesize launchPad=_launchPad;
@property(retain, nonatomic) UIImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
@property(retain, nonatomic) UIImage *screenImage; // @synthesize screenImage=_screenImage;
@property(retain, nonatomic) UIButton *suggestButton; // @synthesize suggestButton=_suggestButton;
@property(retain, nonatomic) UIWindow *feedBackWindow; // @synthesize feedBackWindow=_feedBackWindow;
- (void).cxx_destruct;
- (id)currentShowController;
- (id)currentAppid;
- (long long)timerInterval;
- (_Bool)shouldShowFeedBack;
- (void)hidefeedBackWindow;
- (void)showfeedBackWindow;
- (id)screenshot;
- (void)initMsg;
- (void)getFeedBackMsg;
- (void)submitFeedBack;
- (_Bool)isLoginStatus;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)comeoutAlipay:(id)arg1;
- (void)comeInAlipay:(id)arg1;
- (void)onDestroy;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


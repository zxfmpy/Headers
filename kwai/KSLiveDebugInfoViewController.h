//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KSLiveAudienceDebugInfoViewModel, NSString, UITextView;

@interface KSLiveDebugInfoViewController : UIViewController
{
    _Bool _isFreeCDN;
    NSString *_dnsResolver;
    KSLiveAudienceDebugInfoViewModel *_debugInfoViewModel;
    double _playerStartPrepareTime;
    double _playerPrepareCost;
    double _livePlayerViewDidLoadTime;
    double _livePlayerViewDidLoadToFinishPrepareCost;
    double _livePlayerViewDidLoadToFinishStartPlayCost;
    UITextView *_debugInfoTextView;
}

@property(retain, nonatomic) UITextView *debugInfoTextView; // @synthesize debugInfoTextView=_debugInfoTextView;
@property(nonatomic) double livePlayerViewDidLoadToFinishStartPlayCost; // @synthesize livePlayerViewDidLoadToFinishStartPlayCost=_livePlayerViewDidLoadToFinishStartPlayCost;
@property(nonatomic) double livePlayerViewDidLoadToFinishPrepareCost; // @synthesize livePlayerViewDidLoadToFinishPrepareCost=_livePlayerViewDidLoadToFinishPrepareCost;
@property(nonatomic) double livePlayerViewDidLoadTime; // @synthesize livePlayerViewDidLoadTime=_livePlayerViewDidLoadTime;
@property(nonatomic) double playerPrepareCost; // @synthesize playerPrepareCost=_playerPrepareCost;
@property(nonatomic) double playerStartPrepareTime; // @synthesize playerStartPrepareTime=_playerStartPrepareTime;
@property(retain, nonatomic) KSLiveAudienceDebugInfoViewModel *debugInfoViewModel; // @synthesize debugInfoViewModel=_debugInfoViewModel;
@property(nonatomic) _Bool isFreeCDN; // @synthesize isFreeCDN=_isFreeCDN;
@property(retain, nonatomic) NSString *dnsResolver; // @synthesize dnsResolver=_dnsResolver;
- (void).cxx_destruct;
- (void)updateLiveDebugInfoWithPlayer:(id)arg1 liveURL:(id)arg2;
- (void)startPlayFinished;
- (void)livePlayerViewDidLoaded;
- (void)playerFinishPrepare;
- (void)playerStartPrepare;
- (void)viewDidLoad;

@end


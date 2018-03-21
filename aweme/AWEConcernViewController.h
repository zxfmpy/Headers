//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "AWEVideosCollectionViewAnimationDelegate-Protocol.h"
#import "AWEViewControllerRefreshable-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEFeedCollectionViewController, AWEGradientView, AWEStoryBrowserViewController, NSString;

@interface AWEConcernViewController : UIViewController <BTDRouterViewControllerProtocol, AWEVideosCollectionViewAnimationDelegate, AWEUserMessage, AWEViewControllerRefreshable>
{
    _Bool _isLoading;
    AWEStoryBrowserViewController *_storyBrowserViewController;
    AWEFeedCollectionViewController *_concernViewController;
    AWEGradientView *_gradientBackgroundView;
}

+ (void)load;
@property(retain, nonatomic) AWEGradientView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) AWEFeedCollectionViewController *concernViewController; // @synthesize concernViewController=_concernViewController;
@property(retain, nonatomic) AWEStoryBrowserViewController *storyBrowserViewController; // @synthesize storyBrowserViewController=_storyBrowserViewController;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (id)transitionViewForOffset:(long long)arg1;
@property(readonly, nonatomic) double headerHeight;
- (_Bool)prefersStatusBarHidden;
- (void)setupUI;
- (void)refreshConcernControllerWithCompletionBlock:(CDUnknownBlockType)arg1 isInitialFetch:(_Bool)arg2;
- (void)refreshStoryBrowserWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletionBlock:(CDUnknownBlockType)arg1 isInitialFetch:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRouterParamDict:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

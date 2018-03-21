//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRDBaseViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, TBOUGCEngine, UITableView, UIViewController;
@protocol IUGCContext;

@interface TBOUGCPublisherViewController : TBRDBaseViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    _Bool _isModalViewController;
    _Bool _dimissedAnimated;
    id _notifyName;
    NSArray *_components;
    TBOUGCEngine *_engine;
    id <IUGCContext> _pageContext;
    UIViewController *_sourceViewController;
    CDUnknownBlockType _UGCPublishCallBack;
    UITableView *_tableView;
    id _keyBoardShowObserver;
    id _keyBoardHiddenObserver;
}

@property(retain, nonatomic) id keyBoardHiddenObserver; // @synthesize keyBoardHiddenObserver=_keyBoardHiddenObserver;
@property(retain, nonatomic) id keyBoardShowObserver; // @synthesize keyBoardShowObserver=_keyBoardShowObserver;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType UGCPublishCallBack; // @synthesize UGCPublishCallBack=_UGCPublishCallBack;
@property(readonly, nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) id <IUGCContext> pageContext; // @synthesize pageContext=_pageContext;
@property(readonly, nonatomic) TBOUGCEngine *engine; // @synthesize engine=_engine;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) id notifyName; // @synthesize notifyName=_notifyName;
@property(nonatomic) _Bool dimissedAnimated; // @synthesize dimissedAnimated=_dimissedAnimated;
@property(readonly, nonatomic) _Bool isModalViewController; // @synthesize isModalViewController=_isModalViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onPublish:(id)arg1;
- (id)getAllComponents;
- (void)getSubComponents:(id)arg1 toList:(id)arg2;
- (void)tapAnywhereToDismissKeyboard:(id)arg1;
- (void)setUpForDismissKeyboard;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) NSArray *allComponents;
- (void)onBack;
- (void)viewDidLoad;
- (_Bool)isNeedMore;
- (_Bool)isNeedRefresh;
- (id)initWithEngine:(id)arg1 action:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

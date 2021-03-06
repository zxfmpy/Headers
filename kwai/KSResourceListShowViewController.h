//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSShowViewController.h"

#import "KSResourceListControllerDelegate-Protocol.h"

@class KSResourceListViewController, NSString, UIView;

@interface KSResourceListShowViewController : KSShowViewController <KSResourceListControllerDelegate>
{
    CDUnknownBlockType _didSelectResource;
    CDUnknownBlockType _didClickAddResourceButton;
    CDUnknownBlockType _titleWithResourceAmount;
    CDUnknownBlockType _didSelectAvaliableItem;
    NSString *_resourceNameString;
    KSResourceListViewController *_listViewController;
    UIView *_headView;
    UIView *_bottomView;
    NSString *_tite;
}

@property(retain, nonatomic) NSString *tite; // @synthesize tite=_tite;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) KSResourceListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(retain, nonatomic) NSString *resourceNameString; // @synthesize resourceNameString=_resourceNameString;
@property(copy, nonatomic) CDUnknownBlockType didSelectAvaliableItem; // @synthesize didSelectAvaliableItem=_didSelectAvaliableItem;
@property(copy, nonatomic) CDUnknownBlockType titleWithResourceAmount; // @synthesize titleWithResourceAmount=_titleWithResourceAmount;
@property(copy, nonatomic) CDUnknownBlockType didClickAddResourceButton; // @synthesize didClickAddResourceButton=_didClickAddResourceButton;
@property(copy, nonatomic) CDUnknownBlockType didSelectResource; // @synthesize didSelectResource=_didSelectResource;
- (void).cxx_destruct;
- (void)resourceListViewController:(id)arg1 selectedResouceBecomesAvailable:(id)arg2;
- (void)resourceListViewController:(id)arg1 didSelectResource:(id)arg2;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)onTapBottomView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithResourceListManager:(id)arg1 cellClass:(Class)arg2 tite:(id)arg3;
- (double)contentViewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


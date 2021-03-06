//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSTagAggregateViewController.h"

#import "KSURLPortal-Protocol.h"
#import "KSURLPortalAnnotation-Protocol.h"

@class KSPoi, NSString, UIButton;

@interface KSPoiFeedsViewController : KSTagAggregateViewController <KSURLPortalAnnotation, KSURLPortal>
{
    KSPoi *_poi;
    UIButton *_titleButton;
}

+ (id)ks_portalPath;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) KSPoi *poi; // @synthesize poi=_poi;
- (void).cxx_destruct;
- (id)tagName;
- (id)tagId;
- (int)tagType;
- (id)tagStringType;
- (id)createTitleView;
- (_Bool)shouldAddFeed:(id)arg1;
- (id)createPostViewController;
- (void)configShareContent:(id)arg1;
- (id)createModel;
- (id)createHeaderView;
- (void)addtionProcessWithDetail:(id)arg1 feed:(id)arg2;
- (void)viewDidLoad;
- (void)ks_setupViewControllerWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


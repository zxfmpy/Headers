//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRDynamicPlugin.h"

#import "TTShareManagerDelegate-Protocol.h"

@class NSSet, NSString, TTShareManager;

@interface TTRSharePanel : TTRDynamicPlugin <TTShareManagerDelegate>
{
    TTShareManager *_shareManager;
    NSSet *_shareActivityContentItemTypes;
}

+ (unsigned long long)instanceType;
+ (void)load;
@property(retain, nonatomic) NSSet *shareActivityContentItemTypes; // @synthesize shareActivityContentItemTypes=_shareActivityContentItemTypes;
@property(retain, nonatomic) TTShareManager *shareManager; // @synthesize shareManager=_shareManager;
- (void).cxx_destruct;
- (void)shareManager:(id)arg1 completedWith:(id)arg2 sharePanel:(id)arg3 error:(id)arg4 desc:(id)arg5;
- (void)shareManager:(id)arg1 clickedWith:(id)arg2 sharePanel:(id)arg3;
- (id)platformWithContentItemType:(id)arg1;
- (id)shareContentItemsWithTitle:(id)arg1 content:(id)arg2 thumbImage:(id)arg3 webPageURL:(id)arg4;
- (void)showSharePanelWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 webView:(id)arg3 controller:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

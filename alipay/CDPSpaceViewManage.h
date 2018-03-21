//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CDPSpaceViewManage : NSObject
{
    NSMutableDictionary *_holdSpaceViews;
    NSMutableDictionary *_holdCompletionsDic;
    NSMutableDictionary *_objectViewsDic;
    NSMutableDictionary *_spaceViewHeightDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *spaceViewHeightDic; // @synthesize spaceViewHeightDic=_spaceViewHeightDic;
@property(retain, nonatomic) NSMutableDictionary *objectViewsDic; // @synthesize objectViewsDic=_objectViewsDic;
@property(retain, nonatomic) NSMutableDictionary *holdCompletionsDic; // @synthesize holdCompletionsDic=_holdCompletionsDic;
@property(retain, nonatomic) NSMutableDictionary *holdSpaceViews; // @synthesize holdSpaceViews=_holdSpaceViews;
- (void).cxx_destruct;
- (void)removeSpaceView:(id)arg1 objectId:(id)arg2;
- (void)handleEventForFBView:(id)arg1;
- (void)spaceViewCallBack:(float)arg1 objectId:(id)arg2;
- (void)createSpaceView:(id)arg1 viewController:(id)arg2 completionOnMainThread:(CDUnknownBlockType)arg3;
- (void)addSpaceViewHeight:(float)arg1 spaceCode:(id)arg2;
- (void)addObjectView:(id)arg1 objectId:(id)arg2;
- (void)willDestroy;
- (void)start;

@end

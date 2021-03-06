//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IUGCContext-Protocol.h"

@class NSArray, NSDictionary, NSString, TBTradeComponent;
@protocol IUGCContext;

@interface TBOUGCStandardContext : NSObject <IUGCContext>
{
    _Bool _needMergeData;
    _Bool _isPrepose;
    id <IUGCContext> _parent;
    NSArray<IUGCContext> *_subContexts;
    NSString *_cid;
    NSString *_type;
    NSString *_tag;
    NSDictionary *_userInfo;
    NSDictionary *_style;
    NSDictionary *_data;
    NSDictionary *_userData;
    NSDictionary *_publishData;
    TBTradeComponent *_c;
    NSString *_preposeUrl;
}

@property(readonly, nonatomic) TBTradeComponent *c; // @synthesize c=_c;
@property(readonly, nonatomic) _Bool isPrepose; // @synthesize isPrepose=_isPrepose;
@property(retain, nonatomic) NSDictionary *publishData; // @synthesize publishData=_publishData;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSArray<IUGCContext> *subContexts; // @synthesize subContexts=_subContexts;
@property(readonly, nonatomic) __weak id <IUGCContext> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *preposeUrl; // @synthesize preposeUrl=_preposeUrl;
- (id)initWithComponet:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCPluginBaseProtocol-Protocol.h"

@class NSDictionary, NSString;
@protocol MCPluginChatPageContextProtocol;

@interface MCGroupChatPluginCenter : NSObject <MCPluginBaseProtocol>
{
    NSString *_ccode;
    id <MCPluginChatPageContextProtocol> _chatPageContext;
    NSString *_pageName;
}

@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) id <MCPluginChatPageContextProtocol> chatPageContext; // @synthesize chatPageContext=_chatPageContext;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
- (void).cxx_destruct;
- (void)processPage:(id)arg1;
- (id)getKey;
- (id)getPageName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithSessionID:(id)arg1 pageName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end


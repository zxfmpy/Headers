//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBShopRequest-Protocol.h"

@class NSDictionary, NSString;

@interface TBShopLoftRequest : NSObject <TBShopRequest>
{
    NSString *_sellerId;
    NSDictionary *_bizParams;
    NSString *_shopId;
    NSString *_loftPageId;
    CDUnknownBlockType _fetchHandler;
}

@property(copy, nonatomic) CDUnknownBlockType fetchHandler; // @synthesize fetchHandler=_fetchHandler;
@property(retain, nonatomic) NSString *loftPageId; // @synthesize loftPageId=_loftPageId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSDictionary *bizParams; // @synthesize bizParams=_bizParams;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
- (void).cxx_destruct;
- (id)generateMtopRequest;
@property(retain, nonatomic) NSString *apiVersion;
@property(retain, nonatomic) NSString *api;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


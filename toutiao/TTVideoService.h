//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTService-Protocol.h"

@class NSString;

@interface TTVideoService : NSObject <TTService>
{
    long long _apiType;
}

@property(nonatomic) long long apiType; // @synthesize apiType=_apiType;
- (void)cancelRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


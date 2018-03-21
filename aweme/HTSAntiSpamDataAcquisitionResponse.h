//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface HTSAntiSpamDataAcquisitionResponse : MTLModel <MTLJSONSerializing>
{
    long long _statusCode;
    double _nextInterval;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double nextInterval; // @synthesize nextInterval=_nextInterval;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

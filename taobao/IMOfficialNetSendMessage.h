//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSDictionary;

@interface IMOfficialNetSendMessage : AMPNetPacket
{
    _Bool _isRetry;
    NSDictionary *_messageJson;
}

@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(retain, nonatomic) NSDictionary *messageJson; // @synthesize messageJson=_messageJson;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithMessageJson:(id)arg1 isRetry:(_Bool)arg2;

@end


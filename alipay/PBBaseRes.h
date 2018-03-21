//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface PBBaseRes : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResultCode;
    _Bool _hasResultMsg;
    int _resultCode;
    NSString *_resultMsg;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(readonly) _Bool hasResultMsg; // @synthesize hasResultMsg=_hasResultMsg;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

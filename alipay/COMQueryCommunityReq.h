//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class COMCOMLocationInfo, NSString;

@interface COMQueryCommunityReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizType; // @dynamic bizType;
@property(nonatomic) _Bool cache; // @dynamic cache;
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) NSString *encodedJsonExtData; // @dynamic encodedJsonExtData;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasCache; // @dynamic hasCache;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasEncodedJsonExtData; // @dynamic hasEncodedJsonExtData;
@property(readonly) _Bool hasRealLocation; // @dynamic hasRealLocation;
@property(readonly) _Bool hasSourceId; // @dynamic hasSourceId;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) COMCOMLocationInfo *realLocation; // @dynamic realLocation;
@property(retain, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(nonatomic) int version; // @dynamic version;

@end

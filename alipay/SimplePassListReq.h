//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface SimplePassListReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *cityAdCode; // @dynamic cityAdCode;
@property(retain, nonatomic) NSString *dtLogMonitor; // @dynamic dtLogMonitor;
@property(retain, nonatomic) NSString *extParam; // @dynamic extParam;
@property(readonly) _Bool hasCityAdCode; // @dynamic hasCityAdCode;
@property(readonly) _Bool hasDtLogMonitor; // @dynamic hasDtLogMonitor;
@property(readonly) _Bool hasExtParam; // @dynamic hasExtParam;
@property(readonly) _Bool hasIsFromMsg; // @dynamic hasIsFromMsg;
@property(readonly) _Bool hasLatitude; // @dynamic hasLatitude;
@property(readonly) _Bool hasLongitude; // @dynamic hasLongitude;
@property(readonly) _Bool hasPageSize; // @dynamic hasPageSize;
@property(readonly) _Bool hasRowSize; // @dynamic hasRowSize;
@property(readonly) _Bool hasTimeStatus; // @dynamic hasTimeStatus;
@property(readonly) _Bool hasUpdateFlag; // @dynamic hasUpdateFlag;
@property(nonatomic) _Bool isFromMsg; // @dynamic isFromMsg;
@property(retain, nonatomic) NSString *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *longitude; // @dynamic longitude;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(nonatomic) int rowSize; // @dynamic rowSize;
@property(retain, nonatomic) NSString *timeStatus; // @dynamic timeStatus;
@property(retain, nonatomic) NSString *updateFlag; // @dynamic updateFlag;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class NSString;

@interface GMSx_IncidentMetadata : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *captionText; // @dynamic captionText;
@property(retain, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasCaptionText; // @dynamic hasCaptionText;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasIncidentId; // @dynamic hasIncidentId;
@property(nonatomic) _Bool hasIncidentType; // @dynamic hasIncidentType;
@property(nonatomic) unsigned long long incidentId; // @dynamic incidentId;
@property(nonatomic) int incidentType; // @dynamic incidentType;

@end


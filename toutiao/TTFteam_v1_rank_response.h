//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, TTFTeamItem;

@interface TTFteam_v1_rank_response : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long bonus; // @dynamic bonus;
@property(nonatomic) int errNo; // @dynamic errNo;
@property(copy, nonatomic) NSString *errTips; // @dynamic errTips;
@property(nonatomic) _Bool hasUserTeam; // @dynamic hasUserTeam;
@property(retain, nonatomic) NSMutableArray *rankItemArray; // @dynamic rankItemArray;
@property(readonly, nonatomic) unsigned long long rankItemArray_Count; // @dynamic rankItemArray_Count;
@property(nonatomic) long long totalTeamCount; // @dynamic totalTeamCount;
@property(retain, nonatomic) TTFTeamItem *userTeam; // @dynamic userTeam;

@end

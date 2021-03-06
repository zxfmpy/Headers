//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TeamInfo : NSObject
{
    unsigned int _member_count;
    unsigned int _status;
    unsigned int _total_Count;
    unsigned int _leaderStatus;
    NSString *_invite_src;
    unsigned long long _invite_type;
    NSString *_team_id;
    unsigned long long _expire;
    unsigned long long _createMsgTime;
    unsigned long long _buildTeamTime;
    NSString *_leaderUin;
    NSMutableArray *_inviteList;
}

@property(retain, nonatomic) NSMutableArray *inviteList; // @synthesize inviteList=_inviteList;
@property(nonatomic) unsigned int leaderStatus; // @synthesize leaderStatus=_leaderStatus;
@property(copy, nonatomic) NSString *leaderUin; // @synthesize leaderUin=_leaderUin;
@property(nonatomic) unsigned long long buildTeamTime; // @synthesize buildTeamTime=_buildTeamTime;
@property(nonatomic) unsigned long long createMsgTime; // @synthesize createMsgTime=_createMsgTime;
@property(nonatomic) unsigned long long expire; // @synthesize expire=_expire;
@property(nonatomic) unsigned int total_Count; // @synthesize total_Count=_total_Count;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int member_count; // @synthesize member_count=_member_count;
@property(copy, nonatomic) NSString *team_id; // @synthesize team_id=_team_id;
@property(nonatomic) unsigned long long invite_type; // @synthesize invite_type=_invite_type;
@property(copy, nonatomic) NSString *invite_src; // @synthesize invite_src=_invite_src;
- (id)getBuleTipsText;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end


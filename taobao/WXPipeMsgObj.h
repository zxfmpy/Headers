//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface WXPipeMsgObj : NSObject
{
    NSString *_prefix;
    NSString *_tmpData;
    NSNumber *_tmpId;
    NSString *_title;
    NSString *_summary;
    NSString *_icon;
    NSString *_groupId;
    NSNumber *_groupType;
    NSDate *_expireTime;
    NSString *_action;
    NSString *_usertrackArgs;
    NSString *_data;
    NSDate *_recvMsgTime;
}

@property(retain, nonatomic) NSDate *recvMsgTime; // @synthesize recvMsgTime=_recvMsgTime;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *usertrackArgs; // @synthesize usertrackArgs=_usertrackArgs;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSNumber *groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *tmpId; // @synthesize tmpId=_tmpId;
@property(retain, nonatomic) NSString *tmpData; // @synthesize tmpData=_tmpData;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;

@end

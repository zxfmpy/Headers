//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface ValueAddedServiceNumRedPath : NSObject <NSCoding, NSCopying>
{
    NSString *_path;
    NSString *_missionid;
    unsigned long long _msgid;
    long long _msg_status;
    long long _expire_time;
    long long _push_num_red_ts;
    long long _modify_ts;
    int _xo;
}

- (void).cxx_destruct;
- (void)resetModifyTime;
- (void)mergeWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(nonatomic) long long expire_time; // @dynamic expire_time;
@property(retain, nonatomic) NSString *missionid; // @dynamic missionid;
@property(nonatomic) long long modify_ts; // @dynamic modify_ts;
@property(nonatomic) long long msg_status; // @dynamic msg_status;
@property(nonatomic) unsigned long long msgid; // @dynamic msgid;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) long long push_num_red_ts; // @dynamic push_num_red_ts;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class LiveUserModel, MessageCommon, NSNumber, NSString;

@interface MemberMessage : MTLModel <MTLJSONSerializing>
{
    _Bool _isTopUser;
    _Bool _isSetToAdmin;
    MessageCommon *_commonMode;
    NSNumber *_memberCount;
    LiveUserModel *_user;
    LiveUserModel *_operatorUser;
    NSNumber *_rankScore;
    NSNumber *_topUserNo;
    long long _action;
    NSNumber *_enterType;
    NSString *_describe;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *describe; // @synthesize describe=_describe;
@property(retain, nonatomic) NSNumber *enterType; // @synthesize enterType=_enterType;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSNumber *topUserNo; // @synthesize topUserNo=_topUserNo;
@property(retain, nonatomic) NSNumber *rankScore; // @synthesize rankScore=_rankScore;
@property(nonatomic) _Bool isSetToAdmin; // @synthesize isSetToAdmin=_isSetToAdmin;
@property(nonatomic) _Bool isTopUser; // @synthesize isTopUser=_isTopUser;
@property(retain, nonatomic) LiveUserModel *operatorUser; // @synthesize operatorUser=_operatorUser;
@property(retain, nonatomic) LiveUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *memberCount; // @synthesize memberCount=_memberCount;
@property(retain, nonatomic) MessageCommon *commonMode; // @synthesize commonMode=_commonMode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

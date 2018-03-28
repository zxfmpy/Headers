//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface TTGroupModel : NSObject <NSCoding>
{
    NSString *_itemID;
    NSString *_groupID;
    NSString *_impressionID;
    long long _aggrType;
    long long _style;
    long long _subStyle;
}

@property(nonatomic) long long subStyle; // @synthesize subStyle=_subStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)replyImpressionDescription;
- (id)impressionDescription;
- (void)refreshGroupID:(id)arg1 itemID:(id)arg2 impressionID:(id)arg3 aggrType:(long long)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupID:(id)arg1 itemID:(id)arg2 impressionID:(id)arg3 aggrType:(long long)arg4;
- (id)initWithGroupID:(id)arg1;

@end

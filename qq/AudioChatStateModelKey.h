//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@interface AudioChatStateModelKey : NSObject <NSCopying>
{
    int _relationType;
    int _businessType;
    unsigned long long _relationID;
    unsigned long long _selfHash;
}

@property(nonatomic) unsigned long long selfHash; // @synthesize selfHash=_selfHash;
@property(nonatomic) unsigned long long relationID; // @synthesize relationID=_relationID;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) int relationType; // @synthesize relationType=_relationType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MJCoding-Protocol.h"

@class NSString;

@interface MBKCarDeposit : NSObject <MJCoding>
{
    _Bool _isShareCarDepositVisibleForUser;
    NSString *_deposit;
    long long _depositStatus;
}

@property(nonatomic) long long depositStatus; // @synthesize depositStatus=_depositStatus;
@property(nonatomic) _Bool isShareCarDepositVisibleForUser; // @synthesize isShareCarDepositVisibleForUser=_isShareCarDepositVisibleForUser;
@property(copy, nonatomic) NSString *deposit; // @synthesize deposit=_deposit;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


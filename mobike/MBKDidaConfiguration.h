//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKDidaConfiguration : NSObject
{
    long long _intercityMaxThanksFee;
    long long _intercityRideTimeRange;
    long long _intercityThanksFeeStep;
    long long _maxThanksFee;
    long long _rideTimeRange;
    long long _rideTimeScaleMins;
    long long _singleRideMaxPerson;
    long long _thanksFeeStep;
    NSString *_priceUrl;
    NSString *_ruleUrl;
}

@property(copy, nonatomic) NSString *ruleUrl; // @synthesize ruleUrl=_ruleUrl;
@property(copy, nonatomic) NSString *priceUrl; // @synthesize priceUrl=_priceUrl;
@property(nonatomic) long long thanksFeeStep; // @synthesize thanksFeeStep=_thanksFeeStep;
@property(nonatomic) long long singleRideMaxPerson; // @synthesize singleRideMaxPerson=_singleRideMaxPerson;
@property(nonatomic) long long rideTimeScaleMins; // @synthesize rideTimeScaleMins=_rideTimeScaleMins;
@property(nonatomic) long long rideTimeRange; // @synthesize rideTimeRange=_rideTimeRange;
@property(nonatomic) long long maxThanksFee; // @synthesize maxThanksFee=_maxThanksFee;
@property(nonatomic) long long intercityThanksFeeStep; // @synthesize intercityThanksFeeStep=_intercityThanksFeeStep;
@property(nonatomic) long long intercityRideTimeRange; // @synthesize intercityRideTimeRange=_intercityRideTimeRange;
@property(nonatomic) long long intercityMaxThanksFee; // @synthesize intercityMaxThanksFee=_intercityMaxThanksFee;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

@end


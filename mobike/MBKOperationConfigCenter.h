//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKCarPoolOperationConfig, MBKLimoOperationConfig, MBKTaxiOperationConfig;

@interface MBKOperationConfigCenter : NSObject
{
    MBKLimoOperationConfig *_premierOperationConfig;
    MBKCarPoolOperationConfig *_carpoolOperationConfig;
    MBKTaxiOperationConfig *_taxiOperationConfig;
}

+ (id)defaultCenter;
@property(retain, nonatomic) MBKTaxiOperationConfig *taxiOperationConfig; // @synthesize taxiOperationConfig=_taxiOperationConfig;
@property(retain, nonatomic) MBKCarPoolOperationConfig *carpoolOperationConfig; // @synthesize carpoolOperationConfig=_carpoolOperationConfig;
@property(retain, nonatomic) MBKLimoOperationConfig *premierOperationConfig; // @synthesize premierOperationConfig=_premierOperationConfig;
- (void).cxx_destruct;
- (void)updateTaxiOperationConfig;
- (void)updateLimoOperationConfig;
- (void)updateCarPoolOperationConfig;

@end

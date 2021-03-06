//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSClearcutRequestGenerator, NSDate;

@interface GMSClearcutClient : NSObject
{
    GMSClearcutRequestGenerator *_requestGenerator;
    CDUnknownBlockType _customLogEventFunc;
    NSDate *_timeOfLastKeyFetch;
    unsigned long long _queryLogSamplingDenominator;
}

+ (void)useClearcutEndpoint:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long queryLogSamplingDenominator; // @synthesize queryLogSamplingDenominator=_queryLogSamplingDenominator;
- (void).cxx_destruct;
- (void)logRequestNearbyAlertsForPlaceIDs;
- (void)logPlacePickerResult:(id)arg1 bounds:(id)arg2;
- (void)logCurrentPlaceWithLocation:(CDStruct_c3b9c2ee)arg1;
- (void)logCurrentPlace;
- (void)logLoadPhotoAtIndex:(long long)arg1 wasCached:(_Bool)arg2;
- (void)logLookUpPhotosForPlaceID;
- (void)logLookUpPlaceID:(id)arg1;
- (void)logAutocompleteWidgetSession:(id)arg1;
- (void)logAutocompleteQuery:(id)arg1 bounds:(id)arg2 filter:(id)arg3 requestSource:(id)arg4;
- (void)logAccessToGMSPlaceWithId:(id)arg1 propertyName:(id)arg2;
- (void)sendPlaceReport;
- (void)usePlatformKey:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)installLogEventFunc:(CDUnknownBlockType)arg1;
- (id)init;

@end


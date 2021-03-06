//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TencentLBSNetworkController : NSObject
{
    _Bool _useHttp;
    _Bool _startBeacon;
    _Bool _writeLog;
    _Bool _uploadLog;
    _Bool _load;
    _Bool _request;
    double _postTimeInterval;
    double _applistDayInterval;
    double _beaconTimeInterval;
    NSMutableArray *_rangedRegions;
    NSArray *_beaconUUIDs;
    NSString *_path;
    NSString *_file;
    NSMutableDictionary *_controller;
}

+ (id)decodeData:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (id)aes_encrypt:(id)arg1;
+ (id)aes_decrypt:(id)arg1;
+ (id)decryptAes:(id)arg1;
+ (id)encryptAes:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool request; // @synthesize request=_request;
@property(nonatomic) _Bool load; // @synthesize load=_load;
@property(retain) NSMutableDictionary *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSArray *beaconUUIDs; // @synthesize beaconUUIDs=_beaconUUIDs;
@property(retain, nonatomic) NSMutableArray *rangedRegions; // @synthesize rangedRegions=_rangedRegions;
@property(nonatomic) _Bool uploadLog; // @synthesize uploadLog=_uploadLog;
@property(nonatomic) _Bool writeLog; // @synthesize writeLog=_writeLog;
@property(nonatomic) double beaconTimeInterval; // @synthesize beaconTimeInterval=_beaconTimeInterval;
@property(nonatomic) _Bool startBeacon; // @synthesize startBeacon=_startBeacon;
@property(nonatomic) double applistDayInterval; // @synthesize applistDayInterval=_applistDayInterval;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(nonatomic) double postTimeInterval; // @synthesize postTimeInterval=_postTimeInterval;
- (void).cxx_destruct;
- (void)updateCC:(id)arg1;
- (id)getControllerDictionary;
- (void)requestCC;
- (void)loadCC;
- (id)init;

@end


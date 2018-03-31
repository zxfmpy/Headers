//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ZCSerializableProtocol-Protocol.h"

@class NSString;

@interface ZCacheConfig : NSObject <ZCSerializableProtocol>
{
    NSString *_version;
    long long _type;
    unsigned long long _env;
    NSString *_locale;
    double _lastFullUpdate;
}

+ (id)currentConfig;
+ (id)keyPathsForProperties;
@property(nonatomic) double lastFullUpdate; // @synthesize lastFullUpdate=_lastFullUpdate;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned long long env; // @synthesize env=_env;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)dumpProperty:(id)arg1 withValue:(id)arg2 maxLength:(unsigned long long)arg3;
@property(readonly, copy) NSString *description;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithVersion:(id)arg1 withType:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

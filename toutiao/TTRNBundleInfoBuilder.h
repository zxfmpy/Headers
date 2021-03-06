//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TTRNBundleInfoBuilder : NSObject
{
    NSString *_bundleUrl;
    NSString *_version;
    NSString *_md5;
    NSString *_fallbackUrl;
    NSString *_rnMinVersion;
    NSString *_bundleNameInApp;
    NSString *_bitmask;
    NSNumber *_dirty;
    NSString *_patchUrl;
    NSString *_patchMD5;
}

+ (id)builderWithInfo:(id)arg1;
@property(copy, nonatomic) NSString *patchMD5; // @synthesize patchMD5=_patchMD5;
@property(copy, nonatomic) NSString *patchUrl; // @synthesize patchUrl=_patchUrl;
@property(copy, nonatomic) NSNumber *dirty; // @synthesize dirty=_dirty;
@property(copy, nonatomic) NSString *bitmask; // @synthesize bitmask=_bitmask;
@property(copy, nonatomic) NSString *bundleNameInApp; // @synthesize bundleNameInApp=_bundleNameInApp;
@property(copy, nonatomic) NSString *rnMinVersion; // @synthesize rnMinVersion=_rnMinVersion;
@property(copy, nonatomic) NSString *fallbackUrl; // @synthesize fallbackUrl=_fallbackUrl;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *bundleUrl; // @synthesize bundleUrl=_bundleUrl;
- (void).cxx_destruct;
- (id)info;

@end


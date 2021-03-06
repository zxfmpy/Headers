//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKOperationCardConfig, NSArray, NSDictionary;

@interface MBKLimoOperationConfig : NSObject
{
    NSArray *_banner;
    NSArray *_carConfigures;
    NSDictionary *_carConfigureDic;
}

+ (id)currentConfig;
+ (id)jsonKeyToPropertyNameMap;
+ (id)jsonKeyToClassNameMap;
@property(readonly, nonatomic) NSDictionary *carConfigureDic; // @synthesize carConfigureDic=_carConfigureDic;
@property(retain, nonatomic) NSArray *carConfigures; // @synthesize carConfigures=_carConfigures;
@property(retain, nonatomic) NSArray *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (id)carImageURLString:(unsigned long long)arg1;
@property(readonly, nonatomic) MBKOperationCardConfig *defaultBanner;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ImageCacheOptions;

@interface CacheInfoForPhasset : NSObject
{
    ImageCacheOptions *_cacheOptions;
    unsigned long long _type;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) ImageCacheOptions *cacheOptions; // @synthesize cacheOptions=_cacheOptions;
- (void).cxx_destruct;

@end


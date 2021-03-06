//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZCoverDataManager : NSObject
{
}

+ (id)sharedInstance;
- (void)preloadCoverImage;
- (id)loadDefaultQQCover;
- (_Bool)isCurrentHybridCover:(long long)arg1 coverRefer:(id)arg2;
- (_Bool)needUpdateCoverData:(id)arg1 coverRefer:(id)arg2;
- (void)setCoverInfo:(id)arg1 uinString:(id)arg2 forceWrite:(_Bool)arg3 coverRefer:(id)arg4;
- (void)setCoverInfo:(id)arg1 forceWrite:(_Bool)arg2 coverRefer:(id)arg3;
- (void)setCoverInfo:(id)arg1 coverRefer:(id)arg2;
- (void)setCoverInfoForFeed:(id)arg1 coverRefer:(id)arg2;
- (id)getCoverInfoWithUinString:(id)arg1 coverRefer:(id)arg2;
- (id)getCoverInfoWithUin:(long long)arg1 coverRefer:(id)arg2;
- (id)cacheKey:(id)arg1;

@end


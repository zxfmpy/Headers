//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBFavContentRequestModel : NSObject
{
}

- (void)isFavContentForType:(unsigned long long)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchFavContentsByPageNo:(unsigned long long)arg1 size:(unsigned long long)arg2 bizID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteFavContentBySourceId:(id)arg1 itemId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addFavContentForType:(unsigned long long)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SocialPlugin-Protocol.h"

@class NSDictionary;

@protocol CardStorageSyncPlugin <SocialPlugin>

@optional
- (NSDictionary *)convertToSOHomeCardInfoWithTopFeedSyncData:(id)arg1;
- (NSDictionary *)convertToSOHomeCardInfoWithFeedSyncData:(id)arg1;
@end

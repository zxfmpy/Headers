//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class APLinkCardItem, NSString;

@protocol HiChatService <DTService>
- (void)cleanCachedData;
- (void)autoCheckClipboardLink;
- (void)queryLinkCardWithLink:(NSString *)arg1 jsLinkCardItem:(APLinkCardItem *)arg2 detectLink:(_Bool)arg3 bizType:(NSString *)arg4 owner:(id)arg5 callback:(void (^)(APLinkCardItem *))arg6;
- (void)queryLinkCardWithLink:(NSString *)arg1 detectLink:(_Bool)arg2 bizType:(NSString *)arg3 owner:(id)arg4 callback:(void (^)(APLinkCardItem *))arg5;
@end

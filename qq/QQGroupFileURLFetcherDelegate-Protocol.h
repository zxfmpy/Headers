//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSError, NSString, NSURL;

@protocol QQGroupFileURLFetcherDelegate <NSObject>
- (void)groupFileURLFetcher:(id)arg1 didFailWithError:(NSError *)arg2;
- (void)groupFileURLFetcher:(id)arg1 didFetcherURL:(NSURL *)arg2 cookie:(NSString *)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

@class NSString, NSURLRequest;
@protocol UIWebViewDelegate;

@interface UIWebView (HybridWeb_Private)
- (_Bool)qzhw_useSerialLoading;
@property(retain, nonatomic) NSURLRequest *qzhw_pendingRequest;
@property(nonatomic) _Bool qzhw_isLoading;
@property(nonatomic) __weak id <UIWebViewDelegate> qzhw_originDelegate;
@property(copy, nonatomic) NSString *qzhw_wnshtmlKey;
@property(nonatomic) _Bool qzhw_hasRegWnshtmlNoti;
@end


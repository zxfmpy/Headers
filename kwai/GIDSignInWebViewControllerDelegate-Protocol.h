//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIDSignInWebViewController, NSError, NSURL;

@protocol GIDSignInWebViewControllerDelegate <NSObject>
- (void)signInWebViewControllerDidComplete:(GIDSignInWebViewController *)arg1 withURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)signInWebViewControllerNeedsDismissing:(GIDSignInWebViewController *)arg1;
- (_Bool)signInWebViewController:(GIDSignInWebViewController *)arg1 shouldKeepLSOCookiesForAuthResponseURL:(NSURL *)arg2;
- (_Bool)signInWebViewController:(GIDSignInWebViewController *)arg1 shouldTreatURLAsAuthResponse:(NSURL *)arg2;
@end


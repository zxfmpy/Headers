//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSDate, NSMutableData, NSString;
@protocol NaverThirdPartyLoginConnectionDelegate;

@interface NaverThirdPartyLoginConnection : NSObject <UIAlertViewDelegate>
{
    _Bool _isNaverAppOauthEnable;
    _Bool _isInAppOauthEnable;
    _Bool _isOnlyPortraitSupportedInIphone;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_appName;
    NSString *_serviceUrlScheme;
    NSString *_authCode;
    NSString *_accessToken;
    NSDate *_accessTokenExpireDate;
    NSString *_refreshToken;
    NSString *_tokenType;
    NSString *_oneTimeStateCode;
    NSMutableData *_recvData;
    _Bool _isBusy;
    id <NaverThirdPartyLoginConnectionDelegate> _delegate;
}

+ (struct CGSize)sizeWithText:(id)arg1 withFont:(id)arg2;
+ (id)getSharedInstance;
@property(nonatomic) __weak id <NaverThirdPartyLoginConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *serviceUrlScheme; // @synthesize serviceUrlScheme=_serviceUrlScheme;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool isInAppOauthEnable; // @synthesize isInAppOauthEnable=_isInAppOauthEnable;
@property(nonatomic) _Bool isNaverAppOauthEnable; // @synthesize isNaverAppOauthEnable=_isNaverAppOauthEnable;
@property(retain, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSDate *accessTokenExpireDate; // @synthesize accessTokenExpireDate=_accessTokenExpireDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(retain, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (void).cxx_destruct;
- (id)userAgentForThirdPartyLogin;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openAppStoreForNaverApp;
- (_Bool)isOnlyPortraitSupportedInIphone;
- (void)setOnlyPortraitSupportInIphone:(_Bool)arg1;
- (void)removeNaverLoginCookie;
- (id)parameterValueWithUrl:(id)arg1 paramName:(id)arg2;
- (void)loginFailWithErrorCode:(int)arg1;
- (id)getSignatureString:(id)arg1 consumerSecret:(id)arg2 tokenKey:(id)arg3;
- (id)getParameter:(id)arg1 consumerSecret:(id)arg2 token:(id)arg3;
- (int)receiveAccessToken:(id)arg1;
- (void)requestThirdPartyLogin;
- (_Bool)isNullUrlScheme;
- (void)openNaverAppForOAuth;
- (_Bool)isNotSupportedOldNaverApp;
- (_Bool)isPossibleToOpenNaverApp;
- (id)currentLanguage;
- (id)getVersion;
- (void)didFailRequest:(id)arg1 withDescription:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (int)state;
- (void)requestUrlConnectionWithUrl:(id)arg1 requestKey:(int)arg2;
- (void)urlConnectionWithType:(int)arg1;
- (void)didFinishWithDataForJSSONParser:(id)arg1 withRequestKey:(int)arg2;
- (void)failWithGetAuthCode:(id)arg1 withDescription:(id)arg2;
- (void)setOneTimeStateCode:(id)arg1;
- (id)makeNewOneTimeStateCode;
- (id)urlRequestForAuthorizeCode;
- (id)osVersion;
- (void)requestDeleteToken;
- (void)requestAccessTokenWithRefreshToken;
- (void)requestRequestCodeByInApp;
- (void)setAuthorizationCode:(id)arg1;
- (void)requestAccessTokenWithAuthCode;
- (id)urlEncodeWithURLValidCharacters:(id)arg1;
- (_Bool)isValidAccessTokenExpireTimeNow;
- (_Bool)validOneTimeStateCode:(id)arg1;
- (void)resetToken;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


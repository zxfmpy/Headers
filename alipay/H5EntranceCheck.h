//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTRpcAsyncCaller, NSMutableDictionary, NSString;

@interface H5EntranceCheck : NSObject
{
    DTRpcAsyncCaller *_entranceCheckRpc;
    _Bool _isNeededSsoLogin;
    NSString *_targetUrl;
    NSString *_domainWhiteListTag;
    NSString *_jsapiListTag;
    NSMutableDictionary *_entranceCheckInfo;
}

@property(nonatomic) _Bool isNeededSsoLogin; // @synthesize isNeededSsoLogin=_isNeededSsoLogin;
@property(retain, nonatomic) NSMutableDictionary *entranceCheckInfo; // @synthesize entranceCheckInfo=_entranceCheckInfo;
@property(copy, nonatomic) NSString *jsapiListTag; // @synthesize jsapiListTag=_jsapiListTag;
@property(copy, nonatomic) NSString *domainWhiteListTag; // @synthesize domainWhiteListTag=_domainWhiteListTag;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
- (void).cxx_destruct;
- (id)jsApiListForPublicId:(id)arg1;
- (id)inputBoxWhitelistForPublicId:(id)arg1;
- (void)dealloc;
- (id)init;

@end


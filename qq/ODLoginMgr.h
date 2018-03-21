//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, ODLoginObserver, ODPBLogin;

@interface ODLoginMgr : NSObject
{
    double _loginStartTime;
    _Bool _isLoginOK;
    _Bool _isLogining;
    int _loginType;
    int _authAppId;
    unsigned long long _userId;
    unsigned long long _tinyId;
    NSString *_userSig;
    unsigned long long _uin;
    NSString *_openId;
    NSString *_authKey;
    NSString *_fromId;
    ODLoginObserver *_observer;
    ODPBLogin *_pbLoginLogic;
}

@property(retain, nonatomic) ODPBLogin *pbLoginLogic; // @synthesize pbLoginLogic=_pbLoginLogic;
@property(retain, nonatomic) ODLoginObserver *observer; // @synthesize observer=_observer;
@property(copy, nonatomic) NSString *fromId; // @synthesize fromId=_fromId;
@property(copy, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(readonly, nonatomic) int authAppId; // @synthesize authAppId=_authAppId;
@property(readonly, nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(nonatomic) _Bool isLogining; // @synthesize isLogining=_isLogining;
@property(nonatomic) _Bool isLoginOK; // @synthesize isLoginOK=_isLoginOK;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(nonatomic) unsigned long long tinyId; // @synthesize tinyId=_tinyId;
@property(readonly, nonatomic) unsigned long long userId; // @synthesize userId=_userId;

@end

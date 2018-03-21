//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSError, NSString, YWPerson;

@protocol IYWLoginService <NSObject>
@property(copy, nonatomic) CDUnknownBlockType shouldAutoReconnectBlock;
@property(nonatomic) _Bool needCloseAutoBindAlias;
@property(nonatomic) _Bool needClosePush;
@property(copy, nonatomic) NSDictionary *defaultLoginClientData;
@property(readonly, copy, nonatomic) NSError *lastConnectionError;
@property(readonly, copy, nonatomic) CDUnknownBlockType fetchLoginInfoBlockV2;
@property(readonly, copy, nonatomic) CDUnknownBlockType fetchLoginInfoBlock;
@property(copy, nonatomic) NSString *currentLoginedUserDisplayName;
@property(readonly, nonatomic) NSString *currentLoginedUserId;
@property(readonly, nonatomic) unsigned long long connectionStatus;
@property(readonly, nonatomic) _Bool isCurrentLogined;
- (void)manualReconnect;
- (_Bool)isWXTokenAvailableForUserId:(NSString *)arg1;
- (NSDate *)getServerTime;
- (_Bool)hasLoginThread;
- (void)mannualDisconnect;
- (void)asyncLogoutWithCompletionBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (_Bool)asyncLoginWithCompletionBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)resetPreLogin;
- (_Bool)preLoginWithPerson:(YWPerson *)arg1;
- (void)removeConnectionStatusChangedBlockForKey:(NSString *)arg1;
- (void)addConnectionStatusChangedBlock:(void (^)(unsigned long long, NSError *))arg1 forKey:(NSString *)arg2 ofPriority:(unsigned long long)arg3;
- (void)setFetchLoginInfoBlockV2:(void (^)(void (^)(_Bool, NSString *, NSString *, unsigned long long, NSString *, NSDictionary *)))arg1;
- (void)setFetchLoginInfoBlock:(void (^)(void (^)(_Bool, NSString *, NSString *, NSString *, NSDictionary *)))arg1;
- (YWPerson *)currentLoginedUser;
@end

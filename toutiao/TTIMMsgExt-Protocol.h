//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, TTIMChatMessage;

@protocol TTIMMsgExt <NSObject>

@optional
- (void)onChat:(NSString *)arg1 unreadCount:(int)arg2;
- (void)onMsgCenterQuery:(NSDictionary *)arg1;
- (void)onReaded:(NSString *)arg1 msg:(TTIMChatMessage *)arg2;
- (void)onQuery:(NSString *)arg1 lastMsg:(TTIMChatMessage *)arg2;
- (void)onQueryMsg:(NSString *)arg1 msgs:(NSArray *)arg2;
- (void)onDelTalbe:(NSString *)arg1 isDel:(_Bool)arg2;
- (void)onDel:(NSString *)arg1 msgs:(NSArray *)arg2;
- (void)onGet:(NSString *)arg1 msgs:(NSArray *)arg2;
- (void)onSendAck:(NSString *)arg1 msg:(TTIMChatMessage *)arg2;
- (void)onUpdate:(NSString *)arg1 msg:(TTIMChatMessage *)arg2;
- (void)onAdd:(NSString *)arg1 msg:(TTIMChatMessage *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol SpriteRelayAgentCallback <NSObject>
- (void)onErrorOccur:(NSString *)arg1 seq:(int)arg2 errorCode:(int)arg3;
- (void)onRespondReceive:(char *)arg1 length:(int)arg2 cmd:(NSString *)arg3 seq:(int)arg4;
@end

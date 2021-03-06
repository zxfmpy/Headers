//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTFRevivalTaskProtocol-Protocol.h"

@protocol TTFRevivalTaskDelegate;

@interface TTFRevivalTaskBridge : NSObject <TTFRevivalTaskProtocol>
{
    id <TTFRevivalTaskDelegate> _taskDelegate;
}

@property(nonatomic) __weak id <TTFRevivalTaskDelegate> taskDelegate; // @synthesize taskDelegate=_taskDelegate;
- (void).cxx_destruct;
- (void)openFantasyDialog:(id)arg1;
- (void)createTeamFight:(id)arg1;
- (void)inputInviteCode:(id)arg1;
- (void)shareToFriends:(id)arg1;
- (id)dictionaryFromString:(id)arg1;

@end


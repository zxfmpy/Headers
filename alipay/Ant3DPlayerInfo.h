//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APVideoPlayer, NSString;

@interface Ant3DPlayerInfo : NSObject
{
    int _repeatCount;
    int _currentRepeat;
    APVideoPlayer *_player;
    NSString *_nodeId;
}

@property(nonatomic) int currentRepeat; // @synthesize currentRepeat=_currentRepeat;
@property(nonatomic) int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(copy, nonatomic) NSString *nodeId; // @synthesize nodeId=_nodeId;
@property(retain, nonatomic) APVideoPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, QQMessageModel;

@protocol IMusicPlayService <NSObject>
- (void)StopMusicGene;
- (_Bool)GetState:(QQMessageModel *)arg1;
- (void)Pause;
- (void)Stop;
- (void)playMusicWithInfo:(NSDictionary *)arg1;
- (void)DoAction:(NSDictionary *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBRspGeneralModel.h>

@class TBStoryVideoDesModel;

@interface TBRspWatchStoryVideo : TBRspGeneralModel
{
    unsigned int _unreadCount;
    TBStoryVideoDesModel *_videoDes;
}

@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) TBStoryVideoDesModel *videoDes; // @synthesize videoDes=_videoDes;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
- (void)dealloc;

@end


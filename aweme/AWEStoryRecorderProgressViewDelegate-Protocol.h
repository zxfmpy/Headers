//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStoryRecorderProgressView;

@protocol AWEStoryRecorderProgressViewDelegate <NSObject>
- (void)animationChange:(AWEStoryRecorderProgressView *)arg1;
- (void)animaitonDidEnd:(AWEStoryRecorderProgressView *)arg1;
- (void)animaitonDidBegin:(AWEStoryRecorderProgressView *)arg1;
- (_Bool)animaitonShouldBegin:(AWEStoryRecorderProgressView *)arg1;
@end


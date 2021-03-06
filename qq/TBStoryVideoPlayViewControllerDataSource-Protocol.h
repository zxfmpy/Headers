//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString, TBPageScrollViewItem;

@protocol TBStoryVideoPlayViewControllerDataSource <NSObject>

@optional
- (void)onPlayerScrollBeginDrag:(long long)arg1 LeftAnimationEnabled:(_Bool *)arg2 rightAnimationEnabled:(_Bool *)arg3;
- (void)onPageItemDidShow:(TBPageScrollViewItem *)arg1;
- (unsigned int)currentProgressNumberOfKey:(NSString *)arg1 currentVid:(NSString *)arg2;
- (unsigned int)totalProgressNumberOfKey:(NSString *)arg1 currentVid:(NSString *)arg2;
- (NSString *)nextVidForCurrentRepeatSection:(NSString *)arg1 currentVid:(NSString *)arg2;
- (_Bool)hasMoreDataFordataKey:(NSString *)arg1 direction:(long long)arg2;
- (void)requestNextBatchVideo:(NSString *)arg1 direction:(long long)arg2;
@end


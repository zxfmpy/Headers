//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QQAPNGImageView, UIImage;

@protocol QQImagePlayDelegate <NSObject>

@optional
- (void)APNGImageView:(QQAPNGImageView *)arg1 didChangeFrameAtIndex:(unsigned long long)arg2 Frame:(UIImage *)arg3;
- (void)playEnd:(QQAPNGImageView *)arg1;
@end


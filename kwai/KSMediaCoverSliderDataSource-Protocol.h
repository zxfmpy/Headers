//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSMediaCoverSlider, UIImage;

@protocol KSMediaCoverSliderDataSource <NSObject>
- (void)mediaCoverSlider:(KSMediaCoverSlider *)arg1 thumbnailImageWithOffset:(double)arg2 completionHandler:(void (^)(UIImage *))arg3;
- (UIImage *)mediaCoverSlider:(KSMediaCoverSlider *)arg1 thumbnailImageAtOffset:(double)arg2;
@end


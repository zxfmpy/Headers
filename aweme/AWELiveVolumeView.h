//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPVolumeView;

@interface AWELiveVolumeView : UIView
{
    MPVolumeView *_volumeView;
    double _lastVolume;
}

@property(nonatomic) double lastVolume; // @synthesize lastVolume=_lastVolume;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
- (void).cxx_destruct;
- (void)dismissSystemVolume:(id)arg1;
- (void)_dismiss;
- (void)setVolume:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

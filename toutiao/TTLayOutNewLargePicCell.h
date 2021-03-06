//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreCellBase.h"

#import "TTAdAnimationCell-Protocol.h"
#import "TTVAutoPlayingCell-Protocol.h"

@class NSString, TTLayOutNewLargePicCellView;

@interface TTLayOutNewLargePicCell : ExploreCellBase <TTAdAnimationCell, TTVAutoPlayingCell>
{
    TTLayOutNewLargePicCellView *_largePicCellView;
}

+ (Class)cellViewClass;
@property(retain, nonatomic) TTLayOutNewLargePicCellView *largePicCellView; // @synthesize largePicCellView=_largePicCellView;
- (void).cxx_destruct;
- (void)ttv_autoPlayingAttachMovieView:(id)arg1;
- (id)movieView;
- (id)ttv_movieView;
- (struct CGRect)ttv_logoViewFrame;
- (void)ttv_autoPlayVideo;
- (_Bool)ttv_cellCouldAutoPlaying;
- (id)ttv_autoPlayModel;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)didEndDisplaying;
- (void)willDisplay;
- (id)createCellView;
- (id)animationContextInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


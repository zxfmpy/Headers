//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTUGCCellViewWrap.h"

@class TTUGCVideoCellView;

@interface TTUGCVideoCellViewWrap : TTUGCCellViewWrap
{
    TTUGCVideoCellView *_videoCellView;
}

@property(retain, nonatomic) TTUGCVideoCellView *videoCellView; // @synthesize videoCellView=_videoCellView;
- (void).cxx_destruct;
- (void)configureFollowRecommendEnableStatus:(_Bool)arg1;
- (void)refreshWithData:(id)arg1;
- (void)playButtonClicked;
- (Class)cellViewClass;
- (id)initWithFrame:(struct CGRect)arg1;

@end

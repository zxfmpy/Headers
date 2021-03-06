//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class ExploreOrderedData, SSThemedImageView, SSThemedLabel, TTArticleTagView, TTImageView;

@interface TTADInfoView : SSThemedView
{
    TTArticleTagView *_typeIconView;
    SSThemedLabel *_sourceLabel;
    TTImageView *_sourceImageView;
    SSThemedLabel *_commentLabel;
    SSThemedLabel *_timeLabel;
    SSThemedImageView *_locationIcon;
    SSThemedLabel *_locationLabel;
    ExploreOrderedData *_orderedData;
}

@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
@property(retain, nonatomic) SSThemedLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) SSThemedImageView *locationIcon; // @synthesize locationIcon=_locationIcon;
@property(retain, nonatomic) SSThemedLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) SSThemedLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) TTImageView *sourceImageView; // @synthesize sourceImageView=_sourceImageView;
@property(retain, nonatomic) SSThemedLabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) TTArticleTagView *typeIconView; // @synthesize typeIconView=_typeIconView;
- (void).cxx_destruct;
- (id)randomSourceBackgroundColors;
- (void)updateInfoView:(id)arg1;
- (void)layoutInfoView;
- (void)refreshCommentLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end


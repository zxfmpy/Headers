//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FTSBaseCellView.h>

@class FTSHighlightRichLabel, UILabel;

@interface FTSFeedMsgCellView : FTSBaseCellView
{
    FTSHighlightRichLabel *_nicknameLabel;
    FTSHighlightRichLabel *_subLabel;
    FTSHighlightRichLabel *_summaryLabel;
    UILabel *_timeLabel;
    _Bool _isMaxWidth;
}

@property(nonatomic) _Bool isMaxWidth; // @synthesize isMaxWidth=_isMaxWidth;
- (void).cxx_destruct;
- (id)summaryLabelText;
- (id)subLabelText;
- (id)nicknameLabelText;
- (void)handleMultiResultsShowOriginX:(double)arg1 originY:(double)arg2 maxLen:(double)arg3 withFeedModel:(id)arg4;
- (void)handleSingleResultsShowOriginX:(double)arg1 originY:(double)arg2 maxLen:(double)arg3 withFeedModel:(id)arg4;
- (void)layoutSubviewsFTSFeedMsgList;
- (void)loadCellWithFTSFeedInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initCellUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


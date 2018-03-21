//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZFeedLayoutCell.h>

#import <QQMainProject/QZFeedCellDelegate-Protocol.h>
#import <QQMainProject/QZPhotoThumbViewDelegate-Protocol.h>

@class NSArray, NSString, NSTimer, QzoneFeedLayoutView, UIButton;

@interface QzoneFeedCell : QZFeedLayoutCell <QZFeedCellDelegate, QZPhotoThumbViewDelegate>
{
    NSTimer *_appearTimer;
    _Bool _fixedDress;
    _Bool _customLayout;
    UIButton *_downloadBanner;
    _Bool _lazyLoad;
    _Bool _shouldShowDress;
    _Bool _needPredraw;
    _Bool _streamingPlay;
    _Bool _usingLocalVideoCache;
    _Bool _isInVideoCommentView;
    _Bool _isForLayoutKit;
    int _cellStyle;
    long long _section;
    double _feedCellBgAlpha;
    NSArray *_feedLayoutViewList;
    QzoneFeedLayoutView *_lkLayoutView;
}

+ (void)resetMargin;
+ (long long)detailNumberOfRowsInSection:(long long)arg1 feedmodel:(id)arg2;
+ (double)heightWithDetailNewFeedModel:(id)arg1 indexPath:(id)arg2 isFamousZone:(_Bool)arg3 isFirstRow:(_Bool)arg4 realLastSection:(long long)arg5 isInVideoCommentView:(_Bool)arg6 isInCommentDetailView:(_Bool)arg7;
+ (void)checkFeedLayoutInfoBecauseEtFont:(id)arg1;
+ (void)checkNeedLayoutsummaryBecauseEtFont:(id)arg1;
+ (void)checkNeedLayoutCommentBecauseEtFont:(id)arg1;
+ (double)heightWithNewFeedModel:(id)arg1 param:(id)arg2;
+ (double)heightWithNewFeedModel:(id)arg1;
+ (void)setCellMargin:(id)arg1 isLastMargin:(_Bool)arg2;
+ (void)setLayoutMargin:(id)arg1;
@property(retain, nonatomic) QzoneFeedLayoutView *lkLayoutView; // @synthesize lkLayoutView=_lkLayoutView;
@property(nonatomic) _Bool isForLayoutKit; // @synthesize isForLayoutKit=_isForLayoutKit;
@property(nonatomic) _Bool isInVideoCommentView; // @synthesize isInVideoCommentView=_isInVideoCommentView;
@property(readonly, nonatomic) NSArray *feedLayoutViewList; // @synthesize feedLayoutViewList=_feedLayoutViewList;
@property(nonatomic) _Bool usingLocalVideoCache; // @synthesize usingLocalVideoCache=_usingLocalVideoCache;
@property(nonatomic) double feedCellBgAlpha; // @synthesize feedCellBgAlpha=_feedCellBgAlpha;
@property(nonatomic) _Bool streamingPlay; // @synthesize streamingPlay=_streamingPlay;
@property(nonatomic) _Bool needPredraw; // @synthesize needPredraw=_needPredraw;
@property(nonatomic) _Bool shouldShowDress; // @synthesize shouldShowDress=_shouldShowDress;
@property(nonatomic) _Bool lazyLoad; // @synthesize lazyLoad=_lazyLoad;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) int cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;
- (void)resetAccessibilityElements;
- (void)generateLikeListAccessibilityElementWithFrame:(struct CGRect)arg1;
- (void)generateCommentAccessibilityElements;
- (void)setAllLayoutViewHidden:(_Bool)arg1;
- (void)setAllLayoutViewHidden:(_Bool)arg1 resetLKLayoutView:(_Bool)arg2;
- (void)refreshFeedDressToLayoutView:(id)arg1;
- (void)setFeedModelForLayoutKit:(id)arg1;
- (id)layoutModelInfo;
- (void)setFeedModelForGroupCell:(id)arg1;
- (void)clearQZLayoutInfoView;
- (long long)maxPictureShowCount;
- (void)didFeedCellCommentButtonClicked:(id)arg1 indexPath:(id)arg2 offset:(double)arg3;
- (void)didFeedCellFollowBtnClick:(id)arg1 indexPath:(id)arg2;
- (void)didFeedCellOutlinkBtnClick:(id)arg1 indexPath:(id)arg2 param:(id)arg3;
- (void)didFeedCellDownloadBtnClick:(id)arg1 indexPath:(id)arg2 param:(id)arg3;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)layoutSubviews;
- (void)onFeedDressChanged:(id)arg1;
- (void)refreshFeedDress;
- (void)reportVisitorInfo;
- (void)callLayoutViewBlock:(CDUnknownBlockType)arg1;
- (void)setGifFrameDuration:(double)arg1 playDirection:(long long)arg2;
- (void)checkAutoPlayViewEvent:(long long)arg1 params:(id)arg2;
- (void)destroyShimmeringLabelAnimating;
- (void)startShimmeringLabelAnimating;
- (void)stopShimmeringLabelAnimating;
- (void)didPhotoThumbViewNeedLayout:(id)arg1;
- (void)configCradStyle:(id)arg1 backgroundColor:(id)arg2 accessoryView:(id)arg3 selectionStyle:(long long)arg4;
- (void)setNeedsUpdateLayoutInfo:(id)arg1;
- (void)setFeedModel:(id)arg1;
- (_Bool)needHideBackgroudView;
- (void)resetSubviews;
- (id)getVisibleVideoViews;
- (void)setIndex:(long long)arg1;
- (void)onAppearTimer:(id)arg1;
- (void)resetFollowScrollAnimationViewState;
- (void)scrollviewDidScroll:(double)arg1;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)setIndexPath:(id)arg1;
- (void)refreshLayoutView:(unsigned long long)arg1;
- (void)refreshContent;
- (void)updateFeedZone:(long long)arg1;
- (void)refreshComment;
- (void)refreshLike:(id)arg1;
- (void)refreshCell;
- (void)layoutFeedView;
- (double)heightForFeedLayoutViewWithTag:(unsigned long long)arg1;
- (void)layoutFeedViewWithTag:(unsigned long long)arg1;
- (id)layoutViewOfTagContent:(id)arg1 layoutInfo:(id)arg2;
- (void)setIsTableScrolling:(_Bool)arg1;
- (void)prepareForReuse;
- (void)initFeedLayoutView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 fixDress:(_Bool)arg3 isDetail:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

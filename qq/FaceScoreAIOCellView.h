//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCommonCellView.h>

@class FaceScoreMsgExInfo, NSArray, QQAsynUrlImageView, UIImageView, UILabel, UIView;

@interface FaceScoreAIOCellView : QQAIOCommonCellView
{
    UIView *_contentBackView;
    QQAsynUrlImageView *_msgView;
    UIImageView *_msgViewPlayButtonMask;
    UIView *_descriptView;
    UIView *_tagView;
    _Bool _isPushMsg;
    FaceScoreMsgExInfo *_sfMsgInfo;
    NSArray *_tagViewArr;
    UILabel *_summaryLabel;
}

+ (double)heightForDescLabel:(id)arg1;
+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) NSArray *tagViewArr; // @synthesize tagViewArr=_tagViewArr;
@property(retain, nonatomic) FaceScoreMsgExInfo *sfMsgInfo; // @synthesize sfMsgInfo=_sfMsgInfo;
- (void)dealloc;
- (id)getMenuItems;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)setRoundCorner:(double)arg1 View:(id)arg2;
- (id)getIconTextView:(id)arg1 inView:(id)arg2;
- (void)drawBubbleMsgViewMask:(id)arg1;
- (void)updateDescLabelContentFrame;
- (void)willDrawBubble;
- (void)preparePaopao:(id)arg1;
- (void)setAioModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end


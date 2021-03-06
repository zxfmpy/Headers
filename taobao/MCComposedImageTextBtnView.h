//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCComposedImageTextView.h"

@class NSArray, NSMutableArray;

@interface MCComposedImageTextBtnView : MCComposedImageTextView
{
    NSMutableArray *_btnViews;
    NSArray *_btnInfos;
}

@property(retain, nonatomic) NSArray *btnInfos; // @synthesize btnInfos=_btnInfos;
@property(retain, nonatomic) NSMutableArray *btnViews; // @synthesize btnViews=_btnViews;
- (void).cxx_destruct;
- (void)generateBtnViews:(id)arg1;
- (void)generateImageView:(id)arg1;
- (void)generateExtLabel:(id)arg1;
- (void)generateLabel:(id)arg1;
- (void)btnNeedRemoveFromSuperView;
- (void)mcBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (void)updateView:(id)arg1 bubbleHandler:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


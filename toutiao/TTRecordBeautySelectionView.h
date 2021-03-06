//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTRecordBeautySelectionItemsViewDelegate-Protocol.h"

@class NSString, SSThemedButton, TTRecordBeautyData, TTRecordBeautySelectionItemsView, UITapGestureRecognizer, UIVisualEffectView;
@protocol TTRecordBeautySelectionViewDelegate;

@interface TTRecordBeautySelectionView : SSThemedView <TTRecordBeautySelectionItemsViewDelegate>
{
    id <TTRecordBeautySelectionViewDelegate> _delegate;
    TTRecordBeautyData *_beautyData;
    SSThemedView *_selectionPanel;
    UIVisualEffectView *_effectView;
    SSThemedButton *_reshapeTabButton;
    SSThemedButton *_beautyTabButton;
    TTRecordBeautySelectionItemsView *_itemsViewForReshape;
    TTRecordBeautySelectionItemsView *_itemsViewForBeauty;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SSThemedView *_horizontalBorder;
    SSThemedView *_verticalBorder;
}

@property(retain, nonatomic) SSThemedView *verticalBorder; // @synthesize verticalBorder=_verticalBorder;
@property(retain, nonatomic) SSThemedView *horizontalBorder; // @synthesize horizontalBorder=_horizontalBorder;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TTRecordBeautySelectionItemsView *itemsViewForBeauty; // @synthesize itemsViewForBeauty=_itemsViewForBeauty;
@property(retain, nonatomic) TTRecordBeautySelectionItemsView *itemsViewForReshape; // @synthesize itemsViewForReshape=_itemsViewForReshape;
@property(retain, nonatomic) SSThemedButton *beautyTabButton; // @synthesize beautyTabButton=_beautyTabButton;
@property(retain, nonatomic) SSThemedButton *reshapeTabButton; // @synthesize reshapeTabButton=_reshapeTabButton;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) SSThemedView *selectionPanel; // @synthesize selectionPanel=_selectionPanel;
@property(retain, nonatomic) TTRecordBeautyData *beautyData; // @synthesize beautyData=_beautyData;
@property(nonatomic) __weak id <TTRecordBeautySelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)itemsView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)handleEmptyTap:(id)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFullscreenFrame:(struct CGRect)arg1 selectionFrame:(struct CGRect)arg2 defaultSelection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


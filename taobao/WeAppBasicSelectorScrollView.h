//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WeAppBasicSelectorProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface WeAppBasicSelectorScrollView : UIView <UIScrollViewDelegate, WeAppBasicSelectorProtocol>
{
    double _buttonWidth;
    double _buttonHeight;
    UIScrollView *_scrollView;
    unsigned long long _pluginCnt;
    unsigned long long _defaultIndex;
    double _sctBorderWidth;
    double _sctBorderHeight;
    NSArray *_dataSource;
    long long _startIndex;
    long long _endIndex;
    NSMutableArray *_btnArray;
    Class _itemViewClass;
    double _selectViewWidth;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double selectViewWidth; // @synthesize selectViewWidth=_selectViewWidth;
@property(retain, nonatomic) Class itemViewClass; // @synthesize itemViewClass=_itemViewClass;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) double sctBorderHeight; // @synthesize sctBorderHeight=_sctBorderHeight;
@property(nonatomic) double sctBorderWidth; // @synthesize sctBorderWidth=_sctBorderWidth;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(nonatomic) unsigned long long pluginCnt; // @synthesize pluginCnt=_pluginCnt;
- (void).cxx_destruct;
- (void)scrollViewActionWithNewItemView:(id)arg1 withOldItemView:(id)arg2;
- (void)didSelectorScrollViewFinished:(id)arg1;
- (void)itemViewClickedCancel:(id)arg1;
- (void)itemViewClickedDown:(id)arg1;
- (void)itemViewSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)itemViewSelected:(id)arg1 withOldItemView:(id)arg2;
- (void)setSelectorFrame:(unsigned long long)arg1 defaultIndex:(unsigned long long)arg2;
- (void)setSelectorProperty:(id)arg1 withIndex:(unsigned long long)arg2 isSelect:(_Bool)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadSelecorPosition;
- (long long)getIndexWithSelector:(id)arg1;
- (id)getSelectorWithIndex:(unsigned long long)arg1;
- (void)setPluginSelectBtn:(unsigned long long)arg1;
- (void)btnClickedTouchCancel:(id)arg1;
- (void)btnClickedDown:(id)arg1;
- (void)btnClicked:(id)arg1;
- (void)reloadFrame;
- (void)reloadData;
- (_Bool)needReloadSelector:(id)arg1;
- (void)setSelectorWithItemArray:(id)arg1 defaultIndex:(unsigned long long)arg2;
- (void)setSelectorWithItemArray:(id)arg1;
- (void)setPluginCnt:(unsigned long long)arg1 defaultIndex:(unsigned long long)arg2;
- (void)setupView;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

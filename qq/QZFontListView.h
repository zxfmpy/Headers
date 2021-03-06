//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QZFontListViewCellDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, QQPageControl, UIScrollView, UIViewController;
@protocol QZFontListViewDelegate;

@interface QZFontListView : UIView <QZFontListViewCellDelegate, UIScrollViewDelegate>
{
    long long _selectFontId;
    NSMutableDictionary *_pageStatus;
    long long _cellNum;
    long long _selectedCellIndex;
    long long _from;
    long long _boardType;
    long long _fontType;
    long long _rowNum;
    long long _colNum;
    long long _topMargin;
    long long _leftMargin;
    long long _bottomMargin;
    long long _rightMargin;
    long long _rowSpace;
    long long _colSpace;
    NSMutableArray *_fontList;
    NSMutableDictionary *_etFontItems;
    NSMutableDictionary *_userTap;
    id <QZFontListViewDelegate> _delegate;
    UIViewController *_containerVC;
    long long _payFontId;
    UIScrollView *_scrollView;
    QQPageControl *_pageControl;
    NSMutableArray *_cellModelList;
}

@property(retain, nonatomic) NSMutableArray *cellModelList; // @synthesize cellModelList=_cellModelList;
@property(retain, nonatomic) QQPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long payFontId; // @synthesize payFontId=_payFontId;
@property(nonatomic) __weak UIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <QZFontListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *userTap; // @synthesize userTap=_userTap;
@property(retain, nonatomic) NSMutableDictionary *etFontItems; // @synthesize etFontItems=_etFontItems;
@property(retain, nonatomic) NSMutableArray *fontList; // @synthesize fontList=_fontList;
@property(nonatomic) long long colSpace; // @synthesize colSpace=_colSpace;
@property(nonatomic) long long rowSpace; // @synthesize rowSpace=_rowSpace;
@property(nonatomic) long long rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) long long bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) long long leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) long long topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) long long colNum; // @synthesize colNum=_colNum;
@property(nonatomic) long long rowNum; // @synthesize rowNum=_rowNum;
@property(nonatomic) long long fontType; // @synthesize fontType=_fontType;
@property(nonatomic) long long boardType; // @synthesize boardType=_boardType;
@property(nonatomic) long long from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)diyfontReport:(long long)arg1;
- (void)sparkleReport:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


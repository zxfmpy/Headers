//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/UserSummaryBaseCell.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIColor, UIImage, UITableView, UserSummaryEachBusinessEnter;

@interface UserSummaryHobbiesCell : UserSummaryBaseCell <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableview;
    NSArray *_datasArrary;
    NSArray *_businessDatasArray;
    CDUnknownBlockType _didClickContentCellAtIndexPath;
    CDUnknownBlockType _didClickContentSectionHeader;
    UIColor *_templateTextColor;
    UIColor *_selectedBackgroundViewBgColor;
    UIColor *_contentViewBgColor;
    UIColor *_contentCellHighlightedColor;
    UIColor *_separatorColor;
    UserSummaryEachBusinessEnter *_businessEnter;
    UIImage *_arrowImage;
}

+ (double)cellHeightForDatasArrary:(id)arg1 businessDatas:(id)arg2;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UserSummaryEachBusinessEnter *businessEnter; // @synthesize businessEnter=_businessEnter;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *contentCellHighlightedColor; // @synthesize contentCellHighlightedColor=_contentCellHighlightedColor;
@property(retain, nonatomic) UIColor *contentViewBgColor; // @synthesize contentViewBgColor=_contentViewBgColor;
@property(retain, nonatomic) UIColor *selectedBackgroundViewBgColor; // @synthesize selectedBackgroundViewBgColor=_selectedBackgroundViewBgColor;
@property(retain, nonatomic) UIColor *templateTextColor; // @synthesize templateTextColor=_templateTextColor;
@property(copy, nonatomic) CDUnknownBlockType didClickContentSectionHeader; // @synthesize didClickContentSectionHeader=_didClickContentSectionHeader;
@property(copy, nonatomic) CDUnknownBlockType didClickContentCellAtIndexPath; // @synthesize didClickContentCellAtIndexPath=_didClickContentCellAtIndexPath;
- (void).cxx_destruct;
- (void)refreshInnerContentCellBgColor;
- (void)setupHobbiesDatas:(id)arg1 businessDatas:(id)arg2;
- (id)contentCells;
- (void)didClickContentCellAtIndexPath:(id)arg1 url:(id)arg2 model:(id)arg3 serviceType:(long long)arg4;
- (void)didClickContentSectionHeaderWithIndexPath:(id)arg1 url:(id)arg2 model:(id)arg3 serviceType:(long long)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

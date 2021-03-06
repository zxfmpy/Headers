//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/IFACategoryTableViewDelegate-Protocol.h>
#import <QQMainProject/IFADataSourceDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class FACategoryDataSouce, FACategoryTableView, NSString, UIButton, UIImageView, UILabel;

@interface FACleanViewController : QQViewController <IFADataSourceDelegate, IFACategoryTableViewDelegate, UIAlertViewDelegate>
{
    FACategoryDataSouce *_dataSource;
    FACategoryTableView *_tableView;
    UIButton *_selectAllButton;
    UILabel *_selectSizeLabel;
    UIButton *_deleteButton;
    UIImageView *_bottomView;
    _Bool _bSelectAll;
    unsigned long long _totalDeleteSize;
}

- (void)refreshSelectAllCheckbox;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDeleteButtonClick:(id)arg1;
- (void)onSelectAllButtonClick:(id)arg1;
- (void)onCategoryClick:(int)arg1;
- (void)fileSelected:(id)arg1;
- (void)iconSelected:(id)arg1;
- (void)didFileAdd;
- (void)didDeleteFile:(unsigned long long)arg1 withErrMsg:(id)arg2;
- (void)didLoadListDoneWithCode:(int)arg1 msg:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)refreshBottomView;
- (void)createBottomView;
- (id)createTableView;
- (void)loadView;
- (void)clearCheckbox;
- (void)setMaxSelectedCount:(int)arg1;
- (void)initDataSource;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSIndexPath, NSMutableArray, NSString, QUIActionSheet, UITableView;

@interface QQGroupAssistantSettingsViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, QUIActionSheetDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_dataSources;
    NSMutableArray *_groupAcceptArr;
    NSMutableArray *_groupMsgListNoRemind;
    NSMutableArray *_groupOnlyCountArr;
    NSMutableArray *_groupBlockedArr;
    QUIActionSheet *_actionSheet;
    int _selectedMessageWay;
    NSIndexPath *_selectedIndexPath;
}

- (id)crateSubTitle:(id)arg1 titlePoint:(struct CGPoint)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setGroupAssistantTimeout;
- (void)onHandleSetGroupAssistantNotification:(id)arg1;
- (void)_refreshTableView;
- (void)_editTableViewAnimated;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)dictForRowAtIndexPath:(id)arg1;
- (id)GetValueForKey:(id)arg1;
- (void)clickSwitch:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)restoreData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


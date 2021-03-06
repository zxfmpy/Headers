//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/PhotoBrowserViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQBannerTipViewDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class MBProgressHUD, NSMutableArray, NSString, QQAlertView, QQBannerTipView, UIActivityIndicatorView, UIButton, UITableView, UITextField, UIView, UIViewController;

@interface QQPhotoManageViewController : QQViewController <QQBannerTipViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, PhotoBrowserViewControllerDelegate, UIAlertViewDelegate>
{
    NSMutableArray *_dataSources;
    UITableView *_tableView;
    _Bool _isEdit;
    _Bool _isSelectedAll;
    int _selectedCount;
    _Bool ifChange;
    UIView *_btnBg;
    UIButton *_deleteBtn;
    UIButton *_selectAllBtn;
    UITextField *_selectedCountTextField;
    UIView *_overflowTip;
    UIViewController *_supChatViewController;
    UIActivityIndicatorView *_indicatorView;
    MBProgressHUD *_hud;
    int _qutuFailedNum;
    _Bool isFirstViewWillAppear;
    QQAlertView *_deleteAllAlterView;
    QQBannerTipView *_bannerTips;
}

- (void)actionForOpenSvip;
- (void)bannerButtonDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (struct CGRect)getOriginalRectForPhoto:(id)arg1 atIndex:(int)arg2;
- (void)didSelectedModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataSources;
- (void)showProgressHUD;
- (void)editAction:(id)arg1;
- (void)deleteSelectedEmojis;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isAllEmojiSelected;
- (void)editBarDidSelected:(id)arg1;
- (void)deleteCustomFace:(id)arg1 engine:(id)arg2 deleteArray:(id)arg3;
- (void)selectedAllData:(id)arg1;
- (void)disMissEditBar;
- (void)showEditBar;
- (void)modifyEditBar;
- (void)leftButtonClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)closeButtonDismissModalViewController:(id)arg1;
- (id)initWithManageQutu:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MBProgressHUD *hud; // @dynamic hud;
@property(nonatomic) int qutuFailedNum; // @dynamic qutuFailedNum;
@property(nonatomic) UIViewController *supChatViewController; // @dynamic supChatViewController;
@property(readonly) Class superclass;

@end


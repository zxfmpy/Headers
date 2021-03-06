//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ALAssetsGroup, MBProgressHUD, NSMutableArray, NSString, TBMPThumbnailBar, UIButton, UITableView;

@interface TBMPMultiSelectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    ALAssetsGroup *_assetsGroup;
    NSMutableArray *_assets;
    UITableView *_tableView;
    TBMPThumbnailBar *_thumbnailBar;
    UIButton *_backButton;
    UIButton *_confirmButton;
    UIButton *_buttonToCamera;
    MBProgressHUD *_HUD;
    CDStruct_4a9aa5a8 *_image_rule;
}

- (void).cxx_destruct;
- (id)outputFromImage:(id)arg1 andImageFileSize:(long long)arg2 byRule:(CDStruct_4a9aa5a8 *)arg3;
- (void)loadAssets;
- (id)itemsForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tapToCamera:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)unfreeze;
- (void)freeze;
- (void)clickLeftButton:(id)arg1;
- (void)dealloc;
- (void)handleAssetChangedNotifiation:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 scrollToBottom:(_Bool)arg2;
- (id)initWithAssetsGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


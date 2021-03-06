//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KSMenuHeaderViewDelegate-Protocol.h"
#import "KSPortalManagerDelegate-Protocol.h"
#import "KSRevealSideViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class KSHomeViewController, KSMenuCell, KSMenuHeaderView, NSMutableArray, NSString, UIControl, UINavigationController, UIScrollView;

@interface KSMenuViewController : UIViewController <KSMenuHeaderViewDelegate, UIGestureRecognizerDelegate, KSRevealSideViewControllerDelegate, KSPortalManagerDelegate>
{
    UIViewController *_contentViewController;
    UINavigationController *_currentNavigationController;
    KSMenuHeaderView *_menuHeaderView;
    UIScrollView *_scrollView;
    NSMutableArray *_cells;
    KSMenuCell *_searchCell;
    KSMenuCell *_localAlbumCell;
    KSMenuCell *_settingCell;
    KSMenuCell *_QRScanCell;
    NSMutableArray *_elements;
    UIControl *_preSelectedElement;
    KSHomeViewController *_homeViewController;
    NSString *_forcePhoneBindObserverIdentifier;
}

@property(copy, nonatomic) NSString *forcePhoneBindObserverIdentifier; // @synthesize forcePhoneBindObserverIdentifier=_forcePhoneBindObserverIdentifier;
@property(retain, nonatomic) KSHomeViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
@property(retain, nonatomic) UIControl *preSelectedElement; // @synthesize preSelectedElement=_preSelectedElement;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) KSMenuCell *QRScanCell; // @synthesize QRScanCell=_QRScanCell;
@property(retain, nonatomic) KSMenuCell *settingCell; // @synthesize settingCell=_settingCell;
@property(retain, nonatomic) KSMenuCell *localAlbumCell; // @synthesize localAlbumCell=_localAlbumCell;
@property(retain, nonatomic) KSMenuCell *searchCell; // @synthesize searchCell=_searchCell;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) KSMenuHeaderView *menuHeaderView; // @synthesize menuHeaderView=_menuHeaderView;
@property(retain, nonatomic) UINavigationController *currentNavigationController; // @synthesize currentNavigationController=_currentNavigationController;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (id)currentNavigationControllerForPortalManager:(id)arg1;
- (_Bool)ks_shouldHandleRevealSidePanGestureRecognizer:(id)arg1;
- (void)revealSideViewController:(id)arg1 didHideMenuViewController:(id)arg2;
- (void)revealSideViewController:(id)arg1 didShowMenuViewController:(id)arg2;
- (void)revealSideViewController:(id)arg1 willShowMenuViewController:(id)arg2;
- (void)setKs_revealSideViewController:(id)arg1;
- (void)selectMenuElement:(id)arg1;
- (void)showPhoneBindingAlert;
- (id)showHomeEmpty;
- (id)showHome;
- (void)immediatelyShowViewController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)showViewController:(id)arg1;
- (void)didTapUserHeader;
- (void)didClickMenuElement:(id)arg1;
- (void)didTouchUpOutsideMenuElement:(id)arg1;
- (void)didTouchDownMenuElement:(id)arg1;
- (void)_updateCellsInScrollView;
- (id)ksuShowMetaData;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


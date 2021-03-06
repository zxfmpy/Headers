//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSVideoImageFullScreenViewControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class KSShareTextView, NSString, UIBarButtonItem, UIView;

@interface KSShareBaseViewController : KSBaseViewController <UITextViewDelegate, KSVideoImageFullScreenViewControllerDelegate>
{
    KSShareTextView *_shareTextView;
    UIView *_coverView;
    _Bool _showingPreview;
    _Bool _hasLoadPreviewImage;
    NSString *_initialTitle;
    NSString *_initialCaption;
    UIBarButtonItem *_publishBtnItem;
    UIBarButtonItem *_backBtnItem;
    UIBarButtonItem *_confirmBtnItem;
    UIView *_watermarkGuideView;
}

@property(retain, nonatomic) UIView *watermarkGuideView; // @synthesize watermarkGuideView=_watermarkGuideView;
@property(nonatomic) _Bool hasLoadPreviewImage; // @synthesize hasLoadPreviewImage=_hasLoadPreviewImage;
@property(retain, nonatomic) UIBarButtonItem *confirmBtnItem; // @synthesize confirmBtnItem=_confirmBtnItem;
@property(retain, nonatomic) UIBarButtonItem *backBtnItem; // @synthesize backBtnItem=_backBtnItem;
@property(retain, nonatomic) UIBarButtonItem *publishBtnItem; // @synthesize publishBtnItem=_publishBtnItem;
@property(retain, nonatomic) NSString *initialCaption; // @synthesize initialCaption=_initialCaption;
@property(retain, nonatomic) NSString *initialTitle; // @synthesize initialTitle=_initialTitle;
@property(nonatomic) _Bool showingPreview; // @synthesize showingPreview=_showingPreview;
- (void).cxx_destruct;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (_Bool)needShowWatermarkGuide;
- (void)updatePositionForSubViews;
- (void)backOnFinish:(CDUnknownBlockType)arg1;
- (void)didTapWatermarkGuideView;
- (void)didTapBackBtn;
- (void)didTapPublishBtn;
- (_Bool)checkShareText;
- (void)_setupWatermarkGuideView;
- (void)_configBackButtonItem;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) KSShareTextView *shareTextView;
@property(readonly, nonatomic) UIView *coverView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hideKeyboard;
- (void)didTapPreviewImage:(id)arg1;
- (void)videoImageFullScreenViewControllerDidClickedBackground:(id)arg1;
- (void)setupViewsUnderCoverView;
- (void)outVideoImageFullScreenViewControllerAnimation:(id)arg1;
- (void)enterVideoImageFullScreenViewControllerAnimation:(id)arg1;
- (void)videoImageFullScreenViewController:(id)arg1 didDismissTargetView:(id)arg2;
- (void)videoImageFullScreenViewController:(id)arg1 willDismissTargetView:(id)arg2;
- (void)videoImageFullScreenViewController:(id)arg1 didShowTargetView:(id)arg2;
- (void)videoImageFullScreenViewController:(id)arg1 willShowTargetView:(id)arg2;
- (struct CGSize)sizeForVideoImageFullScreenViewController:(id)arg1 ofTargetView:(id)arg2;
- (void)showCaptionKeyboard;
- (void)previewImageReady:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


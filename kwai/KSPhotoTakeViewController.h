//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSStillCameraViewController.h"

@class UIButton, UIImageView;

@interface KSPhotoTakeViewController : KSStillCameraViewController
{
    _Bool _previewInSelf;
    CDUnknownBlockType _delegateBlock;
    CDUnknownBlockType _processImage;
    CDUnknownBlockType _postResutImage;
    UIImageView *_resultImageView;
    UIButton *_retakeButton;
    UIButton *_startPostButton;
}

@property(retain, nonatomic) UIButton *startPostButton; // @synthesize startPostButton=_startPostButton;
@property(retain, nonatomic) UIButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(retain, nonatomic) UIImageView *resultImageView; // @synthesize resultImageView=_resultImageView;
@property(copy, nonatomic) CDUnknownBlockType postResutImage; // @synthesize postResutImage=_postResutImage;
@property(nonatomic) _Bool previewInSelf; // @synthesize previewInSelf=_previewInSelf;
@property(copy, nonatomic) CDUnknownBlockType processImage; // @synthesize processImage=_processImage;
@property(copy, nonatomic) CDUnknownBlockType delegateBlock; // @synthesize delegateBlock=_delegateBlock;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (void)didCaptureImage:(id)arg1;
- (void)didClickShoot:(id)arg1;
- (id)createBeautifyFilter;
- (void)didClickBeautifyButton:(id)arg1;
- (void)didClickCameraSwitchButton:(id)arg1;
- (void)didClickCloseButton:(id)arg1;
- (void)didClickPost:(id)arg1;
- (void)didClickRetakeCover:(id)arg1;
- (void)_updateResultImagePreview:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFineControlBeautyEnabled:(_Bool)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AFEWebGuideView, CameraDrawView, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UIView, UIViewController, alertText;

@interface UIController : NSObject
{
    UIViewController *_cardManagerVC;
    UIImage *_captureImage;
    CDUnknownBlockType _takePhoto;
    CDUnknownBlockType _touchQuitBtn;
    CDUnknownBlockType _touchContinueCapture;
    CDUnknownBlockType _touchRecapture;
    UIView *_view;
    UIImageView *_lastShowImage;
    CameraDrawView *_cameraDrawView;
    UIButton *_cancelButton;
    UIButton *_flashButton;
    UIView *_leftView;
    UIView *_shadowTop;
    UIView *_shadowBot;
    UIView *_shadowLeft;
    UIView *_shadowRight;
    UIView *_shadowLeftContainerView;
    UIView *_turnContainerView;
    UILabel *_waittag;
    UIActivityIndicatorView *_activityIndicatorView;
    long long _leftButtonWidth;
    double _point;
    UIButton *_reCaptureBtn;
    UIButton *_continueCaptureBtn;
    UIButton *_finishCaptureBtn;
    UIButton *_celbtn;
    UIButton *_captureBtn;
    AFEWebGuideView *_guideView;
    UIImageView *_headImage;
    UIImageView *_nationalIconImage;
    UIImageView *_successImg;
    NSString *_titleText;
    alertText *_infoTextView;
    struct CGRect _selfBound;
    struct CGRect _idCardRangeRect;
}

@property(retain, nonatomic) alertText *infoTextView; // @synthesize infoTextView=_infoTextView;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImageView *successImg; // @synthesize successImg=_successImg;
@property(retain, nonatomic) UIImageView *nationalIconImage; // @synthesize nationalIconImage=_nationalIconImage;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) AFEWebGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIButton *captureBtn; // @synthesize captureBtn=_captureBtn;
@property(retain, nonatomic) UIButton *celbtn; // @synthesize celbtn=_celbtn;
@property(retain, nonatomic) UIButton *finishCaptureBtn; // @synthesize finishCaptureBtn=_finishCaptureBtn;
@property(retain, nonatomic) UIButton *continueCaptureBtn; // @synthesize continueCaptureBtn=_continueCaptureBtn;
@property(retain, nonatomic) UIButton *reCaptureBtn; // @synthesize reCaptureBtn=_reCaptureBtn;
@property(nonatomic) struct CGRect idCardRangeRect; // @synthesize idCardRangeRect=_idCardRangeRect;
@property(nonatomic) double point; // @synthesize point=_point;
@property(nonatomic) long long leftButtonWidth; // @synthesize leftButtonWidth=_leftButtonWidth;
@property(nonatomic) struct CGRect selfBound; // @synthesize selfBound=_selfBound;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *waittag; // @synthesize waittag=_waittag;
@property(retain, nonatomic) UIView *turnContainerView; // @synthesize turnContainerView=_turnContainerView;
@property(retain, nonatomic) UIView *shadowLeftContainerView; // @synthesize shadowLeftContainerView=_shadowLeftContainerView;
@property(retain, nonatomic) UIView *shadowRight; // @synthesize shadowRight=_shadowRight;
@property(retain, nonatomic) UIView *shadowLeft; // @synthesize shadowLeft=_shadowLeft;
@property(retain, nonatomic) UIView *shadowBot; // @synthesize shadowBot=_shadowBot;
@property(retain, nonatomic) UIView *shadowTop; // @synthesize shadowTop=_shadowTop;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) CameraDrawView *cameraDrawView; // @synthesize cameraDrawView=_cameraDrawView;
@property(retain, nonatomic) UIImageView *lastShowImage; // @synthesize lastShowImage=_lastShowImage;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(copy) CDUnknownBlockType touchRecapture; // @synthesize touchRecapture=_touchRecapture;
@property(copy) CDUnknownBlockType touchContinueCapture; // @synthesize touchContinueCapture=_touchContinueCapture;
@property(copy) CDUnknownBlockType touchQuitBtn; // @synthesize touchQuitBtn=_touchQuitBtn;
@property(copy) CDUnknownBlockType takePhoto; // @synthesize takePhoto=_takePhoto;
@property(retain, nonatomic) UIImage *captureImage; // @synthesize captureImage=_captureImage;
@property(nonatomic) __weak UIViewController *cardManagerVC; // @synthesize cardManagerVC=_cardManagerVC;
- (void).cxx_destruct;
- (void)ReCapture:(id)arg1;
- (void)ContinueCapture:(id)arg1;
- (void)Capture:(id)arg1;
- (void)cancelSelf:(id)arg1;
- (void)updateShadowColor:(id)arg1;
- (void)resetToNormalState;
- (void)updateUIState:(int)arg1;
- (void)successImgShow;
- (void)initCustomView;
- (id)initializeViewWithUIType:(id)arg1;

@end


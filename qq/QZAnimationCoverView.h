//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSString, QZImageClipperBase, UIImage, UIImageView;

@interface QZAnimationCoverView : UIView <IQZUrlDownloaderDelegate>
{
    NSString *_imagePath;
    UIImage *_waitAnimaImage;
    int _motionStartCorner;
    _Bool _isAnimating;
    _Bool _stopAnimate;
    int _animaSeq;
    long long _animaStartTime;
    int _animaStartRand;
    _Bool _isLoading;
    _Bool _isLoaded;
    UIImage *_image;
    QZImageClipperBase *_clipper;
    NSString *_url;
    long long _animaType;
    UIImageView *_oldImageV;
    UIImageView *_curImageV;
}

@property(retain, nonatomic) UIImageView *curImageV; // @synthesize curImageV=_curImageV;
@property(retain, nonatomic) UIImageView *oldImageV; // @synthesize oldImageV=_oldImageV;
@property(nonatomic) long long animaType; // @synthesize animaType=_animaType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) QZImageClipperBase *clipper; // @synthesize clipper=_clipper;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

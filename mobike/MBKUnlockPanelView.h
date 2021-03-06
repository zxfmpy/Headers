//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKRidingPanelUnlockLoadView, NSString, UIImageView, UILabel;

@interface MBKUnlockPanelView : UIView
{
    NSString *_errorString;
    CDUnknownBlockType _unlockFailBlock;
    UILabel *_statusLabel;
    UIImageView *_animateImageView;
    MBKRidingPanelUnlockLoadView *_loadView;
}

+ (id)animatedImages:(_Bool)arg1;
@property(retain, nonatomic) MBKRidingPanelUnlockLoadView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(copy, nonatomic) CDUnknownBlockType unlockFailBlock; // @synthesize unlockFailBlock=_unlockFailBlock;
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
- (void).cxx_destruct;
- (void)showFailureAnimationWithFailReason:(long long)arg1 failedBlock:(CDUnknownBlockType)arg2;
- (void)setStateToSuccessWithCompletion:(CDUnknownBlockType)arg1;
- (void)showFailureAnimationWithCustomerReason:(id)arg1 failedBlock:(CDUnknownBlockType)arg2;
- (void)updateStatus:(unsigned long long)arg1 successCompletion:(CDUnknownBlockType)arg2;
- (void)updateStatus:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)redpacketUnfinished;
- (void)setUpViews;
- (void)setUpImagesData:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


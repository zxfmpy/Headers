//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString, UIButton, UIControl, UIImageView, UILabel;
@protocol WYCollectionBackupBarDelegate;

@interface WYCollectionBackupBar : UICollectionReusableView <UIAlertViewDelegate>
{
    _Bool _hasClickBuyVIP;
    UILabel *_textLabel;
    UIImageView *_imageView;
    unsigned long long _unbackupCount;
    id <WYCollectionBackupBarDelegate> _delegate;
    UIControl *_contentView;
    UILabel *_detailLabel;
    UIButton *_button;
    long long _status;
    long long _errorCode;
}

+ (id)buyTitleWithErrorCode:(long long)arg1;
+ (id)limitTipsWithErrorCode:(long long)arg1 isRetry:(_Bool)arg2;
@property(nonatomic) _Bool hasClickBuyVIP; // @synthesize hasClickBuyVIP=_hasClickBuyVIP;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIControl *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WYCollectionBackupBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long unbackupCount; // @synthesize unbackupCount=_unbackupCount;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setup;
- (void)touchEvent;
- (void)buttonEvent;
- (void)uploadChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

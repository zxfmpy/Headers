//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;
@protocol MCChatShareContentViewDelegate;

@interface MCChatShareContentView : UIButton
{
    UIImageView *_innerMaskViewImageView;
    UIImageView *_innerImageView;
    UIImageView *_innerIconImageView;
    UILabel *_innerTitleLabel;
    UILabel *_innerContentLabel;
    UIImageView *_innerfromLabelBcView;
    UILabel *_fromLabel;
    id <MCChatShareContentViewDelegate> _delegate;
}

+ (double)heightForFrom;
+ (struct CGSize)sizeForContent:(id)arg1 object:(id)arg2;
+ (struct CGSize)sizeForTitle:(id)arg1 object:(id)arg2;
+ (double)heightForImage;
+ (double)widthForSelf;
+ (struct CGSize)sizeForMessage:(id)arg1 contentViewStyle:(long long)arg2;
+ (struct CGSize)sizeForMessageWithObject:(id)arg1 message:(id)arg2 contentViewStyle:(long long)arg3;
+ (struct CGSize)sizeForMessageWithObject:(id)arg1 contentViewStyle:(long long)arg2;
@property(nonatomic) __weak id <MCChatShareContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) UIImageView *innerfromLabelBcView; // @synthesize innerfromLabelBcView=_innerfromLabelBcView;
@property(retain, nonatomic) UILabel *innerContentLabel; // @synthesize innerContentLabel=_innerContentLabel;
@property(retain, nonatomic) UILabel *innerTitleLabel; // @synthesize innerTitleLabel=_innerTitleLabel;
@property(retain, nonatomic) UIImageView *innerIconImageView; // @synthesize innerIconImageView=_innerIconImageView;
@property(retain, nonatomic) UIImageView *innerImageView; // @synthesize innerImageView=_innerImageView;
@property(retain, nonatomic) UIImageView *innerMaskViewImageView; // @synthesize innerMaskViewImageView=_innerMaskViewImageView;
- (void).cxx_destruct;
- (id)attributedTitle:(id)arg1;
- (void)updateMiniMessage:(id)arg1;
- (void)updateFestivalMessage:(id)arg1;
- (void)innerTapped:(id)arg1;
- (void)updateMessage:(id)arg1 contentViewStyle:(long long)arg2;
- (void)updateMessageWithObject:(id)arg1 message:(id)arg2 contentViewStyle:(long long)arg3;
- (void)updateMessageWithObject:(id)arg1 contentViewStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 delegate:(id)arg3;

@end

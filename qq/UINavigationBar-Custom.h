//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class NSString, UIImage;

@interface UINavigationBar (Custom)
+ (Class)class;
@property(nonatomic) _Bool bUseBasicBackgroundStyle;
@property(nonatomic) long long basicBackgroundStyle;
- (void)setCurrentThemeAppearance;
- (void)setDefaultThemeAppearance;
@property(retain, nonatomic) NSString *skinShadowImage; // @dynamic skinShadowImage;
@property(retain, nonatomic) NSString *skinBackgroundImage; // @dynamic skinBackgroundImage;
@property(retain, nonatomic) UIImage *skinBGImage; // @dynamic skinBGImage;
- (void)reloadAppearance;
@end

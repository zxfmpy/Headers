//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface HWSGInfoAlert : UIView
{
    NSString *info_;
    struct CGSize fontSize_;
    UIColor *_col;
}

+ (id)showInfo:(id)arg1 bgColor:(id)arg2 inView:(id)arg3 vertical:(float)arg4;
@property(retain, nonatomic) UIColor *col; // @synthesize col=_col;
- (void).cxx_destruct;
- (void)fadeAway;
- (void)remove;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 bgColor:(id)arg2 info:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

@class UILabel;

@interface ArticleCommentHeaderView : SSViewBase
{
    UILabel *_titleLabel;
}

+ (double)heightForHeaderView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)refreshTitleUI;
- (void)refreshTitle:(id)arg1;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


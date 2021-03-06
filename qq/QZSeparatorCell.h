//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer;

@interface QZSeparatorCell : UITableViewCell
{
    double _topSeparatorIndent;
    double _bottomSeparatorIndent;
    CALayer *_topSeparator;
    CALayer *_bottomSeparator;
}

- (void).cxx_destruct;
- (void)setBottomSeparatorIndent:(double)arg1;
- (void)showBottomSeparator;
- (void)showTopSeparator;
- (void)hideBottomSeparator;
- (void)hideTopSeparator;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


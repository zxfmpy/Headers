//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "KSFeedCommentComponentCell-Protocol.h"

@class KSLoadingMoreTrigger, NSString, UIActivityIndicatorView;

@interface KSLoadingMoreTableCell : UITableViewCell <KSFeedCommentComponentCell>
{
    KSLoadingMoreTrigger *_trigger;
    UIActivityIndicatorView *_indicatorView;
}

+ (double)cellHeight;
+ (double)heightWithViewModel:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) KSLoadingMoreTrigger *trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (void)hideLoading;
- (void)showLoading;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)bindViewModel:(id)arg1;
- (void)applyAttributeConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

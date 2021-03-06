//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSShareBar.h"

@class NSString, UIImageView;

@interface KSShareMerchantBar : KSShareBar
{
    NSString *_merchantName;
    NSString *_merchantInfo;
    CDUnknownBlockType _clickedBlock;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
@property(readonly, nonatomic) NSString *merchantInfo; // @synthesize merchantInfo=_merchantInfo;
@property(readonly, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
- (void).cxx_destruct;
- (void)didClicked:(id)arg1;
- (void)updateViews;
- (void)setMerchantName:(id)arg1 info:(id)arg2;
- (void)layoutSubviews;
- (void)commonInit;

@end


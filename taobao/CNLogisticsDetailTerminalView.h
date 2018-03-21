//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNLogisticsDetailCell.h"

@class CNLogisticsDetailTerminalModel, NSLayoutConstraint, UIImageView, UILabel;

@interface CNLogisticsDetailTerminalView : CNLogisticsDetailCell
{
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UIImageView *_iconimageView;
    NSLayoutConstraint *_iconimageViewWidth;
    NSLayoutConstraint *_iconimageViewHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *iconimageViewHeight; // @synthesize iconimageViewHeight=_iconimageViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *iconimageViewWidth; // @synthesize iconimageViewWidth=_iconimageViewWidth;
@property(nonatomic) __weak UIImageView *iconimageView; // @synthesize iconimageView=_iconimageView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)info:(id)arg1;
- (void)updateModel;
- (void)initModel;

// Remaining properties
@property(retain, nonatomic) CNLogisticsDetailTerminalModel *cellModel; // @dynamic cellModel;

@end

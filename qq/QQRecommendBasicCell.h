//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QQAvatarView, QQTableCellItem, UIButton, UIImageView, UILabel;
@protocol QQRecommendBasicCellDelegate;

@interface QQRecommendBasicCell : UITableViewCell
{
    UIImageView *_iconUserImageView;
    UILabel *_nickLabel;
    UILabel *_detailLabel;
    UIButton *_iconImageAcc;
    QQTableCellItem *_data;
    id <QQRecommendBasicCellDelegate> _delegate;
    QQAvatarView *_headView;
    int _xo;
}

- (void)touchIconAdd:(id)arg1;
- (void)touchHead:(id)arg1;
@property(retain, nonatomic) QQTableCellItem *data; // @dynamic data;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) id <QQRecommendBasicCellDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QQAvatarView *headView; // @dynamic headView;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBasePhotoCell.h>

@class QZEventPhotoModel, QZRichTextLabel, UIButton, UIImageView, UILabel, UIView;

@interface QZCommonLoverPhotoEventCell : QZBasePhotoCell
{
    UILabel *_dateLabel;
    UILabel *_festivalLabel;
    UIImageView *_loverTagImgView;
    UIView *_uploadersView;
    QZRichTextLabel *_eventDescLabel;
    UIButton *_descBtn;
    QZEventPhotoModel *_eventModel;
    UIImageView *_modifyLogoImgView;
}

+ (double)heightWithDescTitle:(id)arg1 isHost:(_Bool)arg2;
- (void).cxx_destruct;
- (void)onClickDescModifyBtn:(id)arg1;
- (void)updateContentWithRowModel:(id)arg1 isShareAlbum:(_Bool)arg2 isHost:(_Bool)arg3;

@end

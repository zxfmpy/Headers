//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupGiftSelectionView.h>

@class NSString, QQVisualEffectView, UIButton, UIImageView, UIView;

@interface QQGroupVideoGiftMarketView : QQGroupGiftSelectionView
{
    NSString *_currentGetMemberNick;
    NSString *_currentGetMemberUin;
    int _xo;
    QQVisualEffectView *_visualView;
    unsigned long long _groupCode;
    UIImageView *_memberArrow;
    UIView *_verticalLine;
    UIButton *_currentMember;
}

- (void).cxx_destruct;
- (void)showPersonal;
- (void)showPublic;
- (void)selectGetMember;
@property(retain, nonatomic) NSString *currentGetMemberNick; // @dynamic currentGetMemberNick;
- (void)setFlowerCountHighlight;
- (void)refreshFooterStatus;
- (id)initWithFrame:(struct CGRect)arg1 businessType:(unsigned long long)arg2 uin:(unsigned long long)arg3;

// Remaining properties
@property(retain, nonatomic) NSString *currentGetMemberUin; // @dynamic currentGetMemberUin;

@end

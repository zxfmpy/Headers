//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOTextCellView.h>

@class UIImageView, UILabel;

@interface QQAIOAudioTipsCellView : QQAIOTextCellView
{
    _Bool _beginTouchVideo;
    UIImageView *_callImg;
    UILabel *_hintText;
}

- (void).cxx_destruct;
- (void)hideBubble:(_Bool)arg1;
- (void)sendTipsTouchAIO:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)actionAskForMore:(id)arg1;
- (id)getMenuItems;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)didTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawLoadingAndFailIcon;
- (void)setupCallImageAndText;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBubble;
- (void)willDrawBubble;
- (void)prepareForReuse;
- (_Bool)shouldDrawText;
- (id)selfAioModel;
- (void)setAioModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

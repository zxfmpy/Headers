//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMItemElementBaseView.h>

@class NSMutableArray, QQSMItemElementChecklistRowView;

@interface QQSMItemElementChecklistView : QQSMItemElementBaseView
{
    QQSMItemElementChecklistRowView *_rowView;
    NSMutableArray *_checkList;
}

+ (struct CGSize)layoutElements:(id)arg1 withMaxSize:(struct CGSize)arg2;
- (void)dealloc;
- (_Bool)shouldHandleTouch:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)setQQSMItemElementBase:(id)arg1;

@end

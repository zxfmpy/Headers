//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QQRichControl, QQRichKeyBorad, UIEvent;

@protocol QQRichKeyBoradDelegate <NSObject>

@optional
- (void)richKeyBoradWillBeginDragging:(QQRichKeyBorad *)arg1;
- (void)didTouchRichKeyBorad:(QQRichKeyBorad *)arg1 withControl:(QQRichControl *)arg2 forEvent:(UIEvent *)arg3;
@end


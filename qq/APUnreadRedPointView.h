//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMessageReadTagView.h>

@interface APUnreadRedPointView : QQMessageReadTagView
{
    int _fontSize;
}

@property(nonatomic) int fontSize; // @synthesize fontSize=_fontSize;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)getFitSize;
- (void)setUnreadCount:(long long)arg1 unreadText:(id)arg2;

@end


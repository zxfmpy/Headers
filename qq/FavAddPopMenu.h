//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQTabView.h>

@class NSMutableArray;

@interface FavAddPopMenu : QQTabView
{
    NSMutableArray *_viewList;
    NSMutableArray *_accessibleElements;
    id _delegate;
}

+ (id)popMenuWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) NSMutableArray *viewList; // @synthesize viewList=_viewList;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)hide:(_Bool)arg1;

@end

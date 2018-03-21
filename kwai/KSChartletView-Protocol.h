//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol KSChartlet, KSChartletViewDelegate;

@protocol KSChartletView <NSObject>
@property(nonatomic) struct CGPoint charletCenter;
@property(retain, nonatomic) NSString *text;
@property(nonatomic) _Bool editing;
@property(nonatomic) __weak id <KSChartletViewDelegate> delegate;
- (struct CGPoint)centerThatFits:(struct CGPoint)arg1;
- (void)setActive:(_Bool)arg1;
- (_Bool)hasText;
- (id <KSChartlet>)chartlet;
- (id)initWithChartlet:(id <KSChartlet>)arg1;
@end

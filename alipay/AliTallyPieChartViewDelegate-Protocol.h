//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AliTallyPieChartView;

@protocol AliTallyPieChartViewDelegate <NSObject>
- (void)pieChartViewRenderAnimateEnd:(AliTallyPieChartView *)arg1;
- (void)pieChartViewRenderAnimateBegin:(AliTallyPieChartView *)arg1;
- (void)pieChartView:(AliTallyPieChartView *)arg1 didTouchStatusChanged:(_Bool)arg2;
- (void)switchTallyClass;
- (void)pieChartView:(AliTallyPieChartView *)arg1 didSelectedIndex:(long long)arg2;
@end


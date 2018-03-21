//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSError, QQTracerouteAndPingHandler, QQTracerouteStep;

@protocol QQTracerouteHandlerDelegate <NSObject>
- (void)tracerouteHandler:(QQTracerouteAndPingHandler *)arg1 tracerouteFailed:(NSError *)arg2;
- (void)tracerouteHandler:(QQTracerouteAndPingHandler *)arg1 endedTracerouteWithSteps:(NSArray *)arg2;

@optional
- (void)tracerouteHandler:(QQTracerouteAndPingHandler *)arg1 traceRouteStepDone:(QQTracerouteStep *)arg2;
- (void)tracerouteHandler:(QQTracerouteAndPingHandler *)arg1 traceRouteStepTimeout:(QQTracerouteStep *)arg2;
@end

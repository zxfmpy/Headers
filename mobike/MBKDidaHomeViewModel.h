//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKCarHailingOrderList, NSTimer, RACCommand, RACSignal;

@interface MBKDidaHomeViewModel : NSObject
{
    RACCommand *_rgcCommand;
    RACCommand *_startMonitoringHomeStatusCommand;
    RACCommand *_stopMonitoringHomeStatusCommand;
    RACSignal *_operationConfigUpdatedSignal;
    MBKCarHailingOrderList *_orderList;
    NSTimer *_statusTimer;
}

@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(retain, nonatomic) MBKCarHailingOrderList *orderList; // @synthesize orderList=_orderList;
@property(retain, nonatomic) RACSignal *operationConfigUpdatedSignal; // @synthesize operationConfigUpdatedSignal=_operationConfigUpdatedSignal;
@property(retain, nonatomic) RACCommand *stopMonitoringHomeStatusCommand; // @synthesize stopMonitoringHomeStatusCommand=_stopMonitoringHomeStatusCommand;
@property(retain, nonatomic) RACCommand *startMonitoringHomeStatusCommand; // @synthesize startMonitoringHomeStatusCommand=_startMonitoringHomeStatusCommand;
@property(retain, nonatomic) RACCommand *rgcCommand; // @synthesize rgcCommand=_rgcCommand;
- (void).cxx_destruct;
- (void)reset;
- (void)updateCarPoolOperationConfig;
- (id)init;

@end


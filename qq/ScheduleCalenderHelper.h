//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ScheduleActionDelegate-Protocol.h>

@class EKEventStore, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ScheduleCalenderHelper : NSObject <ScheduleActionDelegate>
{
    EKEventStore *_eventStore;
    NSMutableArray *_scheduleOptQueue;
    unsigned int _optIndex;
    _Bool _bOpting;
    NSObject<OS_dispatch_queue> *_optionSerialQueue;
}

+ (id)getInstance;
- (void)innerDoCgiChangeShortUrl:(id)arg1 Title:(id)arg2 StartDate:(double)arg3 EndDate:(double)arg4 Notes:(id)arg5 Location:(id)arg6 HGScheJumpURL:(id)arg7;
- (void)innerDoCgiChangeShortUrl:(id)arg1 Title:(id)arg2 StartDate:(double)arg3 EndDate:(double)arg4 Notes:(id)arg5 Location:(id)arg6;
- (void)doCgiChangeShortUrl:(id)arg1 Title:(id)arg2 StartDate:(double)arg3 EndDate:(double)arg4 Notes:(id)arg5 Location:(id)arg6;
- (void)addHGScheduleToCalender:(id)arg1;
- (id)parseShortURL:(id)arg1;
- (id)createPostBody:(id)arg1;
- (void)addHGActionToQueue:(id)arg1;
- (void)addActionToQueue:(short)arg1 scheduleId:(id)arg2;
- (void)innerOnActionResult:(id)arg1;
- (void)OnActionResult:(id)arg1;
- (void)innerDeleteScheduleFromCalender:(id)arg1 bAction:(_Bool)arg2;
- (void)deleteScheduleFromCalender:(id)arg1 bAction:(_Bool)arg2;
- (void)addScheduleToCalender:(id)arg1 Title:(id)arg2 StartDate:(double)arg3 EndDate:(double)arg4 Notes:(id)arg5 Location:(id)arg6;
- (_Bool)isAuthorizedForSchedule;
- (void)innerActionNextScheduleCalender;
- (void)actionNextScheduleCalender;
- (void)innerUpdateScheduleCalender:(id)arg1 bRequest:(_Bool)arg2;
- (void)updateScheduleCalender:(id)arg1 bRequest:(_Bool)arg2;
- (void)innerDeleteScheduleFromCalender:(id)arg1;
- (void)deleteScheduleFromCalender:(id)arg1;
- (void)innerAddScheduleToCalender:(id)arg1 bRequest:(_Bool)arg2;
- (void)addScheduleToCalender:(id)arg1 bRequest:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


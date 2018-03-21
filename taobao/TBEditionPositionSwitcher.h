//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TBEditionPositionSwitcher : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (_Bool)isEmptyString:(id)arg1;
+ (_Bool)isVillageUser;
+ (_Bool)isVillageLocation;
+ (_Bool)isMainlandLocation;
+ (_Bool)isOldUser;
+ (_Bool)isForigenLocation;
+ (_Bool)isVillageSelected;
+ (_Bool)isMainlandSelected;
+ (_Bool)isOldSelected;
+ (_Bool)isForigenSelected;
+ (id)ioQueue;
+ (double)getPromptAttemptForEdtionCode:(id)arg1;
+ (void)storePromptAttemptForEditionCode:(id)arg1;
+ (id)getRealPositionWithoutEditionSwitcherEnable;
+ (id)getSelectedPositionWithoutEditionSwitcherEnable;
+ (id)supportedEditionInfos;
+ (void)setRealPosition:(id)arg1;
+ (void)setSelectedPosition:(id)arg1;
+ (id)getRealPosition;
+ (_Bool)hasUserSelectedPosition;
+ (id)getSelectedPosition;
+ (void)showPositionSelectDialog;
+ (_Bool)isValidString:(id)arg1;
+ (void)refreshPositionWithSource:(unsigned long long)arg1;
+ (void)refreshPosition;
+ (void)userLogined:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void).cxx_destruct;

@end

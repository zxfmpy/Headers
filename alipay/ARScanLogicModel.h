//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ARLocalRecModel, CLLocation;

@interface ARScanLogicModel : NSObject
{
    unsigned long long _state;
    CLLocation *_userLocation;
    ARLocalRecModel *_localRecModel;
}

@property(retain, nonatomic) ARLocalRecModel *localRecModel; // @synthesize localRecModel=_localRecModel;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didReadyStartRecognize;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ASSNetworkCoordinator : NSObject
{
}

+ (id)parseKcartSensorItem:(id)arg1;
+ (id)generateKcartRequest:(id)arg1 withArgs:(id)arg2;
+ (id)updateKcartInfo:(id)arg1 withArgs:(id)arg2;
+ (id)parseSensorDataResult:(id)arg1;
+ (id)parseSensorDataItem:(id)arg1;
+ (id)generateDynamicRequest:(id)arg1 withArgs:(id)arg2;
+ (id)updateDynamicInfo:(id)arg1 withArgs:(id)arg2;
+ (id)parseRPCResult:(id)arg1;
+ (_Bool)filterNonStringType:(id)arg1;
+ (id)generateStaticRequest:(id)arg1 withArgs:(id)arg2 withModel:(id)arg3;
+ (id)updateStaticInfo:(id)arg1 withArgs:(id)arg2 withModel:(id)arg3;

@end


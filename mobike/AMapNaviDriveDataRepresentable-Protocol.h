//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMapNaviCruiseInfo, AMapNaviDriveManager, AMapNaviInfo, AMapNaviLocation, AMapNaviRoute, NSArray, NSString, UIImage;

@protocol AMapNaviDriveDataRepresentable <NSObject>

@optional
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateServiceAreaInfos:(NSArray *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateCameraInfos:(NSArray *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateCruiseInfo:(AMapNaviCruiseInfo *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateTrafficFacilities:(NSArray *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateTrafficStatus:(NSArray *)arg2;
- (void)driveManagerHideLaneInfo:(AMapNaviDriveManager *)arg1;
- (void)driveManager:(AMapNaviDriveManager *)arg1 showLaneBackInfo:(NSString *)arg2 laneSelectInfo:(NSString *)arg3;
- (void)driveManagerHideCrossImage:(AMapNaviDriveManager *)arg1;
- (void)driveManager:(AMapNaviDriveManager *)arg1 showCrossImage:(UIImage *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateNaviLocation:(AMapNaviLocation *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateNaviInfo:(AMapNaviInfo *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateNaviRoute:(AMapNaviRoute *)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateNaviRouteID:(long long)arg2;
- (void)driveManager:(AMapNaviDriveManager *)arg1 updateNaviMode:(long long)arg2;
@end


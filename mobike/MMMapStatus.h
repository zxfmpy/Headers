//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMMapStatus : NSObject
{
    double _zoomLevel;
    double _rotation;
    double _overlooking;
    struct CLLocationCoordinate2D _centerCoordinate;
}

+ (id)statusWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 rotation:(double)arg3 overlooking:(double)arg4;
@property(nonatomic) double overlooking; // @synthesize overlooking=_overlooking;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (id)description;

@end

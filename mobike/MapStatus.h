//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MapStatus : NSObject
{
    _Bool showTraffic;
    _Bool showsBuildings;
    long long mapType;
    double zoom;
    double rotateDegree;
    double cameraDegree;
    struct CLLocationCoordinate2D centerCoordinate;
}

@property(nonatomic) _Bool showsBuildings; // @synthesize showsBuildings;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate;
@property(nonatomic) double cameraDegree; // @synthesize cameraDegree;
@property(nonatomic) double rotateDegree; // @synthesize rotateDegree;
@property(nonatomic) double zoom; // @synthesize zoom;
@property(nonatomic) _Bool showTraffic; // @synthesize showTraffic;
@property(nonatomic) long long mapType; // @synthesize mapType;

@end

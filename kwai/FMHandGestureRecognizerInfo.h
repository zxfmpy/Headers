//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMHandGestureRecognizerInfo : NSObject
{
    int _result;
    int _lastDetectedResult;
    double _ratio;
    double _startTime;
    double _endTime;
    double _left;
    double _top;
    double _width;
    double _height;
    struct CGPoint _location;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double top; // @synthesize top=_top;
@property(nonatomic) double left; // @synthesize left=_left;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) int lastDetectedResult; // @synthesize lastDetectedResult=_lastDetectedResult;
@property(nonatomic) int result; // @synthesize result=_result;

@end

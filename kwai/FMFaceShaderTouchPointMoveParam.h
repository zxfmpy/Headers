//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMFaceShaderTouchPointMoveParam : NSObject
{
    _Bool _touchMoving;
    _Bool _playingExtendMoving;
    float _currentPlayingTime;
    int _touchMovePointXUniform;
    int _touchMovePointYUniform;
    int _touchMovePointTimeUniform;
    int _touchMovingUniform;
    int _playingExtendMovingUniform;
    int _currentPlayingTimeUniform;
    int _lastPointIndexUniform;
    int _currentPointIndex;
    int _maxMovePoint;
    float *_touchMovePointX;
    float *_touchMovePointY;
    float *_touchMovePointTime;
    double _startPlayingTime;
    double _endPlayingTime;
    double _playingExtendTime;
}

@property(nonatomic) int maxMovePoint; // @synthesize maxMovePoint=_maxMovePoint;
@property(nonatomic) int currentPointIndex; // @synthesize currentPointIndex=_currentPointIndex;
@property(nonatomic) double playingExtendTime; // @synthesize playingExtendTime=_playingExtendTime;
@property(nonatomic) double endPlayingTime; // @synthesize endPlayingTime=_endPlayingTime;
@property(nonatomic) double startPlayingTime; // @synthesize startPlayingTime=_startPlayingTime;
@property(nonatomic) int lastPointIndexUniform; // @synthesize lastPointIndexUniform=_lastPointIndexUniform;
@property(nonatomic) int currentPlayingTimeUniform; // @synthesize currentPlayingTimeUniform=_currentPlayingTimeUniform;
@property(nonatomic) int playingExtendMovingUniform; // @synthesize playingExtendMovingUniform=_playingExtendMovingUniform;
@property(nonatomic) int touchMovingUniform; // @synthesize touchMovingUniform=_touchMovingUniform;
@property(nonatomic) int touchMovePointTimeUniform; // @synthesize touchMovePointTimeUniform=_touchMovePointTimeUniform;
@property(nonatomic) int touchMovePointYUniform; // @synthesize touchMovePointYUniform=_touchMovePointYUniform;
@property(nonatomic) int touchMovePointXUniform; // @synthesize touchMovePointXUniform=_touchMovePointXUniform;
@property(nonatomic) float currentPlayingTime; // @synthesize currentPlayingTime=_currentPlayingTime;
@property(nonatomic) _Bool playingExtendMoving; // @synthesize playingExtendMoving=_playingExtendMoving;
@property(nonatomic) _Bool touchMoving; // @synthesize touchMoving=_touchMoving;
@property(nonatomic) float *touchMovePointTime; // @synthesize touchMovePointTime=_touchMovePointTime;
@property(nonatomic) float *touchMovePointY; // @synthesize touchMovePointY=_touchMovePointY;
@property(nonatomic) float *touchMovePointX; // @synthesize touchMovePointX=_touchMovePointX;
- (void)dealloc;
- (id)initWithMaxPoint:(int)arg1;

@end

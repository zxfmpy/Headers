//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCCombineFrame : NSObject
{
    struct opaqueCMSampleBuffer *_sampleBuffer;
    long long _rotation;
    struct CGRect _crop;
    struct CGRect _position;
}

@property(nonatomic) struct CGRect position; // @synthesize position=_position;
@property(nonatomic) struct CGRect crop; // @synthesize crop=_crop;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;

@end


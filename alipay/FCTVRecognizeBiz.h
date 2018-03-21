//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APAudioSessionManagerDelegate-Protocol.h"
#import "FCAudioRecognizerDelegate-Protocol.h"

@class FCTVRecognizeRequest, FCTVRecognizer, NSString;

@interface FCTVRecognizeBiz : NSObject <FCAudioRecognizerDelegate, APAudioSessionManagerDelegate>
{
    FCTVRecognizer *_recognizer;
    CDUnknownBlockType _callBack;
    FCTVRecognizeRequest *_request;
}

@property(retain, nonatomic) FCTVRecognizeRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) FCTVRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void).cxx_destruct;
- (void)recognizer:(id)arg1 didFinishWithResult:(id)arg2;
- (void)recognizer:(id)arg1 needsSessionActive:(_Bool)arg2;
- (id)defaultErrorResponse;
- (void)doCallBackWithDefaultError;
- (_Bool)stopIfNeeded;
- (_Bool)stop;
- (_Bool)start;
- (void)dealloc;
- (void)handleRecognizeRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

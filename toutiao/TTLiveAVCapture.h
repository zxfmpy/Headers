//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSString, UIView, VCPreviewView;
@protocol OS_dispatch_queue, TTFaceTrackerProtocol;

@interface TTLiveAVCapture : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureDevice *_microphone;
    AVCaptureDeviceInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    NSObject<OS_dispatch_queue> *audioProcessingQueue;
    int m_fps;
    _Bool m_frontMirrored;
    _Bool m_torchOn;
    _Bool _continuousAutofocus;
    _Bool _continuousExposure;
    struct CGPoint _focusPOI;
    struct CGPoint _exposurePOI;
    _Bool _capturePaused;
    _Bool _m_orientationLocked;
    _Bool _m_useInterfaceOrientation;
    _Bool _needCaptureCameraImage;
    CDUnknownBlockType _videoProcessingCallback;
    CDUnknownBlockType _audioProcessingCallback;
    id <TTFaceTrackerProtocol> _faceTracker;
    VCPreviewView *_previewView;
    UIView *_contentView;
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    NSObject<OS_dispatch_queue> *_camQueue;
    CDUnknownBlockType _captureVideoFrameBlock;
}

@property(nonatomic) _Bool needCaptureCameraImage; // @synthesize needCaptureCameraImage=_needCaptureCameraImage;
@property(copy, nonatomic) CDUnknownBlockType captureVideoFrameBlock; // @synthesize captureVideoFrameBlock=_captureVideoFrameBlock;
@property(nonatomic) _Bool m_useInterfaceOrientation; // @synthesize m_useInterfaceOrientation=_m_useInterfaceOrientation;
@property(nonatomic) _Bool m_orientationLocked; // @synthesize m_orientationLocked=_m_orientationLocked;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *camQueue; // @synthesize camQueue=_camQueue;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VCPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) id <TTFaceTrackerProtocol> faceTracker; // @synthesize faceTracker=_faceTracker;
@property(copy, nonatomic) CDUnknownBlockType audioProcessingCallback; // @synthesize audioProcessingCallback=_audioProcessingCallback;
@property(copy, nonatomic) CDUnknownBlockType videoProcessingCallback; // @synthesize videoProcessingCallback=_videoProcessingCallback;
- (void).cxx_destruct;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureVideoFrameFromCamera:(CDUnknownBlockType)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)orientationChanged:(id)arg1;
- (void)resumeCameraCapture;
- (void)pauseCameraCapture;
- (void)stopCameraCapture;
- (void)startCameraCapture;
- (_Bool)isRunning;
- (_Bool)cameraRampToZoomFactor:(double)arg1;
- (double)cameraMaxZoomFactor;
- (_Bool)cameraZoomSupported;
- (double)cameraZoomFactor;
@property(nonatomic) _Bool continuousExposure;
@property(nonatomic) _Bool continuousAutofocus;
@property(nonatomic) struct CGPoint exposurePointOfInterest;
@property(nonatomic) struct CGPoint focusPointOfInterest;
- (void)reorientCamera;
- (void)toggleCamera;
- (long long)cameraPosition;
- (_Bool)hasFlash;
@property(nonatomic) _Bool torch;
- (void)setOrientationLocked:(_Bool)arg1;
- (_Bool)orientationLocked;
- (id)cameraWithPosition:(int)arg1;
- (void)removeInputsAndOutputs;
- (_Bool)removeAudioInputsAndOutputs;
- (_Bool)addAudioInputsAndOutputs;
- (void)setupCameraWith:(int)arg1 useFront:(_Bool)arg2 frontMirrored:(_Bool)arg3 useInterfaceOrientation:(_Bool)arg4 sessionPreset:(id)arg5;
- (void)setupCameraWith:(int)arg1 useFront:(_Bool)arg2 frontMirrored:(_Bool)arg3 useInterfaceOrientation:(_Bool)arg4 sessionPreset:(id)arg5 callbackBlock:(CDUnknownBlockType)arg6;
- (id)initWithPreview:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


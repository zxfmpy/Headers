//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ARQRManager, NSMutableData, QBarReader;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLTexture;

@interface QRDetectProcesser : NSObject
{
    unsigned long long _frameCount;
    _Bool _decoding;
    struct CGRect _scanRect;
    double _textDetectorTime;
    struct CGRect _cropPixelRect;
    double _lastCheckLightTime;
    double _luma;
    _Bool _firstCapture;
    _Bool _isSupportMetal;
    id <MTLBuffer> _texBuffer;
    id <MTLDevice> _device;
    struct __CVMetalTextureCache *_textureCache;
    id <MTLTexture> _outTexture;
    id <MTLCommandQueue> _commandQueue;
    NSMutableData *_imageData;
    unsigned long long _frameQRCount;
    _Bool _arTracking;
    _Bool _deviceZooming;
    _Bool _arLoading;
    QBarReader *_qbarReader;
    ARQRManager *_manager;
    struct CGRect _cropRect;
}

@property(nonatomic) _Bool arLoading; // @synthesize arLoading=_arLoading;
@property(nonatomic) __weak ARQRManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) QBarReader *qbarReader; // @synthesize qbarReader=_qbarReader;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) _Bool deviceZooming; // @synthesize deviceZooming=_deviceZooming;
@property(nonatomic) _Bool arTracking; // @synthesize arTracking=_arTracking;
- (void).cxx_destruct;
- (_Bool)needLightCheck;
- (void)resetCheckLightTime;
- (void)checkNeedTorch:(id)arg1;
- (void)getTorchLuma;
- (_Bool)decodeLibImageThread:(id)arg1;
- (id)getQRDecodeResult:(struct CGImage *)arg1;
- (id)qrcodeDecode:(struct CGImage *)arg1;
- (id)rotateImg:(id)arg1;
- (struct CGRect)initScreenCropSize:(double)arg1 originX:(double)arg2 originY:(double)arg3 previewHeight:(double)arg4 previewWidth:(double)arg5;
- (void)decodeImageWithClip:(_Bool)arg1 sampleBuffer:(struct __CVBuffer *)arg2 width:(double)arg3 height:(double)arg4;
- (void)captureOutput:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)isSupportMetal;
- (id)init;

@end


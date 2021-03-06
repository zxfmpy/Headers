//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQMFaceESRenderDelegate-Protocol.h>

@class NSString;

@interface QQMFaceESRender : NSObject <QQMFaceESRenderDelegate>
{
    int backingWidth;
    int backingHeight;
    unsigned int viewRenderbuffer;
    unsigned int viewFramebuffer;
    unsigned int texture[1];
}

- (void)removeContext;
- (_Bool)resizeFromLayer:(id)arg1;
- (void)clear;
- (void)render:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


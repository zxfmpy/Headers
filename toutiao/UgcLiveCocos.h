//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface UgcLiveCocos : NSObject
{
    _Bool startFlag;
    NSObject<OS_dispatch_semaphore> *_singnal;
    NSObject<OS_dispatch_queue> *_cocosQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setScreenScale:(double)arg1;
- (void)setImageLoadContext:(CDUnknownFunctionPointerType)arg1 tryLoadImageContext:(CDUnknownFunctionPointerType)arg2;
- (void)destory;
- (id)getStickerFilePath:(long long)arg1;
- (id)getSupportStickerList;
- (id)getSupportGiftList;
- (void)addLiveEventListener:(void *)arg1;
- (int)getResVersion;
- (void)reloadResource;
- (void)setFileSearchPaths:(id)arg1;
- (void)startInView:(id)arg1 WithAnimationInterval:(float)arg2 renderVideo:(_Bool)arg3 completed:(CDUnknownBlockType)arg4;
- (void)stopAnimation;
- (void)startAnimation;
- (void)__willEnterForeground;
- (void)__didEnterBackground;
- (void)__didBecomeActive;
- (void)__resignActive;
- (void)__registerNotification;
- (id)init;

@end

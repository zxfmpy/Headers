//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class KSIMImageUploadItem;

@interface KSAttachmentUploadOperation : NSOperation
{
    KSIMImageUploadItem *_uploadItem;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _progress;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) KSIMImageUploadItem *uploadItem; // @synthesize uploadItem=_uploadItem;
- (void).cxx_destruct;
- (void)_finishOperation;
- (void)_updateMessageToFailed:(id)arg1;
- (id)_msgToSend;
- (void)main;
- (void)start;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString, NSThread, QZUploadDNSMgr;

@interface QZUploadDNSRequest : NSOperation
{
    NSString *_domain;
    NSString *_ip;
    id _apnKey;
    NSThread *_callBackThread;
    _Bool _finished;
    _Bool _inProgress;
    _Bool _cancelled;
    NSError *_err;
    QZUploadDNSMgr *_dnsMgr;
    int _xo;
}

- (void).cxx_destruct;
- (_Bool)isCancelled;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (void)start;
- (id)getIPbyDNS;
- (void)markAsFinished;
- (void)cancel;
- (id)initWithDomain:(id)arg1;

// Remaining properties
@property(retain, nonatomic) id apnKey; // @dynamic apnKey;
@property(retain, nonatomic) NSThread *callBackThread; // @dynamic callBackThread;
@property(retain, nonatomic) QZUploadDNSMgr *dnsMgr; // @dynamic dnsMgr;
@property(retain, nonatomic) NSString *domain; // @dynamic domain;
@property(retain, nonatomic) NSError *err; // @dynamic err;
@property(retain, nonatomic) NSString *ip; // @dynamic ip;

@end

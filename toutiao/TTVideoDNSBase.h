//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVideoEngineDNSBaseProtocol-Protocol.h"

@class NSString;
@protocol TTVideoEngineDNSProtocol;

@interface TTVideoDNSBase : NSObject <TTVideoEngineDNSBaseProtocol>
{
    id <TTVideoEngineDNSProtocol> _delegate;
    NSString *_hostname;
}

@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) __weak id <TTVideoEngineDNSProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithHostname:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

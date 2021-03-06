//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;
@protocol KLConnectionDelegate;

@protocol KLConnectionProtocol <NSObject>
@property(nonatomic) __weak id <KLConnectionDelegate> delegate;
- (int)send:(NSData *)arg1;
- (void)disconnect;
- (void)connect:(NSString *)arg1 port:(unsigned short)arg2 timeout:(double)arg3;
- (id)initWithDelegate:(id <KLConnectionDelegate>)arg1;
@end


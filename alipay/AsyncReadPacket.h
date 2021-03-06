//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface AsyncReadPacket : NSObject
{
    NSMutableData *buffer;
    unsigned long long startOffset;
    unsigned long long bytesDone;
    unsigned long long maxLength;
    double timeout;
    unsigned long long readLength;
    NSData *term;
    _Bool bufferOwner;
    unsigned long long originalBufferLength;
    long long tag;
}

- (void).cxx_destruct;
- (long long)searchForTermAfterPreBuffering:(unsigned long long)arg1;
- (unsigned long long)prebufferReadLengthForTerm;
- (unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(_Bool *)arg2;
- (unsigned long long)readLengthForTerm;
- (unsigned long long)readLengthForNonTerm;
- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7;

@end


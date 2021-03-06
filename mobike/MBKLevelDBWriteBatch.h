//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKLevelDBWriteBatch-Protocol.h"

@class NSString;

@interface MBKLevelDBWriteBatch : NSObject <MBKLevelDBWriteBatch>
{
    struct WriteBatch _batch;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)removeKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forbeginWriteBatchKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


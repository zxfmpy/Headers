//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQLockDictionary;

@interface QQRecallModelCacheManager : NSObject
{
    QQLockDictionary *_cache;
}

- (void)removeAllItem;
- (id)getItemKey:(int)arg1 andUin:(id)arg2;
- (id)getItemKey:(struct RecallModel *)arg1;
- (id)load:(struct RecallModel *)arg1;
- (_Bool)isRecallDuplicate:(id)arg1;
- (void)sortRecallModel:(struct RecallModel *)arg1;
- (void)removeModelFromCache:(struct RecallModel *)arg1;
- (_Bool)cacheRecallModel:(struct RecallModel *)arg1;
- (void)dealloc;
- (id)init;

@end

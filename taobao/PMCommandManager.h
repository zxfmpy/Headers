//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKTMultiDictionary;

@interface PMCommandManager : NSObject
{
    MKTMultiDictionary *_processDict;
}

+ (void)processCommand:(id)arg1;
+ (_Bool)registerCommand:(long long)arg1 impl:(Class)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) MKTMultiDictionary *processDict; // @synthesize processDict=_processDict;
- (void).cxx_destruct;

@end


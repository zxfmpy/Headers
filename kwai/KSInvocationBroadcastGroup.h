//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface KSInvocationBroadcastGroup : NSObject
{
    NSMutableArray *_units;
}

+ (id)group;
@property(retain, nonatomic) NSMutableArray *units; // @synthesize units=_units;
- (void).cxx_destruct;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol LYWStoreSubscriber;

@protocol LYWSubscribe <NSObject>
- (void)unsubscribe:(id <LYWStoreSubscriber>)arg1;
- (void)subscribe:(id <LYWStoreSubscriber>)arg1 selector:(id <LYWStateType> (^)(id <LYWStateType>))arg2;
@end


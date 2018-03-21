//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;

@protocol TBSCSProducerProtocol <NSObject>
@property(nonatomic) __weak id delegate;
@property(retain, nonatomic) NSMutableDictionary *options;
@property(copy, nonatomic) NSString *targetId;
@property(copy, nonatomic) NSString *namespace;
- (void)renderView;
- (struct UIView *)getView;

@optional
- (void)afterViewCreateHandle;
- (void)preViewCreateHandle;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol PirateEngineDataProtocol <NSObject>

@optional
- (NSString *)unzipAnimationWithUrl:(NSString *)arg1;
- (void)downloadAnimationZipWithUrl:(NSString *)arg1;
- (void)downloadImageWithUrl:(NSString *)arg1 usingBlock:(void (^)(UIImage *))arg2;
- (void)userDataDidFinishedLoad:(_Bool)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImageView;

@protocol TBOrderImageProtocol <NSObject>
- (void)iconImageFromUrl:(NSString *)arg1 imageView:(UIImageView *)arg2 completion:(void (^)(UIImage *))arg3;
- (void)statusImageFromUrl:(NSString *)arg1 imageView:(UIImageView *)arg2;
- (void)itemImageFromUrl:(NSString *)arg1 imageView:(UIImageView *)arg2;
- (void)iconImageFromUrl:(NSString *)arg1 imageView:(UIImageView *)arg2;
@end


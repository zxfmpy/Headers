//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSArray, NSString;

@interface QQWalletImageSeq : JceObjectV2
{
    _Bool _hasPlayOnce;
    NSArray *_images;
}

+ (id)jceType;
@property(nonatomic) _Bool hasPlayOnce; // @synthesize hasPlayOnce=_hasPlayOnce;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic, getter=jce_imageNum, setter=setJce_imageNum:) int jcev2_p_0_o_imageNum; // @dynamic jcev2_p_0_o_imageNum;
@property(retain, nonatomic, getter=jce_dynamicImageZip, setter=setJce_dynamicImageZip:) NSString *jcev2_p_1_o_dynamicImageZip; // @dynamic jcev2_p_1_o_dynamicImageZip;
@property(nonatomic, getter=jce_interFrameTime, setter=setJce_interFrameTime:) int jcev2_p_2_o_interFrameTime; // @dynamic jcev2_p_2_o_interFrameTime;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EmojiStickerInfo, NSString;

@interface CustomFaceAttr : NSObject
{
    unsigned int _imgBizType;
    unsigned int _customFaceType;
    unsigned int _emojiPackageId;
    EmojiStickerInfo *_emojiStickerInfo;
    int _xo;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) EmojiStickerInfo *emojiStickerInfo; // @synthesize emojiStickerInfo=_emojiStickerInfo;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) unsigned int customFaceType; // @dynamic customFaceType;
@property(nonatomic) unsigned int emojiPackageId; // @dynamic emojiPackageId;
@property(nonatomic) unsigned int imgBizType; // @dynamic imgBizType;

@end


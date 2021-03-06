//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSDiscardableContent-Protocol.h"

@interface MATileRenderObj : NSObject <NSDiscardableContent>
{
    unsigned int _textureId;
    int _downloadStatus;
    id _image;
    long long _accessCount;
}

@property(nonatomic) long long accessCount; // @synthesize accessCount=_accessCount;
@property(nonatomic) int downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) unsigned int textureId; // @synthesize textureId=_textureId;
@property(retain, nonatomic) id image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (id)init;

@end


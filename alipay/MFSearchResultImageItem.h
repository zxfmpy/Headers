//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MFSearchResultImageItem : NSObject
{
    int _isAnimated;
    int _width;
    int _height;
    NSString *_url;
    NSString *_type;
    long long _fsize;
    NSString *_sourceName;
    NSString *_sourceLogo;
    NSString *_activeSchema;
    NSString *_md5;
    NSString *_isvId;
    NSString *_thumbUrl;
    NSString *_hitTag;
}

@property(retain, nonatomic) NSString *hitTag; // @synthesize hitTag=_hitTag;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *isvId; // @synthesize isvId=_isvId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *activeSchema; // @synthesize activeSchema=_activeSchema;
@property(retain, nonatomic) NSString *sourceLogo; // @synthesize sourceLogo=_sourceLogo;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) long long fsize; // @synthesize fsize=_fsize;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int isAnimated; // @synthesize isAnimated=_isAnimated;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

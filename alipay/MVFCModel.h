//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MVFCModel : NSObject
{
    NSString *_showId;
    NSString *_fcTitle;
    NSString *_posterUrl;
    NSString *_backgroundUrl;
    NSString *_fcFilmName;
    NSString *_commentId;
    NSString *_comment;
    NSString *_commentUrl;
}

@property(copy, nonatomic) NSString *commentUrl; // @synthesize commentUrl=_commentUrl;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *fcFilmName; // @synthesize fcFilmName=_fcFilmName;
@property(copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(copy, nonatomic) NSString *posterUrl; // @synthesize posterUrl=_posterUrl;
@property(copy, nonatomic) NSString *fcTitle; // @synthesize fcTitle=_fcTitle;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MQZFaceRectModel : NSObject
{
    _Bool _isShowFork;
    _Bool _isDeleted;
    _Bool _hasRightToDel;
    _Bool _clickText;
    int _scaleX;
    int _scaleY;
    int _scaleW;
    int _scaleH;
    NSString *_nick;
    NSString *_uin;
    NSArray *_recomendUins;
    NSString *_groupid;
    NSString *_faceLayerModelKey;
    struct CGRect _faceRect;
    struct CGRect _textRect;
    struct CGRect _delRect;
}

@property(copy, nonatomic) NSString *faceLayerModelKey; // @synthesize faceLayerModelKey=_faceLayerModelKey;
@property(copy, nonatomic) NSString *groupid; // @synthesize groupid=_groupid;
@property(copy, nonatomic) NSArray *recomendUins; // @synthesize recomendUins=_recomendUins;
@property(nonatomic) _Bool clickText; // @synthesize clickText=_clickText;
@property(nonatomic) _Bool hasRightToDel; // @synthesize hasRightToDel=_hasRightToDel;
@property(nonatomic) int scaleH; // @synthesize scaleH=_scaleH;
@property(nonatomic) int scaleW; // @synthesize scaleW=_scaleW;
@property(nonatomic) int scaleY; // @synthesize scaleY=_scaleY;
@property(nonatomic) int scaleX; // @synthesize scaleX=_scaleX;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isShowFork; // @synthesize isShowFork=_isShowFork;
@property(nonatomic) struct CGRect delRect; // @synthesize delRect=_delRect;
@property(nonatomic) struct CGRect textRect; // @synthesize textRect=_textRect;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
- (void).cxx_destruct;
- (_Bool)isCanMarkThiFace;
- (void)convertFromMarkUinInPhoto:(id)arg1;
- (id)init;

@end

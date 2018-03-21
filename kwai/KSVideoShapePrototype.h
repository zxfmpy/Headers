//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface KSVideoShapePrototype : NSObject
{
    UIImage *_image;
    UIImage *_resizableImage;
    NSArray *_subImagesCache;
    _Bool _allowsTextInput;
    NSString *_imagePath;
    NSString *_imageName;
    double _imageScale;
    long long _scaleMode;
    NSString *_textColorString;
    long long _textDirection;
    NSArray *_subImages;
    struct UIEdgeInsets _imageEdgeInsets;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(readonly, nonatomic) NSArray *subImages; // @synthesize subImages=_subImages;
@property(nonatomic) _Bool allowsTextInput; // @synthesize allowsTextInput=_allowsTextInput;
@property(nonatomic) long long textDirection; // @synthesize textDirection=_textDirection;
@property(retain, nonatomic) NSString *textColorString; // @synthesize textColorString=_textColorString;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (void).cxx_destruct;
- (void)drawImageInRect:(struct CGRect)arg1;
- (void)clearSubImagesCache;
- (void)buildSubImagesCache;
- (struct CGRect)textRectForImageRect:(struct CGRect)arg1;
- (id)thumbnail;
- (id)resizableImage;
- (id)image;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJsonObject:(id)arg1 scale:(double)arg2;
- (id)jsonObject;

@end

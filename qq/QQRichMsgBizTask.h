//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBizTaskBase.h>

@class NSString, UIImage;

@interface QQRichMsgBizTask : QQBizTaskBase
{
    NSString *_imageOrigUrl;
    NSString *_puin;
    NSString *_title;
    NSString *_summary;
    NSString *_targetUrl;
    NSString *_imageUrl;
    UIImage *_image;
    NSString *_sourceName;
    _Bool _needBack;
    id _context;
    int _xo;
}

- (void)onImageDownloadNote:(id)arg1;
- (void)onBizTaskImageCompleted;
- (id)getSourceName;
- (id)createSourceElement;
- (id)createXMLMessage;
- (void)main;
- (id)shareType;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) id context; // @dynamic context;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(retain, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
@property(nonatomic) _Bool needBack; // @dynamic needBack;
@property(retain, nonatomic) NSString *puin; // @dynamic puin;
@property(retain, nonatomic) NSString *sourceName; // @dynamic sourceName;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
@property(retain, nonatomic) NSString *targetUrl; // @dynamic targetUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

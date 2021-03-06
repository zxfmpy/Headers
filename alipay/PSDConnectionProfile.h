//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString, PSDRouter;

@interface PSDConnectionProfile : NSObject
{
    _Bool _isXHR;
    _Bool _isMainDoc;
    int _statusCode;
    int _statusCode105Number;
    int _statusCode302Number;
    int _statusCode304Number;
    int _statusCode300_399Number;
    int _statusCode404Number;
    int _statusCode400_499Number;
    int _statusCode500_599Number;
    int _statusCode1000Number;
    int _htmlNumber;
    int _cssNumber;
    int _jsNumber;
    int _imageNumber;
    int _otherNumber;
    int _totalNumber;
    float _mainDocHtmlSize;
    float _htmlTotalSize;
    float _cssTotalSize;
    float _jsTotalSize;
    float _imageTotalSize;
    float _otherTotalSize;
    float _totalSize;
    int _resourceSize50kNumber;
    int _resourceSize200kNumber;
    int _syncAjaxNumber;
    int _imageSize60kNumber;
    NSString *_channelId;
    NSDate *_startDate;
    NSDate *_firstByteDate;
    NSDate *_lastByteDate;
    NSDate *_finishLoadDate;
    NSMutableArray *_requestURLs;
    NSMutableArray *_imageSize60kUrls;
    NSMutableArray *_resourceSize200kUrls;
    PSDRouter *_router;
    NSString *_gzip;
    NSString *_contentType;
}

@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *gzip; // @synthesize gzip=_gzip;
@property(retain, nonatomic) PSDRouter *router; // @synthesize router=_router;
@property(nonatomic) _Bool isMainDoc; // @synthesize isMainDoc=_isMainDoc;
@property(nonatomic) _Bool isXHR; // @synthesize isXHR=_isXHR;
@property(retain, nonatomic) NSMutableArray *resourceSize200kUrls; // @synthesize resourceSize200kUrls=_resourceSize200kUrls;
@property(retain, nonatomic) NSMutableArray *imageSize60kUrls; // @synthesize imageSize60kUrls=_imageSize60kUrls;
@property(nonatomic) int imageSize60kNumber; // @synthesize imageSize60kNumber=_imageSize60kNumber;
@property(nonatomic) int syncAjaxNumber; // @synthesize syncAjaxNumber=_syncAjaxNumber;
@property(nonatomic) int resourceSize200kNumber; // @synthesize resourceSize200kNumber=_resourceSize200kNumber;
@property(nonatomic) int resourceSize50kNumber; // @synthesize resourceSize50kNumber=_resourceSize50kNumber;
@property(nonatomic) float totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) float otherTotalSize; // @synthesize otherTotalSize=_otherTotalSize;
@property(nonatomic) float imageTotalSize; // @synthesize imageTotalSize=_imageTotalSize;
@property(nonatomic) float jsTotalSize; // @synthesize jsTotalSize=_jsTotalSize;
@property(nonatomic) float cssTotalSize; // @synthesize cssTotalSize=_cssTotalSize;
@property(nonatomic) float htmlTotalSize; // @synthesize htmlTotalSize=_htmlTotalSize;
@property(nonatomic) float mainDocHtmlSize; // @synthesize mainDocHtmlSize=_mainDocHtmlSize;
@property(nonatomic) int totalNumber; // @synthesize totalNumber=_totalNumber;
@property(nonatomic) int otherNumber; // @synthesize otherNumber=_otherNumber;
@property(nonatomic) int imageNumber; // @synthesize imageNumber=_imageNumber;
@property(nonatomic) int jsNumber; // @synthesize jsNumber=_jsNumber;
@property(nonatomic) int cssNumber; // @synthesize cssNumber=_cssNumber;
@property(nonatomic) int htmlNumber; // @synthesize htmlNumber=_htmlNumber;
@property(nonatomic) int statusCode1000Number; // @synthesize statusCode1000Number=_statusCode1000Number;
@property(nonatomic) int statusCode500_599Number; // @synthesize statusCode500_599Number=_statusCode500_599Number;
@property(nonatomic) int statusCode400_499Number; // @synthesize statusCode400_499Number=_statusCode400_499Number;
@property(nonatomic) int statusCode404Number; // @synthesize statusCode404Number=_statusCode404Number;
@property(nonatomic) int statusCode300_399Number; // @synthesize statusCode300_399Number=_statusCode300_399Number;
@property(nonatomic) int statusCode304Number; // @synthesize statusCode304Number=_statusCode304Number;
@property(nonatomic) int statusCode302Number; // @synthesize statusCode302Number=_statusCode302Number;
@property(nonatomic) int statusCode105Number; // @synthesize statusCode105Number=_statusCode105Number;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSMutableArray *requestURLs; // @synthesize requestURLs=_requestURLs;
@property(retain, nonatomic) NSDate *finishLoadDate; // @synthesize finishLoadDate=_finishLoadDate;
@property(retain, nonatomic) NSDate *lastByteDate; // @synthesize lastByteDate=_lastByteDate;
@property(retain, nonatomic) NSDate *firstByteDate; // @synthesize firstByteDate=_firstByteDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (void)printProfile;
- (void)merge:(id)arg1;
- (void)reset;
- (id)init;

@end


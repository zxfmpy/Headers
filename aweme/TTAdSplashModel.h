//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface TTAdSplashModel : NSObject <NSCoding>
{
    _Bool _isGif;
    _Bool _videoMute;
    unsigned long long _adModelType;
    double _requestTimeInterval;
    NSString *_splashID;
    NSString *_logExtra;
    NSString *_display_density;
    double _displayTime;
    long long _splashDisplayAfterSecond;
    long long _splashExpireSeconds;
    long long _splashInterval;
    long long _splashLeaveInterval;
    NSString *_splashOpenURL;
    NSArray *_splashOpenUrlList;
    NSString *_splashActionType;
    NSString *_splashDownloadURLStr;
    NSString *_splashAppName;
    NSString *_splashAlertText;
    NSString *_splashAppleID;
    NSString *_splashWebURLStr;
    NSArray *_splashWebUrlList;
    NSString *_splashWebTitle;
    NSArray *_splashTrackURLStrings;
    NSArray *_splashClickTrackURLStrings;
    NSDictionary *_imageInfo;
    NSDictionary *_landscapeImageInfo;
    NSNumber *_predownload;
    NSNumber *_splashBannerMode;
    NSNumber *_splashShowOnWifiOnly;
    NSNumber *_displaySkipButton;
    NSNumber *_displayViewButton;
    NSString *_buttonText;
    NSString *_appOpenURL;
    long long _commerceType;
    NSArray *_intervalCreatives;
    NSNumber *_repeats;
    unsigned long long _splashADType;
    NSString *_videoId;
    NSString *_videoGroupId;
    NSArray *_videoURLArray;
    NSArray *_videoPlayTrackURLArray;
    NSArray *_videoActionTrackURLArray;
    NSArray *_videoPlayOverTrackURLArray;
    NSString *_video_density;
    NSString *_splashClickTrackURLString;
    NSString *_splashTrackURLStr;
    NSString *_splashURLString;
    NSNumber *_splashHideIfExist;
}

+ (id)splashModelWithDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *splashHideIfExist; // @synthesize splashHideIfExist=_splashHideIfExist;
@property(copy, nonatomic) NSString *splashURLString; // @synthesize splashURLString=_splashURLString;
@property(copy, nonatomic) NSString *splashTrackURLStr; // @synthesize splashTrackURLStr=_splashTrackURLStr;
@property(copy, nonatomic) NSString *splashClickTrackURLString; // @synthesize splashClickTrackURLString=_splashClickTrackURLString;
@property(copy, nonatomic) NSString *video_density; // @synthesize video_density=_video_density;
@property(copy, nonatomic) NSArray *videoPlayOverTrackURLArray; // @synthesize videoPlayOverTrackURLArray=_videoPlayOverTrackURLArray;
@property(copy, nonatomic) NSArray *videoActionTrackURLArray; // @synthesize videoActionTrackURLArray=_videoActionTrackURLArray;
@property(copy, nonatomic) NSArray *videoPlayTrackURLArray; // @synthesize videoPlayTrackURLArray=_videoPlayTrackURLArray;
@property(copy, nonatomic) NSArray *videoURLArray; // @synthesize videoURLArray=_videoURLArray;
@property(copy, nonatomic) NSString *videoGroupId; // @synthesize videoGroupId=_videoGroupId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool videoMute; // @synthesize videoMute=_videoMute;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) unsigned long long splashADType; // @synthesize splashADType=_splashADType;
@property(retain, nonatomic) NSNumber *repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) NSArray *intervalCreatives; // @synthesize intervalCreatives=_intervalCreatives;
@property(nonatomic) long long commerceType; // @synthesize commerceType=_commerceType;
@property(copy, nonatomic) NSString *appOpenURL; // @synthesize appOpenURL=_appOpenURL;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSNumber *displayViewButton; // @synthesize displayViewButton=_displayViewButton;
@property(retain, nonatomic) NSNumber *displaySkipButton; // @synthesize displaySkipButton=_displaySkipButton;
@property(retain, nonatomic) NSNumber *splashShowOnWifiOnly; // @synthesize splashShowOnWifiOnly=_splashShowOnWifiOnly;
@property(retain, nonatomic) NSNumber *splashBannerMode; // @synthesize splashBannerMode=_splashBannerMode;
@property(retain, nonatomic) NSNumber *predownload; // @synthesize predownload=_predownload;
@property(copy, nonatomic) NSDictionary *landscapeImageInfo; // @synthesize landscapeImageInfo=_landscapeImageInfo;
@property(copy, nonatomic) NSDictionary *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) NSArray *splashClickTrackURLStrings; // @synthesize splashClickTrackURLStrings=_splashClickTrackURLStrings;
@property(retain, nonatomic) NSArray *splashTrackURLStrings; // @synthesize splashTrackURLStrings=_splashTrackURLStrings;
@property(copy, nonatomic) NSString *splashWebTitle; // @synthesize splashWebTitle=_splashWebTitle;
@property(copy, nonatomic) NSArray *splashWebUrlList; // @synthesize splashWebUrlList=_splashWebUrlList;
@property(copy, nonatomic) NSString *splashWebURLStr; // @synthesize splashWebURLStr=_splashWebURLStr;
@property(copy, nonatomic) NSString *splashAppleID; // @synthesize splashAppleID=_splashAppleID;
@property(copy, nonatomic) NSString *splashAlertText; // @synthesize splashAlertText=_splashAlertText;
@property(copy, nonatomic) NSString *splashAppName; // @synthesize splashAppName=_splashAppName;
@property(copy, nonatomic) NSString *splashDownloadURLStr; // @synthesize splashDownloadURLStr=_splashDownloadURLStr;
@property(copy, nonatomic) NSString *splashActionType; // @synthesize splashActionType=_splashActionType;
@property(retain, nonatomic) NSArray *splashOpenUrlList; // @synthesize splashOpenUrlList=_splashOpenUrlList;
@property(copy, nonatomic) NSString *splashOpenURL; // @synthesize splashOpenURL=_splashOpenURL;
@property(nonatomic) long long splashLeaveInterval; // @synthesize splashLeaveInterval=_splashLeaveInterval;
@property(nonatomic) long long splashInterval; // @synthesize splashInterval=_splashInterval;
@property(nonatomic) long long splashExpireSeconds; // @synthesize splashExpireSeconds=_splashExpireSeconds;
@property(nonatomic) long long splashDisplayAfterSecond; // @synthesize splashDisplayAfterSecond=_splashDisplayAfterSecond;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(copy, nonatomic) NSString *display_density; // @synthesize display_density=_display_density;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *splashID; // @synthesize splashID=_splashID;
@property(nonatomic) double requestTimeInterval; // @synthesize requestTimeInterval=_requestTimeInterval;
@property(nonatomic) unsigned long long adModelType; // @synthesize adModelType=_adModelType;
- (void).cxx_destruct;
- (struct CGSize)videoSize;
- (struct CGSize)imageSize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

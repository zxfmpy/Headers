//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface MBKMPLInfo : JSONModel
{
    NSString *_distId;
    long long _distNum;
    NSString *_bannerDesc;
    NSString *_bannerTitle;
    NSString *_clickUrl;
    NSString *_mplIcon;
    NSString *_icon;
    long long _radius;
    long long _mplType;
    double _distX;
    double _distY;
}

@property(nonatomic) double distY; // @synthesize distY=_distY;
@property(nonatomic) double distX; // @synthesize distX=_distX;
@property(nonatomic) long long mplType; // @synthesize mplType=_mplType;
@property(nonatomic) long long radius; // @synthesize radius=_radius;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *mplIcon; // @synthesize mplIcon=_mplIcon;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(copy, nonatomic) NSString *bannerDesc; // @synthesize bannerDesc=_bannerDesc;
@property(nonatomic) long long distNum; // @synthesize distNum=_distNum;
@property(copy, nonatomic) NSString *distId; // @synthesize distId=_distId;
- (void).cxx_destruct;
- (void)getAddress:(CDUnknownBlockType)arg1;

@end

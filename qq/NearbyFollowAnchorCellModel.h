//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TightTableViewCellModel.h>

@class NSMutableArray, NSString;

@interface NearbyFollowAnchorCellModel : TightTableViewCellModel
{
    NSMutableArray *_followAnchorModelList;
    int _summaryType;
    int _xo;
    _Bool _isMaster;
    NSString *_barsUrl;
    NSString *_nowIconGifUrl;
}

@property(nonatomic) _Bool isMaster; // @synthesize isMaster=_isMaster;
@property(copy, nonatomic) NSString *nowIconGifUrl; // @synthesize nowIconGifUrl=_nowIconGifUrl;
@property(copy, nonatomic) NSString *barsUrl; // @synthesize barsUrl=_barsUrl;
- (void)dealloc;
- (double)heightForRow;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *followAnchorModelList; // @dynamic followAnchorModelList;
@property(nonatomic) int summaryType; // @dynamic summaryType;

@end

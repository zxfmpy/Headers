//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupModel.h>

@class NSArray, NSString;

@interface QQGroupInfoModel : QQGroupModel
{
    NSString *_groupCode;
    unsigned int _ownerUin;
    unsigned int _curMemberNum;
    unsigned int _maxMemberNum;
    NSString *_intro;
    unsigned int _groupFaceID;
    NSString *_groupTag;
    unsigned int _categoryID;
    NSString *_categoryDetail;
    unsigned int _groupLevel;
    _Bool _sameCity;
    _Bool _full;
    _Bool _allowJoinIn;
    _Bool _isIn;
    unsigned int _groupHeat;
    NSString *_certifiedInfo;
    NSString *_groupLocation;
    int _manMemberNum;
    int _ladyMemberNum;
    float _distance;
    NSString *_location;
    _Bool _ifNewGroup;
    NSString *_groupFaceUrl;
    unsigned int _groupBitmap;
    unsigned int _rgroupflag;
    NSString *_recommendReason;
    NSArray *_groupLabelInfo;
}

- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool allowJoinIn; // @dynamic allowJoinIn;
@property(copy, nonatomic) NSString *categoryDetail; // @dynamic categoryDetail;
@property(nonatomic) unsigned int categoryID; // @dynamic categoryID;
@property(nonatomic) _Bool certified;
@property(copy, nonatomic) NSString *certifiedInfo; // @dynamic certifiedInfo;
@property(nonatomic) unsigned int curMemberNum; // @dynamic curMemberNum;
@property(nonatomic) float distance; // @dynamic distance;
@property(nonatomic) _Bool full; // @dynamic full;
@property(nonatomic) unsigned int groupBitmap; // @dynamic groupBitmap;
@property(copy, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(nonatomic) unsigned int groupFaceID; // @dynamic groupFaceID;
@property(copy, nonatomic) NSString *groupFaceUrl; // @dynamic groupFaceUrl;
@property(nonatomic) unsigned int groupFlagExt;
@property(nonatomic) unsigned int groupHeat; // @dynamic groupHeat;
@property(copy, nonatomic) NSArray *groupLabelInfo; // @dynamic groupLabelInfo;
@property(nonatomic) unsigned int groupLevel; // @dynamic groupLevel;
@property(nonatomic) NSString *groupLocation; // @dynamic groupLocation;
@property(copy, nonatomic) NSString *groupTag; // @dynamic groupTag;
@property(nonatomic) _Bool ifNewGroup; // @dynamic ifNewGroup;
@property(copy, nonatomic) NSString *intro; // @dynamic intro;
@property(nonatomic) _Bool isIn; // @dynamic isIn;
@property(nonatomic) int ladyMemberNum; // @dynamic ladyMemberNum;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(nonatomic) int manMemberNum; // @dynamic manMemberNum;
@property(nonatomic) unsigned int maxMemberNum; // @dynamic maxMemberNum;
@property(nonatomic) unsigned int ownerUin; // @dynamic ownerUin;
@property(copy, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int rgroupflag; // @dynamic rgroupflag;
@property(nonatomic) _Bool sameCity; // @dynamic sameCity;

@end

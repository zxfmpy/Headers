//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSString, TTImageInfosModel;
@protocol Optional;

@interface TSVActivityBannerModel : JSONModel
{
    NSString<Optional> *_groupID;
    NSString<Optional> *_forumID;
    NSDictionary<Optional> *_logPb;
    TTImageInfosModel<Optional> *_coverImageModel;
    NSString<Optional> *_openURL;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) TTImageInfosModel<Optional> *coverImageModel; // @synthesize coverImageModel=_coverImageModel;
@property(retain, nonatomic) NSDictionary<Optional> *logPb; // @synthesize logPb=_logPb;
@property(copy, nonatomic) NSString<Optional> *forumID; // @synthesize forumID=_forumID;
@property(copy, nonatomic) NSString<Optional> *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (id)JSONObjectForCoverImageModel;
- (void)setCoverImageModelWithNSArray:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRPublishPostHashtagHighlightStructModel, FRPublishPostSearchHashtagItemStructModel;
@protocol Optional;

@interface FRPublishPostSearchHashtagStructModel : JSONModel
{
    FRPublishPostSearchHashtagItemStructModel *_forum;
    FRPublishPostHashtagHighlightStructModel<Optional> *_highlight;
}

@property(retain, nonatomic) FRPublishPostHashtagHighlightStructModel<Optional> *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) FRPublishPostSearchHashtagItemStructModel *forum; // @synthesize forum=_forum;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailJHSMarketingItemButtonActionModel, NSString;

@interface AliDetailJHSMarketingItemButtonModel : TBJSONModel
{
    _Bool _status;
    NSString *_link;
    NSString *_msgDisplay;
    AliDetailJHSMarketingItemButtonActionModel *_action;
}

@property(retain, nonatomic) AliDetailJHSMarketingItemButtonActionModel *action; // @synthesize action=_action;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *msgDisplay; // @synthesize msgDisplay=_msgDisplay;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;

@end

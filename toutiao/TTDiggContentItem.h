//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTActivityContentItemSelectedDigProtocol-Protocol.h"

@class NSString;

@interface TTDiggContentItem : NSObject <TTActivityContentItemSelectedDigProtocol>
{
    _Bool _selected;
    _Bool _banDig;
    CDUnknownBlockType _customAction;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool banDig; // @synthesize banDig=_banDig;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) CDUnknownBlockType customAction; // @synthesize customAction=_customAction;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contentTitle;
@property(copy, nonatomic) NSString *activityImageName;
@property(readonly, nonatomic) NSString *contentItemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


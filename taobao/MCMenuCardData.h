//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCMenuCardDataProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface MCMenuCardData : NSObject <MCMenuCardDataProtocol>
{
    NSString *_innerTitle;
    NSString *_innerImageUrl;
    NSString *_innerTipText;
    NSString *_innerOpenUrl;
    NSMutableArray *_innerMaybeLike;
}

@property(retain, nonatomic) NSMutableArray *innerMaybeLike; // @synthesize innerMaybeLike=_innerMaybeLike;
@property(retain, nonatomic) NSString *innerOpenUrl; // @synthesize innerOpenUrl=_innerOpenUrl;
@property(retain, nonatomic) NSString *innerTipText; // @synthesize innerTipText=_innerTipText;
@property(retain, nonatomic) NSString *innerImageUrl; // @synthesize innerImageUrl=_innerImageUrl;
@property(retain, nonatomic) NSString *innerTitle; // @synthesize innerTitle=_innerTitle;
- (void).cxx_destruct;
- (id)maybeLike;
- (id)openUrl;
- (id)tipText;
- (id)imageUrl;
- (id)title;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

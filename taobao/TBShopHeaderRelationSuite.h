//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBShopHeaderRelationSuite : NSObject
{
    _Bool _isFollow;
    _Bool _showFollow;
    long long _fansNum;
    NSString *_fansDes;
}

@property(retain, nonatomic) NSString *fansDes; // @synthesize fansDes=_fansDes;
@property(nonatomic) long long fansNum; // @synthesize fansNum=_fansNum;
@property(nonatomic) _Bool showFollow; // @synthesize showFollow=_showFollow;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


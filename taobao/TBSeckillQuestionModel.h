//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSeckillQuestionModel : NSObject
{
    _Bool _lgin;
    NSString *_sign;
    NSString *_qst;
    long long _stock;
    long long _now;
    NSString *_tip;
    long long _len;
}

+ (id)questionModelWithData:(id)arg1;
@property(nonatomic) long long len; // @synthesize len=_len;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(nonatomic) long long now; // @synthesize now=_now;
@property(nonatomic) long long stock; // @synthesize stock=_stock;
@property(copy, nonatomic) NSString *qst; // @synthesize qst=_qst;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(nonatomic) _Bool lgin; // @synthesize lgin=_lgin;
- (void).cxx_destruct;
- (unsigned long long)seckillStatusByDateTime:(id)arg1;
- (id)getAnswerArray;
- (void)dealloc;

@end


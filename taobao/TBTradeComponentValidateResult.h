//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBTradeComponent;

@interface TBTradeComponentValidateResult : NSObject
{
    _Bool _valid;
    NSString *_errorMsg;
    TBTradeComponent *_invalidTarget;
}

@property(nonatomic) __weak TBTradeComponent *invalidTarget; // @synthesize invalidTarget=_invalidTarget;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void).cxx_destruct;

@end

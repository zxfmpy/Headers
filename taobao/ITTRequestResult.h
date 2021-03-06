//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSNumber, NSString;

@interface ITTRequestResult : NSObject <UIAlertViewDelegate>
{
    NSNumber *_code;
    NSString *_message;
}

+ (id)resultFromCode:(id)arg1 withMessage:(id)arg2;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)isSuccess;
- (id)initWithCode:(id)arg1 withMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WeApppMessageObject : NSObject
{
    NSString *_message;
    NSString *_cancelString;
    NSString *_confirmString;
    CDUnknownBlockType _confirmationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType confirmationBlock; // @synthesize confirmationBlock=_confirmationBlock;
@property(retain, nonatomic) NSString *confirmString; // @synthesize confirmString=_confirmString;
@property(retain, nonatomic) NSString *cancelString; // @synthesize cancelString=_cancelString;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKNewAdoptionStatusModel : NSObject
{
    NSString *_adoptionCarbon;
    NSString *_money;
    NSString *_status;
}

@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *adoptionCarbon; // @synthesize adoptionCarbon=_adoptionCarbon;
- (void).cxx_destruct;
- (id)initWithDictModel:(id)arg1;

@end


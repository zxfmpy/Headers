//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UIImage;

@interface KSUserInfoEdit : NSObject
{
    _Bool _forceUnique;
    NSString *_name;
    NSString *_sex;
    UIImage *_avatar;
    NSDate *_birthday;
    NSString *_cityCode;
}

@property(nonatomic) _Bool forceUnique; // @synthesize forceUnique=_forceUnique;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end


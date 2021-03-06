//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MOPProviderBaseInfo : NSObject
{
    _Bool _merchant;
    NSString *_userId;
    NSString *_userName;
    NSString *_headImage;
    NSString *_realNamed;
    NSString *_gender;
    NSString *_score;
    NSArray *_spTags;
    NSString *_tenantName;
    NSString *_tenantLogo;
    NSString *_partnerId;
}

+ (Class)spTagsElementClass;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(nonatomic) _Bool merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) NSString *tenantLogo; // @synthesize tenantLogo=_tenantLogo;
@property(retain, nonatomic) NSString *tenantName; // @synthesize tenantName=_tenantName;
@property(retain, nonatomic) NSArray *spTags; // @synthesize spTags=_spTags;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *realNamed; // @synthesize realNamed=_realNamed;
@property(retain, nonatomic) NSString *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end


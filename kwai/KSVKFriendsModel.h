//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSThirdPartyFriendsModel.h"

@class NSArray, NSString;

@interface KSVKFriendsModel : KSThirdPartyFriendsModel
{
    NSArray *_friendsArray;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSArray *friendsArray; // @synthesize friendsArray=_friendsArray;
- (void).cxx_destruct;
- (void)setOAuthParams:(id)arg1;
- (void)load:(_Bool)arg1;
- (id)init;
- (id)initWithRequestType:(unsigned long long)arg1;

@end


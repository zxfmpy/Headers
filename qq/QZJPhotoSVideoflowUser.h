//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class QZJPhotoSUser;

@interface QZJPhotoSVideoflowUser : JceObjectV2
{
    _Bool _jcev2_p_1_r_is_followed;
    _Bool _jcev2_p_2_o_is_following;
    unsigned int _jcev2_p_3_o_follower_count;
    unsigned int _jcev2_p_4_o_following_count;
    QZJPhotoSUser *_jcev2_p_0_r_user;
}

+ (id)jceType;
@property(nonatomic, getter=jce_following_count, setter=setJce_following_count:) unsigned int jcev2_p_4_o_following_count; // @synthesize jcev2_p_4_o_following_count=_jcev2_p_4_o_following_count;
@property(nonatomic, getter=jce_follower_count, setter=setJce_follower_count:) unsigned int jcev2_p_3_o_follower_count; // @synthesize jcev2_p_3_o_follower_count=_jcev2_p_3_o_follower_count;
@property(nonatomic, getter=jce_is_following, setter=setJce_is_following:) _Bool jcev2_p_2_o_is_following; // @synthesize jcev2_p_2_o_is_following=_jcev2_p_2_o_is_following;
@property(nonatomic, getter=jce_is_followed, setter=setJce_is_followed:) _Bool jcev2_p_1_r_is_followed; // @synthesize jcev2_p_1_r_is_followed=_jcev2_p_1_r_is_followed;
@property(retain, nonatomic, getter=jce_user, setter=setJce_user:) QZJPhotoSUser *jcev2_p_0_r_user; // @synthesize jcev2_p_0_r_user=_jcev2_p_0_r_user;
- (void).cxx_destruct;
- (id)init;

@end


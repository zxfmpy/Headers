//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class QZJPhotoMarkFaceItemFeed, QZJPhotoMarkFaceItemMood;

@interface QZJPhotoMarkFaceInPhotoReq : JceObjectV2
{
    unsigned int _jcev2_p_0_o_owner;
    long long _jcev2_p_1_o_scene;
    QZJPhotoMarkFaceItemFeed *_jcev2_p_2_o_feed_face_info;
    QZJPhotoMarkFaceItemMood *_jcev2_p_3_o_mood_face_info;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_mood_face_info, setter=setJce_mood_face_info:) QZJPhotoMarkFaceItemMood *jcev2_p_3_o_mood_face_info; // @synthesize jcev2_p_3_o_mood_face_info=_jcev2_p_3_o_mood_face_info;
@property(retain, nonatomic, getter=jce_feed_face_info, setter=setJce_feed_face_info:) QZJPhotoMarkFaceItemFeed *jcev2_p_2_o_feed_face_info; // @synthesize jcev2_p_2_o_feed_face_info=_jcev2_p_2_o_feed_face_info;
@property(nonatomic, getter=jce_scene, setter=setJce_scene:) long long jcev2_p_1_o_scene; // @synthesize jcev2_p_1_o_scene=_jcev2_p_1_o_scene;
@property(nonatomic, getter=jce_owner, setter=setJce_owner:) unsigned int jcev2_p_0_o_owner; // @synthesize jcev2_p_0_o_owner=_jcev2_p_0_o_owner;
- (void).cxx_destruct;
- (id)init;

@end


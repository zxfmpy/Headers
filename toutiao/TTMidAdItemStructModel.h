//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString, TTMidVideoInfoStructModel;
@protocol Optional, TTImageListStructModel><Optional;

@interface TTMidAdItemStructModel : JSONModel
{
    TTMidVideoInfoStructModel<Optional> *_video_info;
    NSString<Optional> *_web_title;
    NSString<Optional> *_web_url;
    NSString<Optional> *_button_text;
    NSNumber<Optional> *_guide_start_time;
    NSString<Optional> *_package;
    NSString<Optional> *_download_url;
    NSNumber<Optional> *_ad_start_time;
    NSString<Optional> *_type;
    NSNumber<Optional> *_enable_close;
    NSString<Optional> *_app_name;
    NSNumber<Optional> *_display_time;
    NSNumber<Optional> *_ad_id;
    NSString<Optional> *_open_url;
    NSArray<TTImageListStructModel><Optional> *_image_list;
    NSString<Optional> *_log_extra;
    NSArray<Optional> *_track_url_list;
    NSArray<Optional> *_click_track_url_list;
    NSString<Optional> *_appleid;
    NSNumber<Optional> *_display_type;
}

@property(retain, nonatomic) NSNumber<Optional> *display_type; // @synthesize display_type=_display_type;
@property(retain, nonatomic) NSString<Optional> *appleid; // @synthesize appleid=_appleid;
@property(retain, nonatomic) NSArray<Optional> *click_track_url_list; // @synthesize click_track_url_list=_click_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *track_url_list; // @synthesize track_url_list=_track_url_list;
@property(retain, nonatomic) NSString<Optional> *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) NSArray<TTImageListStructModel><Optional> *image_list; // @synthesize image_list=_image_list;
@property(retain, nonatomic) NSString<Optional> *open_url; // @synthesize open_url=_open_url;
@property(retain, nonatomic) NSNumber<Optional> *ad_id; // @synthesize ad_id=_ad_id;
@property(retain, nonatomic) NSNumber<Optional> *display_time; // @synthesize display_time=_display_time;
@property(retain, nonatomic) NSString<Optional> *app_name; // @synthesize app_name=_app_name;
@property(retain, nonatomic) NSNumber<Optional> *enable_close; // @synthesize enable_close=_enable_close;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber<Optional> *ad_start_time; // @synthesize ad_start_time=_ad_start_time;
@property(retain, nonatomic) NSString<Optional> *download_url; // @synthesize download_url=_download_url;
@property(retain, nonatomic) NSString<Optional> *package; // @synthesize package=_package;
@property(retain, nonatomic) NSNumber<Optional> *guide_start_time; // @synthesize guide_start_time=_guide_start_time;
@property(retain, nonatomic) NSString<Optional> *button_text; // @synthesize button_text=_button_text;
@property(retain, nonatomic) NSString<Optional> *web_url; // @synthesize web_url=_web_url;
@property(retain, nonatomic) NSString<Optional> *web_title; // @synthesize web_title=_web_title;
@property(retain, nonatomic) TTMidVideoInfoStructModel<Optional> *video_info; // @synthesize video_info=_video_info;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end


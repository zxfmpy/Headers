//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, TTAdCanvasLiveDataModel;
@protocol Optional;

@interface TTAdCanvasLiveModel : JSONModel
{
    NSString<Optional> *_live_id;
    NSString<Optional> *_message;
    NSNumber<Optional> *_code;
    TTAdCanvasLiveDataModel<Optional> *_data;
}

@property(retain, nonatomic) TTAdCanvasLiveDataModel<Optional> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSNumber<Optional> *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString<Optional> *live_id; // @synthesize live_id=_live_id;
- (void).cxx_destruct;

@end


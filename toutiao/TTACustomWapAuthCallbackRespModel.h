//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTABaseRespModel.h"

@class TTACustomWapAuthCallbackModel;

@interface TTACustomWapAuthCallbackRespModel : TTABaseRespModel
{
    TTACustomWapAuthCallbackModel *_data;
}

@property(retain, nonatomic) TTACustomWapAuthCallbackModel *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isBindFailed;
- (_Bool)isAuthPlatformConflict;
- (_Bool)isBindConflict;
- (id)initWithWapAuthCallbackURL:(id)arg1;

@end

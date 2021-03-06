//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (KakaoAdditions)
+ (id)ko_badParameterError;
+ (id)ko_httpErrorWithStatusCode:(long long)arg1;
+ (id)ko_errorWithDictionary:(id)arg1;
+ (id)ko_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)ko_operationCancelledErrorWithFailureReason:(id)arg1;
+ (id)ko_alreadyLoginedUserError;
+ (id)ko_tokenNotFoundError;
+ (id)ko_invalidGrantErrorWithUnderlyingError:(id)arg1;
+ (id)ko_notAuthorizedErrorWithUnderlyingError:(id)arg1;
+ (id)ko_networkErrorWithUnderlyingError:(id)arg1;
+ (id)ko_operationInProgressError;
+ (id)ko_badResponseErrorWithUnderlyingError:(id)arg1;
+ (id)ko_errorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 failureReason:(id)arg4;
@end


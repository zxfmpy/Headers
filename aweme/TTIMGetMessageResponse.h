//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseMessage.h"

@class TTIMMessageListIDL;

@interface TTIMGetMessageResponse : TTResponseMessage
{
    TTIMMessageListIDL *_msgListIDL;
}

@property(retain, nonatomic) TTIMMessageListIDL *msgListIDL; // @synthesize msgListIDL=_msgListIDL;
- (void).cxx_destruct;
- (void)updateMsgListIDLFromHttpModel:(id)arg1;
- (void)extractProto:(id)arg1;
- (id)init;

@end

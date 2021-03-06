//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBIMPerformProxy : NSObject
{
    id _aTarget;
    SEL _aSelector;
    id _aObject;
}

@property(retain, nonatomic) id aObject; // @synthesize aObject=_aObject;
@property(nonatomic) SEL aSelector; // @synthesize aSelector=_aSelector;
@property(nonatomic) __weak id aTarget; // @synthesize aTarget=_aTarget;
- (void).cxx_destruct;
- (void)performRequest;
- (void)proxyCancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)proxyPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 target:(id)arg4;

@end


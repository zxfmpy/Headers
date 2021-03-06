//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSStateMachine, NSMutableDictionary;

@interface KSStateMachineTransitionsHandler : NSObject
{
    KSStateMachine *_stateMachine;
    id _target;
    NSMutableDictionary *_invocationsByOldState;
    NSMutableDictionary *_invocationsByNewState;
}

@property(retain, nonatomic) NSMutableDictionary *invocationsByNewState; // @synthesize invocationsByNewState=_invocationsByNewState;
@property(retain, nonatomic) NSMutableDictionary *invocationsByOldState; // @synthesize invocationsByOldState=_invocationsByOldState;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) KSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;
- (void)invokeInvocation:(id)arg1 withState:(id)arg2;
- (id)createInvocationFromSelector:(SEL)arg1;
- (void)setSelector:(SEL)arg1 forTransitionFrom:(id)arg2;
- (void)setSelector:(SEL)arg1 forTransitionTo:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithStateMachine:(id)arg1 target:(id)arg2;

@end


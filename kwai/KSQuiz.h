//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSQuizQuestion, NSArray, NSString;

@interface KSQuiz : NSObject
{
    int _prizeType;
    int _audienceAnswerInterval;
    int _waitReviewInterval;
    int _maxDispatchReviewInterval;
    int _minWaitStartNextQuestionInterval;
    int _maxWaitStartNextQuestionInterval;
    unsigned int _winnerMaxDelayMillis;
    NSString *_liveQuizId;
    NSString *_sheetId;
    NSArray *_questions;
    KSQuizQuestion *_currentQuestion;
    unsigned long long _totalQuestions;
    unsigned long long _totalKSCoin;
}

@property(nonatomic) unsigned int winnerMaxDelayMillis; // @synthesize winnerMaxDelayMillis=_winnerMaxDelayMillis;
@property(nonatomic) int maxWaitStartNextQuestionInterval; // @synthesize maxWaitStartNextQuestionInterval=_maxWaitStartNextQuestionInterval;
@property(nonatomic) int minWaitStartNextQuestionInterval; // @synthesize minWaitStartNextQuestionInterval=_minWaitStartNextQuestionInterval;
@property(nonatomic) int maxDispatchReviewInterval; // @synthesize maxDispatchReviewInterval=_maxDispatchReviewInterval;
@property(nonatomic) int waitReviewInterval; // @synthesize waitReviewInterval=_waitReviewInterval;
@property(nonatomic) int audienceAnswerInterval; // @synthesize audienceAnswerInterval=_audienceAnswerInterval;
@property(nonatomic) unsigned long long totalKSCoin; // @synthesize totalKSCoin=_totalKSCoin;
@property(nonatomic) unsigned long long totalQuestions; // @synthesize totalQuestions=_totalQuestions;
@property(nonatomic) int prizeType; // @synthesize prizeType=_prizeType;
@property(retain, nonatomic) KSQuizQuestion *currentQuestion; // @synthesize currentQuestion=_currentQuestion;
@property(copy, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) NSString *sheetId; // @synthesize sheetId=_sheetId;
@property(retain, nonatomic) NSString *liveQuizId; // @synthesize liveQuizId=_liveQuizId;
- (void).cxx_destruct;
- (id)init;

@end


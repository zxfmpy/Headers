//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate;
@protocol ArticleCityManagerDelegate;

@interface ArticleCityManager : NSObject
{
    id <ArticleCityManagerDelegate> _delegate;
    NSArray *_groupedCities;
    NSDate *_lastRequestDate;
}

+ (void)setSavedCities:(id)arg1;
+ (id)savedCities;
+ (id)alloc;
+ (id)sharedManager;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(retain, nonatomic) NSArray *groupedCities; // @synthesize groupedCities=_groupedCities;
@property(nonatomic) __weak id <ArticleCityManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)handleResultCities:(id)arg1;
- (id)citiesOfName:(id)arg1 inResultCities:(id)arg2;
- (void)updateCities;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "APGSearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSString, UITableView;
@protocol APGSuggestViewControllerDelegate;

@interface APGSuggestViewController : UIViewController <APGSearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _canScroll;
    _Bool _isRemoteResultBack;
    _Bool _isFirstTimeSearch;
    id <APGSuggestViewControllerDelegate> _delegate;
    NSMutableArray *_dataSource;
    UITableView *_tableView;
    NSString *_currentSearchKeyword;
    NSString *_moreTitle;
    NSOperationQueue *_searchQueue;
    NSMutableArray *_localDataSource;
    NSMutableArray *_remoteDataSource;
    NSString *_searchId;
    NSString *_categoryKey;
    long long _contactResultCount;
}

@property(nonatomic) _Bool isFirstTimeSearch; // @synthesize isFirstTimeSearch=_isFirstTimeSearch;
@property(nonatomic) long long contactResultCount; // @synthesize contactResultCount=_contactResultCount;
@property(retain, nonatomic) NSString *categoryKey; // @synthesize categoryKey=_categoryKey;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property _Bool isRemoteResultBack; // @synthesize isRemoteResultBack=_isRemoteResultBack;
@property(retain) NSMutableArray *remoteDataSource; // @synthesize remoteDataSource=_remoteDataSource;
@property(retain) NSMutableArray *localDataSource; // @synthesize localDataSource=_localDataSource;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(retain, nonatomic) NSOperationQueue *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain, nonatomic) NSString *moreTitle; // @synthesize moreTitle=_moreTitle;
@property(retain, nonatomic) NSString *currentSearchKeyword; // @synthesize currentSearchKeyword=_currentSearchKeyword;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <APGSuggestViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processData:(_Bool)arg1 queryText:(id)arg2 extParams:(id)arg3;
- (void)reloadDataModel:(_Bool)arg1;
- (void)localNoResultReloadData:(id)arg1;
- (void)searchLocalSuggest:(id)arg1 isInCategory:(_Bool)arg2 searchId:(id)arg3;
- (void)searchText:(id)arg1 isInCategory:(_Bool)arg2 category:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)moreCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


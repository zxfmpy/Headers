//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKRegisterViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILocalizedIndexedCollation, UISearchBar, UISearchDisplayController, UITableView;

@interface MBKCountryCodeViewController : MBKRegisterViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    CDUnknownBlockType _returnCountryCodeBlock;
    UITableView *_countryCodeTableView;
    UISearchDisplayController *_searchController;
    UISearchBar *_searchBar;
    NSMutableArray *_allCountriesArray;
    NSMutableArray *_supportedCountryArray;
    NSMutableArray *_searchResultValuesArray;
    UILocalizedIndexedCollation *_collation;
    NSMutableArray *_sortedCountryArray;
    NSMutableArray *_sectionTitles;
    NSMutableArray *_sectionIndexTitles;
}

@property(retain, nonatomic) NSMutableArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;
@property(retain, nonatomic) NSMutableArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableArray *sortedCountryArray; // @synthesize sortedCountryArray=_sortedCountryArray;
@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(retain, nonatomic) NSMutableArray *searchResultValuesArray; // @synthesize searchResultValuesArray=_searchResultValuesArray;
@property(retain, nonatomic) NSMutableArray *supportedCountryArray; // @synthesize supportedCountryArray=_supportedCountryArray;
@property(retain, nonatomic) NSMutableArray *allCountriesArray; // @synthesize allCountriesArray=_allCountriesArray;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UISearchDisplayController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UITableView *countryCodeTableView; // @synthesize countryCodeTableView=_countryCodeTableView;
@property(copy, nonatomic) CDUnknownBlockType returnCountryCodeBlock; // @synthesize returnCountryCodeBlock=_returnCountryCodeBlock;
- (void).cxx_destruct;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)loadSupportedCountryFromLocal;
- (void)startRequest;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)creatSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


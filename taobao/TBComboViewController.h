//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SPNetworkRequest, TBComboItem, TBComboItemFavButton, TBModelStatusHandler, TBPriceTextView, UILabel, UIScrollView, UIView, WSPhotoBrowerView;

@interface TBComboViewController : TBViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    UILabel *titleLabel;
    UILabel *countLabel;
    UIView *headInfoView;
    UILabel *nameLabel;
    UILabel *priceLabel;
    TBComboItemFavButton *favButton;
    UIView *footView;
    TBPriceTextView *totalPriceLabel;
    UILabel *savePriceLabel;
    WSPhotoBrowerView *photoBrowerView;
    _Bool isShowAllScreen;
    TBModelStatusHandler *_comboFailStatusHandler;
    NSString *_sellerId;
    TBComboItem *_currentItem;
    long long _currentItemNum;
    NSString *_currentMealId;
    NSMutableArray *_itemViewArray;
    UIScrollView *_itemScrollView;
    NSString *_currentItemId;
    long long _currentMealIndex;
    NSString *_mealType;
    SPNetworkRequest *_netWorkRequest;
    NSDictionary *_UTQuerys;
    NSMutableArray *_mealIdList;
}

@property(retain, nonatomic) NSMutableArray *mealIdList; // @synthesize mealIdList=_mealIdList;
@property(retain, nonatomic) NSDictionary *UTQuerys; // @synthesize UTQuerys=_UTQuerys;
@property(retain, nonatomic) SPNetworkRequest *netWorkRequest; // @synthesize netWorkRequest=_netWorkRequest;
@property(retain, nonatomic) NSString *mealType; // @synthesize mealType=_mealType;
@property(nonatomic) long long currentMealIndex; // @synthesize currentMealIndex=_currentMealIndex;
@property(retain, nonatomic) NSString *currentItemId; // @synthesize currentItemId=_currentItemId;
@property(retain, nonatomic) UIScrollView *itemScrollView; // @synthesize itemScrollView=_itemScrollView;
@property(retain, nonatomic) NSMutableArray *itemViewArray; // @synthesize itemViewArray=_itemViewArray;
@property(retain, nonatomic) NSString *currentMealId; // @synthesize currentMealId=_currentMealId;
@property(nonatomic) long long currentItemNum; // @synthesize currentItemNum=_currentItemNum;
@property(retain, nonatomic) TBComboItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) TBModelStatusHandler *comboFailStatusHandler; // @synthesize comboFailStatusHandler=_comboFailStatusHandler;
- (void).cxx_destruct;
- (id)dataForUserTrack;
- (void)updateUTQuerys;
- (void)buyBtnClicked:(id)arg1;
- (void)formBtnClicked:(id)arg1;
- (void)favBtnClicked:(id)arg1;
- (void)imageViewTapAction:(id)arg1;
- (void)tapAction;
- (void)moveToTapItemWithAnimation:(_Bool)arg1;
- (void)refreshfootView:(id)arg1;
- (void)refreshHeaderView;
- (void)refreshData;
- (void)reloadData;
- (void)loadData:(id)arg1;
- (void)initFootScrollView;
- (void)initHeaderInfoView;
- (void)initCustomNavibarTitle;
- (void)initBrowerViewBlock;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


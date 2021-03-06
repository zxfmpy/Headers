//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSIndexPath, NSMutableArray, NSString, TTTAttributedLabel, UIButton, UILabel;
@protocol magicDelegate;

@interface TBSearchSugTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIButton *_appendButton;
    NSMutableArray *_buttons;
    id <magicDelegate> _delegate;
    NSString *_text;
    NSArray *_magic;
    NSIndexPath *_indexPath;
    TTTAttributedLabel *_catHint;
    UILabel *_nearbySubNameLabel;
}

@property(retain, nonatomic) UILabel *nearbySubNameLabel; // @synthesize nearbySubNameLabel=_nearbySubNameLabel;
@property(retain, nonatomic) TTTAttributedLabel *catHint; // @synthesize catHint=_catHint;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSArray *magic; // @synthesize magic=_magic;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <magicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIButton *appendButton; // @synthesize appendButton=_appendButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)clickBtn:(id)arg1;
- (void)appendSuggest:(id)arg1;
- (id)genAttributeString:(id)arg1 withPrefix:(id)arg2;
- (void)configItem:(id)arg1 IndexPath:(id)arg2 prefix:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


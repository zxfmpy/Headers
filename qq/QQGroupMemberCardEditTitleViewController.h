//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSDictionary, NSString, QQGroupMemberCardModel, UIButton, UILabel, UITableView, UITextField;
@protocol MemberCardEditDelegate;

@interface QQGroupMemberCardEditTitleViewController : QQViewController <UIAlertViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_editTable;
    UITextField *_inputTextField;
    UIButton *_delBtn;
    QQGroupMemberCardModel *_memberCard;
    UILabel *_expireTimeLabel;
    UILabel *_inputTextLabel;
    NSString *_inputSpecialTitle;
    int _requstSeq;
    unsigned long long _inputSpecialTitleExpireTime;
    int _requestSeq;
    _Bool _canCancelSpecialTitle;
    id <MemberCardEditDelegate> _jsDelegate;
    NSDictionary *_query;
}

@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(nonatomic) id <MemberCardEditDelegate> jsDelegate; // @synthesize jsDelegate=_jsDelegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)inputTextChanged:(id)arg1;
- (void)setInputTextNumber:(int)arg1;
- (void)handleSetGroupMemberSpecialTitleResult:(id)arg1;
- (void)setGroupMemberSpecialTitle:(id)arg1 name:(id)arg2 expireTime:(unsigned long long)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)cancelInput;
- (void)finishInputMemberTitle;
- (void)setDefaultSpecialTitle;
- (_Bool)canSetDefaultSpecialTitle;
- (_Bool)hasDefaultSpecialTitle;
- (void)clearTextfieldInput;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMemberCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>
#import <QQMainProject/QQGrowingTextViewDelegate-Protocol.h>

@class CustomFaceAttr, NSData, NSNumber, NSString, QQRichKeyBorad, QQTextField;

@protocol QQTextFieldDelegate <NSObject, QQGrowingTextViewDelegate>

@optional
- (void)QQTextField:(QQTextField *)arg1 showUpRichKeyBoard:(QQRichKeyBorad *)arg2;
- (void)QQTextFieldWillInitAudioView:(QQTextField *)arg1;
- (void)QQTextFieldWillInitFacePanel:(QQTextField *)arg1;
- (void)didSendEmptyContentInQQTextField:(QQTextField *)arg1;
- (void)onFlipFaceBoard;
- (void)QQTextField:(QQTextField *)arg1 didMoveFacePanelUp:(NSNumber *)arg2;
- (void)QQTextFieldWillMove:(QQTextField *)arg1 moveUp:(_Bool)arg2;
- (void)QQTextFieldDidMove:(QQTextField *)arg1 moveUp:(_Bool)arg2;
- (void)QQTextFieldFrameChanged:(QQTextField *)arg1;
- (void)onPttBtnInputAudio;
- (void)qutuSectionAction;
- (void)faceManageAction;
- (void)sendImageCustomFace:(NSString *)arg1 data:(NSData *)arg2 attr:(CustomFaceAttr *)arg3;
- (_Bool)QQTextField:(QQTextField *)arg1 didSendText:(NSData *)arg2 showText:(NSString *)arg3;
@end


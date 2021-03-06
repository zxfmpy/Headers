//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSMutableSet, NSString, QZEventWidgetBaseView, QZEventWidgetInfo, UIImageView, UILabel;
@protocol QZEventWidgetDelegate;

@interface QZEventWidgetWrapper : UIView <IQZUrlDownloaderDelegate>
{
    QZEventWidgetInfo *_widgetInfo;
    UIImageView *_ropeView;
    UIImageView *_switchView;
    UIImageView *_bubbleView;
    UILabel *_bubbleDescLabel;
    QZEventWidgetBaseView *_widgetView;
    NSMutableSet *_downloadedUrl;
    double _alpha;
    _Bool _isShowBubbleView;
    long long _status;
    id <QZEventWidgetDelegate> _delegate;
}

@property(nonatomic) __weak id <QZEventWidgetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


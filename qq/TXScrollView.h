//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface TXScrollView : UIScrollView
{
    _Bool isFace;
    _Bool isDraged;
    _Bool isSelf;
    struct CGPoint faceOriginalPoint;
    id _superTouchObject;
}

@property(nonatomic) id superTouchObject; // @synthesize superTouchObject=_superTouchObject;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf;
@property(readonly, nonatomic) struct CGPoint faceOriginalPoint; // @synthesize faceOriginalPoint;
@property(nonatomic) _Bool isDraged; // @synthesize isDraged;
@property(nonatomic) _Bool isFace; // @synthesize isFace;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isOnFaceSelf:(struct CGPoint)arg1;
- (_Bool)isOnFace:(struct CGPoint)arg1;

@end


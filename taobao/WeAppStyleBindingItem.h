//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponentBaseItem.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString, UIColor;

@interface WeAppStyleBindingItem : WeAppComponentBaseItem <NSCopying, NSMutableCopying>
{
    NSString *_layout;
    NSString *_orientation;
    int _scroll;
    int _scrollBar;
    double _x;
    double _y;
    double _width;
    double _height;
    double _marginTop;
    double _marginBottom;
    double _marginLeft;
    double _marginRight;
    double _paddingTop;
    double _paddingBottom;
    double _paddingLeft;
    double _paddingRight;
    int _gravity;
    int _align;
    NSString *_borderColor;
    double _borderWidth;
    NSString *_backgroundColor;
    NSString *_backgroundImage;
    int _lines;
    NSString *_textColor;
    int _fontWeight;
    int _fontStyle;
    int _fontSize;
    NSString *_fontName;
    _Bool _disable;
    _Bool _invisible;
    _Bool _invisibleSpace;
    _Bool _isCircle;
    NSString *_lineShadowColor;
    double _lineShadowOffsetX;
    double _lineShadowOffsetY;
    int _lineType;
    NSString *_lineColor;
    NSString *_pageControlAlign;
    double _dashWidth;
    double _dashGap;
    NSString *_dashColor;
    _Bool _relayoutPage;
    double _minHeight;
    _Bool _needPageControl;
    _Bool _needDownRefresh;
    _Bool _needNextPage;
    int _gridColumn;
    double _tabCellWidth;
    double _tabCellHeight;
    NSString *_selectedBackgroundColor;
    NSString *_selectedTextColor;
    int _selectedFontSize;
    NSString *_selectedIndex;
    _Bool _isShowTab;
    _Bool _isPointHide;
    _Bool _switchStatusOn;
    _Bool _styleBindingHasSymbol;
    _Bool _fontUnNeedFitToScreenSize;
    int _scrollBounce;
    int _weight;
    int _gridFlex;
    NSString *_tag;
    double _randHeight;
    UIColor *_borderColor4UIColor;
    UIColor *_backgroundColor4UIColor;
    UIColor *_textColor4UIColor;
    UIColor *_lineShadowColor4UIColor;
    double _maxWidth;
    double _maxHeight;
    NSString *_shadowColor;
    UIColor *_shadowColor4UIColor;
    double _shadowOffsetX;
    double _shadowOffsetY;
    NSString *_placeholderTextColor;
    UIColor *_placeholderTextColor4UIColor;
    NSString *_keybordType;
    long long _timerType;
    NSString *_timerBackgroundColor;
    UIColor *_timerBackgroundColor4UIColor;
    id _disableObject;
    id _invisibleObject;
    id _isCircleObject;
    NSString *_pageControl;
    UIColor *_lineColor4UIColor;
    UIColor *_dashColor4UIColor;
    id _widthObject;
    id _heightObject;
    id _needPageControlObject;
    long long _refreshDataModel;
    id _needDownRefreshObject;
    id _needNextPageObject;
    double _minimumInteritemSpacing;
    double _minimumLineSpacing;
    UIColor *_selectedBackgroundColor4UIColor;
    NSString *_selectedBackgroundImage;
    UIColor *_selectedTextColor4UIColor;
    NSString *_controlType;
    NSDictionary *_cssDict;
    NSDictionary *_extStyleBinding;
    NSString *_backgroindColor;
    NSString *_test;
    double _bmHeight;
}

@property(nonatomic) double bmHeight; // @synthesize bmHeight=_bmHeight;
@property(retain, nonatomic) NSString *test; // @synthesize test=_test;
@property(retain, nonatomic) NSString *backgroindColor; // @synthesize backgroindColor=_backgroindColor;
@property(retain, nonatomic) NSDictionary *extStyleBinding; // @synthesize extStyleBinding=_extStyleBinding;
@property(retain, nonatomic) NSDictionary *cssDict; // @synthesize cssDict=_cssDict;
@property(retain, nonatomic) NSString *controlType; // @synthesize controlType=_controlType;
@property(nonatomic) _Bool switchStatusOn; // @synthesize switchStatusOn=_switchStatusOn;
@property(nonatomic) _Bool isPointHide; // @synthesize isPointHide=_isPointHide;
@property(nonatomic) _Bool isShowTab; // @synthesize isShowTab=_isShowTab;
@property(retain, nonatomic) NSString *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) int selectedFontSize; // @synthesize selectedFontSize=_selectedFontSize;
@property(retain, nonatomic) UIColor *selectedTextColor4UIColor; // @synthesize selectedTextColor4UIColor=_selectedTextColor4UIColor;
@property(retain, nonatomic) NSString *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) NSString *selectedBackgroundImage; // @synthesize selectedBackgroundImage=_selectedBackgroundImage;
@property(retain, nonatomic) UIColor *selectedBackgroundColor4UIColor; // @synthesize selectedBackgroundColor4UIColor=_selectedBackgroundColor4UIColor;
@property(retain, nonatomic) NSString *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(nonatomic) double tabCellHeight; // @synthesize tabCellHeight=_tabCellHeight;
@property(nonatomic) double tabCellWidth; // @synthesize tabCellWidth=_tabCellWidth;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) int gridFlex; // @synthesize gridFlex=_gridFlex;
@property(nonatomic) int gridColumn; // @synthesize gridColumn=_gridColumn;
@property(nonatomic) _Bool needNextPage; // @synthesize needNextPage=_needNextPage;
@property(nonatomic) _Bool needDownRefresh; // @synthesize needDownRefresh=_needDownRefresh;
@property(retain, nonatomic) id needNextPageObject; // @synthesize needNextPageObject=_needNextPageObject;
@property(retain, nonatomic) id needDownRefreshObject; // @synthesize needDownRefreshObject=_needDownRefreshObject;
@property(nonatomic) long long refreshDataModel; // @synthesize refreshDataModel=_refreshDataModel;
@property(nonatomic) _Bool needPageControl; // @synthesize needPageControl=_needPageControl;
@property(retain, nonatomic) id needPageControlObject; // @synthesize needPageControlObject=_needPageControlObject;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) _Bool relayoutPage; // @synthesize relayoutPage=_relayoutPage;
@property(retain, nonatomic) id heightObject; // @synthesize heightObject=_heightObject;
@property(retain, nonatomic) id widthObject; // @synthesize widthObject=_widthObject;
@property(retain, nonatomic) UIColor *dashColor4UIColor; // @synthesize dashColor4UIColor=_dashColor4UIColor;
@property(retain, nonatomic) NSString *dashColor; // @synthesize dashColor=_dashColor;
@property(nonatomic) double dashGap; // @synthesize dashGap=_dashGap;
@property(nonatomic) double dashWidth; // @synthesize dashWidth=_dashWidth;
@property(retain, nonatomic) UIColor *lineColor4UIColor; // @synthesize lineColor4UIColor=_lineColor4UIColor;
@property(retain, nonatomic) NSString *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) int lineType; // @synthesize lineType=_lineType;
@property(retain, nonatomic) NSString *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSString *pageControlAlign; // @synthesize pageControlAlign=_pageControlAlign;
@property(retain, nonatomic) id isCircleObject; // @synthesize isCircleObject=_isCircleObject;
@property(retain, nonatomic) id invisibleObject; // @synthesize invisibleObject=_invisibleObject;
@property(retain, nonatomic) id disableObject; // @synthesize disableObject=_disableObject;
@property(nonatomic) _Bool isCircle; // @synthesize isCircle=_isCircle;
@property(nonatomic) _Bool invisibleSpace; // @synthesize invisibleSpace=_invisibleSpace;
@property(nonatomic) _Bool invisible; // @synthesize invisible=_invisible;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(retain, nonatomic) UIColor *timerBackgroundColor4UIColor; // @synthesize timerBackgroundColor4UIColor=_timerBackgroundColor4UIColor;
@property(retain, nonatomic) NSString *timerBackgroundColor; // @synthesize timerBackgroundColor=_timerBackgroundColor;
@property(nonatomic) long long timerType; // @synthesize timerType=_timerType;
@property(retain, nonatomic) NSString *keybordType; // @synthesize keybordType=_keybordType;
@property(retain, nonatomic) UIColor *placeholderTextColor4UIColor; // @synthesize placeholderTextColor4UIColor=_placeholderTextColor4UIColor;
@property(retain, nonatomic) NSString *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(nonatomic) double shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) double shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(retain, nonatomic) UIColor *shadowColor4UIColor; // @synthesize shadowColor4UIColor=_shadowColor4UIColor;
@property(retain, nonatomic) NSString *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double lineShadowOffsetY; // @synthesize lineShadowOffsetY=_lineShadowOffsetY;
@property(nonatomic) double lineShadowOffsetX; // @synthesize lineShadowOffsetX=_lineShadowOffsetX;
@property(retain, nonatomic) UIColor *lineShadowColor4UIColor; // @synthesize lineShadowColor4UIColor=_lineShadowColor4UIColor;
@property(retain, nonatomic) NSString *lineShadowColor; // @synthesize lineShadowColor=_lineShadowColor;
@property(nonatomic) _Bool fontUnNeedFitToScreenSize; // @synthesize fontUnNeedFitToScreenSize=_fontUnNeedFitToScreenSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) int fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) int fontStyle; // @synthesize fontStyle=_fontStyle;
@property(nonatomic) int fontWeight; // @synthesize fontWeight=_fontWeight;
@property(retain, nonatomic) UIColor *textColor4UIColor; // @synthesize textColor4UIColor=_textColor4UIColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIColor *backgroundColor4UIColor; // @synthesize backgroundColor4UIColor=_backgroundColor4UIColor;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor4UIColor; // @synthesize borderColor4UIColor=_borderColor4UIColor;
@property(retain, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) int align; // @synthesize align=_align;
@property(nonatomic) int gravity; // @synthesize gravity=_gravity;
@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) double marginTop; // @synthesize marginTop=_marginTop;
@property(nonatomic) int weight; // @synthesize weight=_weight;
@property(nonatomic) double randHeight; // @synthesize randHeight=_randHeight;
@property(nonatomic, getter=getHeight) double height; // @synthesize height=_height;
@property(nonatomic, getter=getWidth) double width; // @synthesize width=_width;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) int scrollBounce; // @synthesize scrollBounce=_scrollBounce;
@property(nonatomic) int scrollBar; // @synthesize scrollBar=_scrollBar;
@property(nonatomic) int scroll; // @synthesize scroll=_scroll;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool styleBindingHasSymbol; // @synthesize styleBindingHasSymbol=_styleBindingHasSymbol;
- (void).cxx_destruct;
- (id)makeFont;
- (id)toDictionary;
- (void)setLabelStyle:(id)arg1;
- (void)setTabStyle:(id)arg1;
- (void)setListStyle:(id)arg1;
- (void)setNotBasicStyleWithControlType:(id)arg1 withStyleDict:(id)arg2;
- (void)setBasicStyleWithNoWidthAndHeight:(id)arg1;
- (void)updateBasicStyle:(id)arg1;
- (void)updateStyleBindingSize;
- (void)setBasicStyle:(id)arg1;
- (void)setFromDictionary:(id)arg1;
- (void)getValueFromDataItemWithDataManager:(id)arg1;
- (void)updateCssItemDict:(id)arg1;
- (void)updateCssItem:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseStaticDataWithWeAppDataManager:(id)arg1;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2 prefix:(id)arg3;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2;

@end


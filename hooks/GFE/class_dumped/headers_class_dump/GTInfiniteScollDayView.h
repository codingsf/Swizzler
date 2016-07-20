//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class NSDate, NSMutableDictionary, NSString, UIFont, UIImageView, UILabel;

@interface GTInfiniteScollDayView : UIView
{
    BOOL _isCurrentDay;
    BOOL _active;
    BOOL _selected;
    BOOL _overlayEnabled;
    BOOL _shadowEnabled;
    NSDate *_date;
    UILabel *_monthLabel;
    UILabel *_dayLabel;
    UIView *_horizontalTopLine;
    UIView *_verticalRightLine;
    NSMutableDictionary *_overlayProperties;
    UIView *_shadowOverlayView;
    UIView *_shadowCornerLine;
    UIView *_shadowHorizontalLine;
    UIView *_shadowVerticalLine;
    UIImageView *_busyMeter;
    UIFont *_dayLabelFont;
    UIFont *_monthLabelFont;
    NSString *_dayLabelAccessibilityId;
    NSString *_monthLabelAccessibilityId;
}

+ (id)gradientShadowImageInRect:(struct CGRect)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 isRadial:(BOOL)arg4;
+ (void)initialize;
@property(retain, nonatomic) NSString *monthLabelAccessibilityId; // @synthesize monthLabelAccessibilityId=_monthLabelAccessibilityId;
@property(retain, nonatomic) NSString *dayLabelAccessibilityId; // @synthesize dayLabelAccessibilityId=_dayLabelAccessibilityId;
@property(retain, nonatomic) UIFont *monthLabelFont; // @synthesize monthLabelFont=_monthLabelFont;
@property(retain, nonatomic) UIFont *dayLabelFont; // @synthesize dayLabelFont=_dayLabelFont;
@property(nonatomic) UIImageView *busyMeter; // @synthesize busyMeter=_busyMeter;
@property(nonatomic) BOOL shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(retain, nonatomic) UIView *shadowVerticalLine; // @synthesize shadowVerticalLine=_shadowVerticalLine;
@property(retain, nonatomic) UIView *shadowHorizontalLine; // @synthesize shadowHorizontalLine=_shadowHorizontalLine;
@property(retain, nonatomic) UIView *shadowCornerLine; // @synthesize shadowCornerLine=_shadowCornerLine;
@property(retain, nonatomic) UIView *shadowOverlayView; // @synthesize shadowOverlayView=_shadowOverlayView;
@property(retain, nonatomic) NSMutableDictionary *overlayProperties; // @synthesize overlayProperties=_overlayProperties;
@property(nonatomic) BOOL overlayEnabled; // @synthesize overlayEnabled=_overlayEnabled;
@property(retain, nonatomic) UIView *verticalRightLine; // @synthesize verticalRightLine=_verticalRightLine;
@property(retain, nonatomic) UIView *horizontalTopLine; // @synthesize horizontalTopLine=_horizontalTopLine;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL isCurrentDay; // @synthesize isCurrentDay=_isCurrentDay;
- (void)drawTriangleMarkInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRectOld:(struct CGRect)arg1;
- (void)updateBusyMeter;
- (void)layoutSubviews;
- (void)updateShadows;
- (void)updateMonthLabelVisibility;
- (void)updateBackgroundAndFontColor;
- (void)updateView;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end


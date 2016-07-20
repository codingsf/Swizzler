/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class GTCalendarWeekStripDayView, NSDate, NSMutableArray, UIImage, UIImageView;

@interface GTCalendarWeekStripView : _ABAddressBookAddRecord
{
    NSDate *_date;
    GTCalendarWeekStripDayView *_selectedDayView;
    float _leftOffset;
    BOOL _maskEnabled;
    BOOL _showDoubleRedLines;
    UIImage *backgroundImage;
    NSMutableArray *dayViews;
    NSMutableArray *lineViews;
    UIImageView *_doubleRedLinesView;
}

+ (void)initialize;
- (void)setDoubleRedLinesView:(id)fp8;
- (id)doubleRedLinesView;
- (BOOL)showDoubleRedLines;
- (void)setLineViews:(id)fp8;
- (id)lineViews;
- (void)setDayViews:(id)fp8;
- (id)dayViews;
- (void)setBackgroundImage:(id)fp8;
- (id)backgroundImage;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)dealloc;
- (BOOL)isCurrentDaySelected;
- (void)updateStatusOfDays;
- (id)date;
- (void)setDate:(id)fp8;
- (void)applyMask;
- (id)maskImage;
- (void)setFrame:(struct CGRect)fp8;
- (void)setViewAndLinesPositionInFrame:(struct CGRect)fp8;
- (float)leftOffset;
- (void)setLeftOffset:(float)fp8;
- (void)setShowDoubleRedLines:(BOOL)fp8;
- (BOOL)maskEnabled;
- (void)setMaskEnabled:(BOOL)fp8;
- (void)addDoubleRedLines;
- (id)initWithFrame:(struct CGRect)fp8;

@end


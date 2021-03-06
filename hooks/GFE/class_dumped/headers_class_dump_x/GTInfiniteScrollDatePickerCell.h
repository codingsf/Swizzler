/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GTInfiniteScrollCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, GTCalendarDatePickerGridView, GTInfiniteScrollDatePickerBalloon, NSDate, NSMutableArray, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface GTInfiniteScrollDatePickerCell : GTInfiniteScrollCell <UIGestureRecognizerDelegate>
{
    UIView *_backgroundView;
    UIView *_headerView;
    UIView *_gridView;
    GTCalendarDatePickerGridView *_frontGridView;
    GTInfiniteScrollDatePickerBalloon *_balloonView;
    NSMutableArray *_tiles;
    NSMutableArray *_rowsOfTiles;
    UITapGestureRecognizer *_tileTapGestureRecognizer;
    UIPanGestureRecognizer *_tilePanGestureRecognizer;
    UILongPressGestureRecognizer *_tileLongPressGestureRecognizer;
    BOOL _isDayLongPressed;
    CALayer *_longPressedTile;
    BOOL _highlightsSelectedRow;
    NSDate *_date;
    int _cellIndex;
    id <GTInfiniteScrollDatePickerCellDataSource> _dataSource;
}

- (void)setHighlightsSelectedRow:(BOOL)fp8;
- (BOOL)highlightsSelectedRow;
- (void)setDataSource:(id)fp8;
- (id)dataSource;
- (void)setCellIndex:(int)fp8;
- (int)cellIndex;
- (void)setDate:(id)fp8;
- (id)date;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)handleTileLongPress:(id)fp8;
- (void)handleTilePan:(id)fp8;
- (void)handleTileTap:(id)fp8;
- (id)tileForTouch:(struct CGPoint)fp8;
- (void)didSelectDate:(id)fp8;
- (void)didSelectTile:(id)fp8;
- (void)selectDate:(id)fp8;
- (void)hideBalloon;
- (void)showBalloonForTile:(id)fp8;
- (void)updateRowHighlight;
- (void)prepareForReuse;
- (void)updateViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 reuseIdentifier:(id)fp24;

@end


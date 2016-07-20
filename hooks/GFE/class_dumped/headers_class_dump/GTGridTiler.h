//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "FilteredCacheDelegate.h"

@class CalendarOccurrence, FilteredCache, GTCalendarGridView, GTRecycleItemsQueue, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface GTGridTiler : NSObject <FilteredCacheDelegate>
{
    BOOL _throttled;
    BOOL _animated;
    BOOL _isClearingGrid;
    FilteredCache *_filteredCache;
    CalendarOccurrence *_occurrenceToWatchAndNotifyWhenShown;
    GTCalendarGridView *_gridView;
    NSMutableDictionary *_occurrenceToBubble;
    GTRecycleItemsQueue *_recycleItemsQueue;
    NSOperationQueue *_tilerOperationQueue;
    NSOperationQueue *_bubblesOperationQueue;
    NSMutableArray *_tileMatrixices;
}

@property(nonatomic) BOOL isClearingGrid; // @synthesize isClearingGrid=_isClearingGrid;
@property(retain, nonatomic) NSMutableArray *tileMatrixices; // @synthesize tileMatrixices=_tileMatrixices;
@property(retain, nonatomic) NSOperationQueue *bubblesOperationQueue; // @synthesize bubblesOperationQueue=_bubblesOperationQueue;
@property(retain, nonatomic) NSOperationQueue *tilerOperationQueue; // @synthesize tilerOperationQueue=_tilerOperationQueue;
@property(retain, nonatomic) GTRecycleItemsQueue *recycleItemsQueue; // @synthesize recycleItemsQueue=_recycleItemsQueue;
@property(retain, nonatomic) NSMutableDictionary *occurrenceToBubble; // @synthesize occurrenceToBubble=_occurrenceToBubble;
@property(retain, nonatomic) GTCalendarGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) CalendarOccurrence *occurrenceToWatchAndNotifyWhenShown; // @synthesize occurrenceToWatchAndNotifyWhenShown=_occurrenceToWatchAndNotifyWhenShown;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) BOOL throttled; // @synthesize throttled=_throttled;
@property(retain, nonatomic) FilteredCache *filteredCache; // @synthesize filteredCache=_filteredCache;
- (void)filteredCache:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didRemoveRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 willRemoveRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didAddRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didRemoveSectionsAtIndexes:(id)arg2;
- (void)filteredCache:(id)arg1 didAddSectionsAtIndexes:(id)arg2;
- (void)didInitiallyLoadDataForFilteredCache:(id)arg1;
- (void)eventBubbleDidShow:(id)arg1;
- (id)keyForOccurrence:(id)arg1;
- (void)reAdjustTileWidths;
- (id)eventBubbleForOccurrence:(id)arg1;
- (id)eventBubbleForNotifyOccurrence;
- (void)tileOccurrencesInMatrix:(id)arg1;
- (void)processTilingMatrix:(id)arg1;
- (void)tileGrid:(id)arg1;
- (void)removeTileForOccurrence:(id)arg1;
- (void)removeAllTiles;
- (void)setNeedsRetile;
- (id)initWithGridView:(id)arg1;
- (void)dealloc;

@end


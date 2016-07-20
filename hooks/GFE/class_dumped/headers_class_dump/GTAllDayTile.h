//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class CalendarOccurrence;

@interface GTAllDayTile : NSObject
{
    BOOL _firstDayTruncated;
    BOOL _numberOfDaysTruncated;
    int _firstDay;
    int _numberOfDays;
    int _row;
    id <GTAllDayObject> _bubble;
    CalendarOccurrence *_occurrence;
}

+ (id)tilesForOccurrences:(id)arg1 inWeekOfDate:(id)arg2 numberOfRows:(unsigned int *)arg3;
+ (id)tilesForBubbles:(id)arg1 inWeekOfDate:(id)arg2 numberOfRows:(unsigned int *)arg3;
+ (id)allDayTileWithOccurrence:(id)arg1 inWeekOfDate:(id)arg2;
+ (id)allDayTileWithBubble:(id)arg1 inWeekOfDate:(id)arg2;
@property(retain, nonatomic) CalendarOccurrence *occurrence; // @synthesize occurrence=_occurrence;
@property(retain, nonatomic) id <GTAllDayObject> bubble; // @synthesize bubble=_bubble;
@property(nonatomic) int row; // @synthesize row=_row;
@property(nonatomic) BOOL numberOfDaysTruncated; // @synthesize numberOfDaysTruncated=_numberOfDaysTruncated;
@property(nonatomic) int numberOfDays; // @synthesize numberOfDays=_numberOfDays;
@property(nonatomic) BOOL firstDayTruncated; // @synthesize firstDayTruncated=_firstDayTruncated;
@property(nonatomic) int firstDay; // @synthesize firstDay=_firstDay;
- (void)dealloc;

@end


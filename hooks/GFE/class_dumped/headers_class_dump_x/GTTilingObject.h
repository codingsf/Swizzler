/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class CalendarOccurrence;

@interface GTTilingObject : _ABAddressBookAddRecord
{
    CalendarOccurrence *_occurrence;
    int _numBuckets;
}

- (void)setNumBuckets:(int)fp8;
- (int)numBuckets;
- (void)setOccurrence:(id)fp8;
- (id)occurrence;
- (void)dealloc;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString;

@interface MasterVCMenuItem : _ABAddressBookAddRecord
{
    int _itemId;
    NSString *_itemLabel;
}

+ (id)masterVCMenuItemWithId:(int)fp8 andLabel:(id)fp12;
- (id)itemLabel;
- (int)itemId;
- (void)dealloc;
- (id)initWithId:(int)fp8 andLabel:(id)fp12;

@end


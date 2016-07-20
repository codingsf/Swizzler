/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class ArchiveEntry, NSData;

@interface ArchiveFile : _ABAddressBookAddRecord
{
    ArchiveEntry *rootEntry;
    NSData *data;
    NSData *toc;
}

+ (BOOL)isCompressedFile:(id)fp8;
- (id)rootEntry;
- (void)dealloc;
- (id)findEntry:(id)fp8;
- (id)initWithTOC:(id)fp8;
- (id)initWithData:(id)fp8;

@end


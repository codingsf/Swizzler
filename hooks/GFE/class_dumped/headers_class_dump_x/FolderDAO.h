/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "FolderDAOProtocol-Protocol.h"

@interface FolderDAO : _ABAddressBookAddRecord <FolderDAOProtocol>
{
}

+ (id)folderDAO;
- (BOOL)subscribeToFolder:(int)fp8;
- (BOOL)subscribedToFolder:(int)fp8;
- (BOOL)canChangeSubscriptionToFolder:(int)fp8;
- (id)nameOfFolderWithType:(int)fp8;

@end


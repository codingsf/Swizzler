/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TableWithSelectableItemsViewController.h"

@class NSMutableArray;

@interface SubfolderSyncViewController : TableWithSelectableItemsViewController
{
    BOOL _viewDidAppear;
    NSMutableArray *items;
}

- (void)setItems:(id)fp8;
- (id)items;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)dealloc;
- (void)backButtonPressed;
- (BOOL)deleteContactsFromFolders:(id)fp8;
- (id)init;
- (id)tableHeaderView;
- (id)getDefaultAutomationScreenName;

@end


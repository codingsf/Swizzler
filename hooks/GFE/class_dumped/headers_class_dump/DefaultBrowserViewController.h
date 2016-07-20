//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

@class DefaultBrowserHandler, NSMutableArray;

@interface DefaultBrowserViewController : UITableViewController
{
    DefaultBrowserHandler *_defaultBrowserHandler;
    NSMutableArray *_availableBrowsersNames;
    int _selectedRow;
}

@property(nonatomic) int selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSMutableArray *availableBrowsersNames; // @synthesize availableBrowsersNames=_availableBrowsersNames;
@property(readonly, nonatomic) DefaultBrowserHandler *defaultBrowserHandler; // @synthesize defaultBrowserHandler=_defaultBrowserHandler;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reload;
- (void)checkPreviouslySelectedRowWithNewRow:(int)arg1;
- (void)createBrowsersList;
- (id)initWithStyle:(int)arg1;
- (void)dealloc;
- (id)init;

@end


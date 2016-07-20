//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

#import "UIActionSheetDelegate.h"

@class NSMutableArray, SBBookmarkVC, SBHistFolderSpec, UIBarButtonItem, UISegmentedControl, UIToolbar;

@interface SBHistoryEntriesVC : UITableViewController <UIActionSheetDelegate>
{
    SBHistFolderSpec *parentFolderSpecs;
    NSMutableArray *sortedUrlEntries;
    NSMutableArray *sortedFolderSpecs;
    SBBookmarkVC *parentVC;
    UIBarButtonItem *_clearButton;
    UIToolbar *_toolbar;
    id <SBBookmarkVCDelegate> delegate;
    UISegmentedControl *segmentedControl;
}

@property(nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl;
@property(retain, nonatomic) NSMutableArray *sortedUrlEntries; // @synthesize sortedUrlEntries;
@property(retain, nonatomic) NSMutableArray *sortedFolderSpecs; // @synthesize sortedFolderSpecs;
@property(nonatomic) id <SBBookmarkVCDelegate> delegate; // @synthesize delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clearHistory;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)numberOfHistoryItems;
- (int)folderSpecIndexAtIndexPath:(id)arg1;
- (BOOL)isFolderAtIndexPath:(id)arg1;
- (void)prepareUrlEntriesForDay:(id)arg1;
- (void)prepareFolderEntries;
- (void)prepareHistoryEntries;
- (void)switchToBookmarks:(id)arg1;
- (void)onClear:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupToolbarAndButtonsVisibleState;
- (void)setupBottomToolbar;
- (void)viewDidLoad;
- (id)initWithHistFolderSpec:(id)arg1 parentVC:(id)arg2;
- (id)initWithParentVC:(id)arg1;
- (id)nibName;

@end


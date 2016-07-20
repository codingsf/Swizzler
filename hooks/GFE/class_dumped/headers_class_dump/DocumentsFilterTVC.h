//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

@class NSArray, UITableViewCell;

@interface DocumentsFilterTVC : UITableViewController
{
    int _mode;
    NSArray *_items;
    int *_updateFileOption;
    UITableViewCell *_checkedCell;
}

@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (id)initForFilterByFileAttr:(int *)arg1;
- (id)initForFilterByFileType:(int *)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUSplitViewController.h"

@class ContactViewControlleriPad, UIViewController;

@interface ContactSplitViewController : GUSplitViewController
{
    ContactViewControlleriPad *contactMasterVC;
    UIViewController *contactDetailVC;
}

@property(readonly, nonatomic) ContactViewControlleriPad *contactViewController; // @synthesize contactViewController=contactMasterVC;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)setDetailViewController:(id)arg1;
- (id)init;
- (void)dealloc;

@end


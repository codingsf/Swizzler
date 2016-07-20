//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUFontSizeAwareViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITextFieldDelegate.h"

@class AppointmentWrapper;

@interface KLAppointmentRepeatYearlyDayController : GUFontSizeAwareViewController <UIActionSheetDelegate, UITextFieldDelegate>
{
    AppointmentWrapper *appWrapper;
    AppointmentWrapper *appWrapperTmp;
    AppointmentWrapper *appWrapperTmpLoc;
    AppointmentWrapper *appWrapperTmpLocSv;
    int theMonth;
    int theDay;
}

@property(nonatomic) int theDay; // @synthesize theDay;
@property(nonatomic) int theMonth; // @synthesize theMonth;
@property(retain, nonatomic) AppointmentWrapper *appWrapperTmpLocSv; // @synthesize appWrapperTmpLocSv;
@property(retain, nonatomic) AppointmentWrapper *appWrapperTmpLoc; // @synthesize appWrapperTmpLoc;
@property(retain, nonatomic) AppointmentWrapper *appWrapperTmp; // @synthesize appWrapperTmp;
@property(retain, nonatomic) AppointmentWrapper *appWrapper; // @synthesize appWrapper;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)timerReloadData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)displayMonths:(int)arg1 cell:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)checkMonth;
- (id)init;

@end


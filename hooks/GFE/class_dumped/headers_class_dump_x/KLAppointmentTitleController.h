/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GUFontSizeAwareViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class AppointmentWrapper, UITextField;

@interface KLAppointmentTitleController : GUFontSizeAwareViewController <UITextFieldDelegate>
{
    UITextField *textFieldSubject;
    AppointmentWrapper *appWrapper;
    AppointmentWrapper *appWrapperTmp;
}

- (void)setAppWrapperTmp:(id)fp8;
- (id)appWrapperTmp;
- (void)setAppWrapper:(id)fp8;
- (id)appWrapper;
- (void)setTextFieldSubject:(id)fp8;
- (id)textFieldSubject;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)create_subject;
- (void)dealloc;
- (void)done;
- (id)init;

@end

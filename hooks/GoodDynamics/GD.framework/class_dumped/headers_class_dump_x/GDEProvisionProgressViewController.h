/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GDViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class gdui_progressroll;

@interface GDEProvisionProgressViewController : GDViewController <UIAlertViewDelegate>
{
    gdui_progressroll *_progressRollView;
}

- (void)set_progressRollView:(id)fp8;
- (id)_progressRollView;
- (void)bottomInfoButtonAction;
- (void)updateUIToOrientation:(int)fp8;
- (void)loadViewForAll;
- (void)loadViewForiPhone;
- (void)loadViewForiPad;
- (void)reportAProblem;
- (void)performActionAccordingToButton:(int)fp8;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)provisionStart;
- (void)backButtonClicked;
- (void)updateProgress:(id)fp8 withPercent:(float)fp12;
- (void)updateProgressRoll:(id)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIButton, UILabel, UITextView, gdui_button;

@interface GDBlockViewController : GDViewController <UIAlertViewDelegate>
{
    UILabel *blockTitleView;
    UITextView *blockMessageView;
    NSString *blockMessage;
    BOOL retry;
    BOOL willUpdate;
    BOOL offerRemoteUnlock;
    BOOL waitingMDMCallback;
    int reason;
    gdui_button *_unlockButton;
    gdui_button *_initiateMDMButton;
    UIButton *setupAccessKeyButton;
    NSString *_blockTitle;
}

@property(retain, nonatomic) NSString *blockTitle; // @synthesize blockTitle=_blockTitle;
@property(retain, nonatomic) UIButton *setupAccessKeyButton; // @synthesize setupAccessKeyButton;
@property(retain, nonatomic) gdui_button *initiateMDMButton; // @synthesize initiateMDMButton=_initiateMDMButton;
@property(retain, nonatomic) gdui_button *unlockButton; // @synthesize unlockButton=_unlockButton;
@property(nonatomic) BOOL waitingMDMCallback; // @synthesize waitingMDMCallback;
@property(nonatomic) BOOL offerRemoteUnlock; // @synthesize offerRemoteUnlock;
@property(nonatomic) BOOL willUpdate; // @synthesize willUpdate;
@property(nonatomic) BOOL retry; // @synthesize retry;
@property(nonatomic) int reason; // @synthesize reason;
@property(retain, nonatomic) NSString *blockMessage; // @synthesize blockMessage;
@property(retain, nonatomic) UITextView *blockMessageView; // @synthesize blockMessageView;
@property(retain, nonatomic) UILabel *blockTitleView; // @synthesize blockTitleView;
- (void)bottomInfoButtonAction;
- (BOOL)updateUI2:(id)arg1;
- (BOOL)updateUI:(BOOL)arg1;
- (void)moveButton:(id)arg1 belowTexView:(id)arg2;
- (void)updateUIToOrientation:(int)arg1;
- (void)positionMDMButton:(int)arg1;
- (void)showInitiateMDMButton;
- (void)loadViewForAll;
- (void)loadViewForiPhone;
- (void)loadViewForiPad;
- (void)positionSpinner:(int)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)becameActivate;
- (void)initiateMDMButtonPressed:(id)arg1;
- (void)unlockButtonPressed:(id)arg1;
- (void)dealloc;
- (id)setupAccessKeyButtonCreate;
- (id)buttonWithTypeAccordingToVersion;
- (void)setupUsingYourAccessKeyButtonAction:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


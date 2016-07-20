/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UITextFieldDelegate-Protocol.h"

@class UITextField;

@interface LockSettings : _ABAddressBookAddRecord <UITextFieldDelegate>
{
    struct CSecurityManager *securityManager;
    BOOL _bLetterAndDigits;
    BOOL _bUpperAndLowerCase;
    BOOL _bSpecialChar;
    BOOL _bNoSequentialNum;
    BOOL _bOneDayPwdRestriction;
    UITextField *minLengthField;
    UITextField *idleTimeOutField;
    UITextField *passwordHistoryField;
    UITextField *passwordExpiryField;
    UITextField *repeatCharsField;
}

- (void)setRepeatCharsField:(id)fp8;
- (id)repeatCharsField;
- (void)setPasswordHistoryField:(id)fp8;
- (id)passwordHistoryField;
- (void)setPasswordExpiryField:(id)fp8;
- (id)passwordExpiryField;
- (void)setIdleTimeOutField:(id)fp8;
- (id)idleTimeOutField;
- (void)setMinLengthField:(id)fp8;
- (id)minLengthField;
- (void)set_bOneDayPwdRestriction:(BOOL)fp8;
- (BOOL)_bOneDayPwdRestriction;
- (void)set_bNoSequentialNum:(BOOL)fp8;
- (BOOL)_bNoSequentialNum;
- (void)set_bSpecialChar:(BOOL)fp8;
- (BOOL)_bSpecialChar;
- (void)set_bUpperAndLowerCase:(BOOL)fp8;
- (BOOL)_bUpperAndLowerCase;
- (void)set_bLetterAndDigits:(BOOL)fp8;
- (BOOL)_bLetterAndDigits;
- (void)setSecurityManager:(struct CSecurityManager *)fp8;
- (struct CSecurityManager *)securityManager;
- (void)dealloc;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)switchAction:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)donePolicies:(id)fp8;
- (void)CancelScreen:(id)fp8;
- (void)viewDidLoad;

@end


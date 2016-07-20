/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UITextFieldDelegate-Protocol.h"

@class GUBarButtonItem, NSDictionary, NSString, UITextField;

@interface SBSaveToVC : _ABAddressBookAddRecord <UITextFieldDelegate>
{
    NSString *_filePath;
    NSString *_extension;
    NSString *_originalName;
    int _openedFrom;
    NSDictionary *_params;
    UITextField *textFieldWithFileName;
    GUBarButtonItem *cancelButton;
    GUBarButtonItem *saveButton;
    id <SBSaveToVCDelegateProtocol> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setSaveButton:(id)fp8;
- (id)saveButton;
- (void)setCancelButton:(id)fp8;
- (id)cancelButton;
- (void)setTextFieldWithFileName:(id)fp8;
- (id)textFieldWithFileName;
- (void)displayFileWriteErrMessage:(id)fp8;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)textFieldShouldClear:(id)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)save:(id)fp8;
- (void)cancel:(id)fp8;
- (void)dismissModalViewControllerAnimated:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)reconfigureFilenameCell;
- (id)initWithParams:(id)fp8 openedFrom:(int)fp12;
- (void)dealloc;

@end


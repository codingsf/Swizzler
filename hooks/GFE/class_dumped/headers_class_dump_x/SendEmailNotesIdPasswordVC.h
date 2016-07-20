/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NotesIdPasswordVC.h"

@class GUBarButtonItem, UIBarButtonItem, UIButton;

@interface SendEmailNotesIdPasswordVC : NotesIdPasswordVC
{
    UIBarButtonItem *_sendButton;
    GUBarButtonItem *_cancelButton;
    id <SendEmailNotesIdPasswordVCDelegate> _delegate;
    float _passwordCenterY;
    float _viewMessageButtonCenterY;
    UIButton *viewMessageButton;
}

- (void)setViewMessageButton:(id)fp8;
- (id)viewMessageButton;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (void)notificationArrived;
- (void)notificationArrivedMain;
- (void)cancel;
- (void)sendMessage:(id)fp8;
- (void)makeRoomForSecondLabel;
- (void)passwordTimeout;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end


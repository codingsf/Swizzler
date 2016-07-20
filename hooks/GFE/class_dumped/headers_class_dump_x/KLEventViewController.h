/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GUFontSizeAwareViewController.h"

#import "UIPopoverControllerDelegate-Protocol.h"

@class AppointmentWrapper, FileAttachmentView, GUAttachmentButton, UIPopoverController;

@interface KLEventViewController : GUFontSizeAwareViewController <UIPopoverControllerDelegate>
{
    AppointmentWrapper *appWrapper;
    GUAttachmentButton *_attachmentButton;
    UIPopoverController *currentPopover;
    FileAttachmentView *_fileAttachmentView;
    id <CalendarEventViewControllerDelegate> _delegate;
    int _currentOrientation;
    BOOL showAttachmentsFromPopover;
}

- (void)setShowAttachmentsFromPopover:(BOOL)fp8;
- (BOOL)showAttachmentsFromPopover;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)fileAttachmentView;
- (void)setCurrentPopover:(id)fp8;
- (id)currentPopover;
- (void)setAttachmentButton:(id)fp8;
- (id)attachmentButton;
- (void)setAppWrapper:(id)fp8;
- (id)appWrapper;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)closePopover;
- (void)dealloc;
- (void)showPopover;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)didRotate;
- (void)updateRotation:(id)fp8;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)addAttachmentButton:(id)fp8;
- (void)setFileAttachmentView:(id)fp8;
- (void)actionShowAttachments:(id)fp8;
- (id)init;

@end


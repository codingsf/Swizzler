/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FileAttachmentView.h"

#import "FileViewerDelegate-Protocol.h"
#import "GUEmptyViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class GUBarButtonItem, GUEmptyViewController, NSTimer, TimerDelegate, UIBarButtonItem, UINavigationController, UIPopoverController, UIToolbar, UIViewController;

@interface FileAttachmentViewiPad : FileAttachmentView <UIGestureRecognizerDelegate, FileViewerDelegate, GUEmptyViewControllerDelegate, UIPopoverControllerDelegate>
{
    UIViewController *_parentToShowFileViewerIn;
    UIPopoverController *_fileViewPopover;
    BOOL _isInFileViewer;
    unsigned int _currentAttachmentIndex;
    UINavigationController *_fileViewerNavigationController;
    UIBarButtonItem *_closeButton;
    UIBarButtonItem *_shareButton;
    GUBarButtonItem *_titleButton;
    UIToolbar *_titleToolbar;
    GUEmptyViewController *_emptyViewController;
    UIViewController *_previousFileViewerController;
    NSTimer *_hidingTimer;
    BOOL _closeAttachListPopoverOnDisappear;
    BOOL _preventNavigationbarHiding;
    BOOL _saveScreenIsShown;
    BOOL _shouldUsePageSheetModal;
    UIViewController *_parentModalVC;
    FileAttachmentViewiPad *_previouslyShown;
    TimerDelegate *_timerDelegate;
    UIPopoverController *_presentingPopoverController;
}

+ (double)HideNavigationBarTimeout;
- (void)setPresentingPopoverController:(id)fp8;
- (id)presentingPopoverController;
- (void)setShouldUsePageSheetModal:(BOOL)fp8;
- (BOOL)shouldUsePageSheetModal;
- (void)setTimerDelegate:(id)fp8;
- (id)timerDelegate;
- (void)setIsInFileViewer:(BOOL)fp8;
- (BOOL)isInFileViewer;
- (void)setPreviouslyShown:(id)fp8;
- (id)previouslyShown;
- (void)setParentModalVC:(id)fp8;
- (id)parentModalVC;
- (BOOL)saveScreenIsShown;
- (void)setHidingTimer:(id)fp8;
- (id)hidingTimer;
- (void)setFileViewPopover:(id)fp8;
- (id)fileViewPopover;
- (void)setParentToShowFileViewerIn:(id)fp8;
- (id)parentToShowFileViewerIn;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)emptyViewControllerViewWillDisappear;
- (void)closeImagePicker;
- (void)openImagePicker:(id)fp8 sourceType:(int)fp12;
- (void)handleShowModalViewController:(id)fp8;
- (void)showAttachmentInMoviePlayer;
- (void)hideNavigationBar:(id)fp8;
- (void)showNavigationBar;
- (void)showNavigationBarNotification:(id)fp8;
- (void)scheduleNavBarHiding;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)presentFileViewer;
- (void)removePopoverIfNeeded;
- (void)saveScreenWasClosed;
- (void)presentSaveViewControllerWithRename:(BOOL)fp8;
- (void)registerSaveViewControllerObserver;
- (void)closePopover;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)fileViewerWillDisappear:(id)fp8;
- (void)fileViewerWillAppear;
- (void)closeFileViewer;
- (void)setupNavigationFor:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)buildNavigationComponents;
- (void)showAttachmentsListPopover;
- (void)displayEmptyViewController;
- (void)willResignActive:(id)fp8;
- (void)willForeground:(id)fp8;
- (void)willBackground:(id)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)repositionFileViewInPopover;
- (void)viewWillAppear:(BOOL)fp8;
- (void)setPreventNavigationBarHiding:(BOOL)fp8;
- (BOOL)preventNavigationBarHiding;
- (void)clearHidingTimer;
- (void)documentsPolicyHasBeenDisabledIPad;
- (id)findButton:(id)fp8 titled:(id)fp12;
- (void)reloadToolbar;
- (void)documentsPolicyHasBeenEnabledIPad;
- (void)handlePreventBarHidingOff;
- (void)handlePreventBarHidingOn;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;

@end


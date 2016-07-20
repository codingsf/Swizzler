/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "EmailVC.h"

#import "GMMLatencyObserver-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class DocumentsActionSheet, DocumentsTVC, EMLObject, FileAttachmentView, NSString, UIActionSheet, UIToolbar, UIView;

@interface EMLViewerVC : EmailVC <GMMLatencyObserver, UIPopoverControllerDelegate, UIAlertViewDelegate>
{
    EMLObject *_eml;
    BOOL _disappearing;
    UIView *_loadingView;
    UIToolbar *_externalToolbar;
    DocumentsTVC *_documentsTVC;
    unsigned short documentID;
    NSString *_urlString;
    id <SourceDataProtocol> _source;
    int _attachmentId;
    BOOL _isOpenFromArchiveFile;
    DocumentsActionSheet *_sharedAS;
    UIActionSheet *_confirmDeleteAction;
    UIActionSheet *_attachManagerAction;
    id <FileViewerDelegate> fileViewerDelegate;
    FileAttachmentView *fileAttachmentView;
    NSString *fileName;
}

+ (id)viewerForEML:(id)fp8;
- (void)setIsOpenFromArchiveFile:(BOOL)fp8;
- (BOOL)isOpenFromArchiveFile;
- (void)setAttachmentId:(int)fp8;
- (int)attachmentId;
- (void)setSource:(id)fp8;
- (id)source;
- (id)urlString;
- (void)setDocumentsTVC:(id)fp8;
- (id)documentsTVC;
- (void)setExternalToolbar:(id)fp8;
- (id)externalToolbar;
- (void)setDocumentID:(unsigned short)fp8;
- (unsigned short)documentID;
- (void)setFileName:(id)fp8;
- (id)fileName;
- (void)setFileAttachmentView:(id)fp8;
- (id)fileAttachmentView;
- (void)setFileViewerDelegate:(id)fp8;
- (id)fileViewerDelegate;
- (void)setEml:(id)fp8;
- (id)eml;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)alertLowMemory;
- (void)highLatencyObserved;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webViewDidStartLoad:(id)fp8;
- (void)updateEmailHeaderView;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)initFileAttachmentToolbar;
- (void)initView;
- (void)initDocsToolbar;
- (void)dealloc;
- (id)init;
- (void)openWithAction:(id)fp8;
- (void)showSaveViewControllerRename:(BOOL)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)actionSheet:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)actionViewRecipient:(id)fp8;
- (void)actionSaveOpenIn;
- (void)actionShareSelectedItem;
- (void)actionDeleteSelectedItem;
- (void)dismissActionSheet;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)presentContactWithDetails:(id)fp8 button:(id)fp12;
- (void)setUrlString:(id)fp8;
- (id)rootVC;
- (void)setRootVC:(id)fp8;
- (id)getDefaultAutomationScreenName;

@end


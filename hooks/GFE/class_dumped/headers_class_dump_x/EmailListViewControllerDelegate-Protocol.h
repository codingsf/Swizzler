/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol EmailListViewControllerDelegate <NSObject>
- (void)emailListViewControllerDismissActionSheet:(id)fp8;
- (void)emailListViewController:(id)fp8 didSelectToolbarMarkWithSender:(id)fp12;
- (void)emailListViewControllerUpdatePagingControls:(id)fp8;
- (void)emailListViewController:(id)fp8 scrollToEmailItem:(id)fp12;
- (void)emailListViewController:(id)fp8 didChangeTotalItemCount:(int)fp12;
- (void)emailListViewController:(id)fp8 presentConfirmationForMultiDeleteAllEmails:(int)fp12;
- (void)emailListViewController:(id)fp8 presentConfirmationForMarkedDeleteEmails:(id)fp12;
- (void)emailListViewController:(id)fp8 presentConfirmationForMultiDeleteEmails:(id)fp12;
- (void)emailListViewController:(id)fp8 deleteEmailWithRecordId:(int)fp12;
- (void)emailListViewController:(id)fp8 willChangeFilterSort:(int)fp12;
- (void)emailListViewController:(id)fp8 willChangeFolder:(int)fp12;
- (BOOL)emailListViewController:(id)fp8 hasProblemsSendingEmailWithRecordId:(int)fp12;
- (void)emailListViewController:(id)fp8 shouldBlockDetailView:(BOOL)fp12;
- (void)emailListViewController:(id)fp8 didSelectComposeDraftWithRecordId:(int)fp12;
- (void)emailListViewController:(id)fp8 didSelectCompose:(int)fp12;
- (void)emailListViewController:(id)fp8 didSelectEmailWithRecordId:(int)fp12;
@end


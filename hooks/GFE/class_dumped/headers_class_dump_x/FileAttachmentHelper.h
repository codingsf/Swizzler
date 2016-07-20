/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface FileAttachmentHelper : _ABAddressBookAddRecord
{
}

+ (BOOL)getAttachment:(struct AnAttachment *)fp8 recordNumber:(unsigned short)fp12 attachmentID:(int)fp16 calendarMode:(BOOL)fp20;
+ (BOOL)isOpenInActionAllowedOnAttachment:(struct AnAttachment *)fp8;
+ (BOOL)isSaveAsActionAllowedOnAttachment:(struct AnAttachment *)fp8;
+ (BOOL)archiveContainBlockedFiles:(struct AnAttachment *)fp8 fromEmail:(int)fp12;
+ (BOOL)isAnyFileBlockedInArchive:(id)fp8;
+ (BOOL)isReceivingOpeningSizeBlockedWithSize:(int)fp8;
+ (BOOL)isReceivingOpeningExtensionBlocked:(id)fp8;
+ (id)getTruncatedAttachmentName:(id)fp8;
+ (BOOL)isSendSizeBlockedWithSize:(int)fp8;
+ (BOOL)isSendSizeBlockedWithURL:(id)fp8;
+ (BOOL)isSendExtensionBlocked:(id)fp8;
+ (id)imageForFile:(id)fp8 showBigImage:(BOOL)fp12;
+ (id)imageForFile:(id)fp8;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDUIPastboard : _CATransform3DMakeScale
{
}

+ (id)keyAfterRemovingPrefixFromKey:(id)fp8;
+ (BOOL)keyContainsPrefix:(id)fp8;
+ (id)gdPasteboardWithUniqueName;
+ (id)gdPasteboardWithName:(id)fp8 create:(BOOL)fp12;
+ (id)gdGeneralPasteboard;
+ (id)readPasteboardItemsFromContainer;
+ (void)savePasteboardItemsToContainer:(id)fp8;
+ (id)encryptedStringFromData:(id)fp8;
+ (id)decryptString:(id)fp8;
+ (id)encryptString:(id)fp8;
+ (id)decryptData:(id)fp8;
+ (id)encryptData:(id)fp8;

@end


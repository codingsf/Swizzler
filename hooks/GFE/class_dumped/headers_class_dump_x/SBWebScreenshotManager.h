/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableDictionary, UIImage;

@interface SBWebScreenshotManager : _ABAddressBookAddRecord
{
    UIImage *_thumbnailEmptyImage;
    NSMutableDictionary *_thumbnailDictionary;
    struct CGSize _thumbnailSize;
}

- (void)setThumbnailSize:(struct CGSize)fp8;
- (struct CGSize)thumbnailSize;
- (void)setThumbnailDictionary:(id)fp8;
- (id)thumbnailDictionary;
- (void)setThumbnailEmptyImage:(id)fp8;
- (id)thumbnailEmptyImage;
- (id).cxx_construct;
- (id)imageForTag:(int)fp8;
- (void)saveImagesForVCs:(id)fp8;
- (BOOL)saveImageForVC:(id)fp8;
- (void)initializeImageForTag:(int)fp8;
- (id)screenshotFileNameForTag:(int)fp8;
- (id)screenshotImageForVC:(id)fp8;
- (void)dealloc;
- (id)init;

@end


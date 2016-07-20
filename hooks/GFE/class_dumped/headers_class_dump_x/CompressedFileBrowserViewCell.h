/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface CompressedFileBrowserViewCell : _ABAddressBookAddRecord
{
    UIImageView *fileIcon;
    UILabel *fileName;
    UILabel *fileSizeLabel;
    UILabel *fileSizeValue;
    UILabel *fileProgressValue;
    UIImageView *padlockIcon;
    UIActivityIndicatorView *activityIndicator;
    BOOL canOpenInFileViewer;
    int _cellMode;
    UIView *cellContentView;
}

- (void)setCellContentView:(id)fp8;
- (id)cellContentView;
- (int)cellMode;
- (void)setActivityIndicator:(id)fp8;
- (id)activityIndicator;
- (void)setCanOpenInFileViewer:(BOOL)fp8;
- (BOOL)canOpenInFileViewer;
- (void)setPadlockIcon:(id)fp8;
- (id)padlockIcon;
- (void)setFileProgressValue:(id)fp8;
- (id)fileProgressValue;
- (void)setFileSizeValue:(id)fp8;
- (id)fileSizeValue;
- (void)setFileSizeLabel:(id)fp8;
- (id)fileSizeLabel;
- (void)setFileName:(id)fp8;
- (id)fileName;
- (void)setFileIcon:(id)fp8;
- (id)fileIcon;
- (void)setCellMode:(int)fp8;
- (void)dealloc;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)awakeFromNib;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end


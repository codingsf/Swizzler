/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIImageView, UIView;

@interface GUSelectableCell : _ABAddressBookAddRecord
{
    UIImageView *checkmarkImage;
    UIView *container;
    BOOL _multiEdited;
    BOOL _checkmarked;
}

- (BOOL)checkmarked;
- (BOOL)multiEdited;
- (void)setContainer:(id)fp8;
- (id)container;
- (void)setCheckmarkImage:(id)fp8;
- (id)checkmarkImage;
- (void)layoutSubviewsWithAnimation;
- (void)layoutSubviews;
- (BOOL)toggleCheckmark;
- (void)setCheckmarked:(BOOL)fp8;
- (void)setMultiEdited:(BOOL)fp8;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end


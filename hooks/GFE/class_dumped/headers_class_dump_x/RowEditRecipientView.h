/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "RowView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ContactBubbledTextInputMgr, UIButton, UILabel, UITextField;

@interface RowEditRecipientView : RowView <UIGestureRecognizerDelegate>
{
    UILabel *_recipientLabel;
    UITextField *_recipientTextField;
    UIButton *_addContactButton;
    ContactBubbledTextInputMgr *_contactBubbledTextInputMgr;
}

- (void)setContactBubbledTextInputMgr:(id)fp8;
- (id)contactBubbledTextInputMgr;
- (id)recipientLabel;
- (id)addContactButton;
- (id)recipientTextField;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (void)handleTapGesture:(id)fp8;
- (float)widthForTextField;
- (void)showAddContactButton:(BOOL)fp8;
- (void)setContentSizeCategory:(id)fp8;
- (void)setFonts;
- (void)layoutSubviews;
- (void)setRecipientLabel:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;

@end


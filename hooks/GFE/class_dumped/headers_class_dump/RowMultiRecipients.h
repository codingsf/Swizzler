//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RowView.h"

@class NSArray, NSMutableArray, UILabel;

@interface RowMultiRecipients : RowView
{
    struct CGSize _layoutedSize;
    UILabel *_recipientLabel;
    NSMutableArray *_recipientButtons;
}

@property(readonly, nonatomic) NSArray *recipientButtons; // @synthesize recipientButtons=_recipientButtons;
- (void)setContentSizeCategory:(id)arg1;
- (void)layoutSubviews;
- (void)reset;
- (void)setRecipientsLabelText:(id)arg1 recipients:(id)arg2;
- (void)setRecipientLabelText:(id)arg1 recipientText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class NSTimer, UILabel;

@interface FolderSubscriptionCell : UITableViewCell
{
    UILabel *_statusLabel;
    NSTimer *_timerSelection;
    id <FolderSubscriptionCellDelegate> _delegate;
}

@property(retain, nonatomic) NSTimer *timerSelection; // @synthesize timerSelection=_timerSelection;
@property(nonatomic) id <FolderSubscriptionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)selectCell:(id)arg1;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end


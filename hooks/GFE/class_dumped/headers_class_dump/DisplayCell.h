//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface DisplayCell : UITableViewCell
{
    UILabel *nameLabel;
    UIView *view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end


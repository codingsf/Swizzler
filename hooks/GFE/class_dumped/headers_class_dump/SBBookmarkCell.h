//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class CALayer;

@interface SBBookmarkCell : UITableViewCell
{
    int _type;
    CALayer *backgroundLayer;
}

+ (id)iconImageForType:(int)arg1;
@property(nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)layoutSubviews;
- (id)initWithType:(int)arg1 reuseIdentifier:(id)arg2;
- (void)refreshUI;
- (void)refreshLabels;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@interface GDDimmingWindow : UIWindow
{
    UIWindow *_previousKeyWindow;
}

+ (id)sharedInstance;
@property(nonatomic) UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
- (void)hideDimWindow;
- (void)makeDimWindowFront;
- (void)_updateToInterfaceOrientation:(id)arg1 duration:(id)arg2 force:(id)arg3;
- (void)_shouldAutorotateToInterfaceOrientation:(id)arg1;
- (void)privateInit;
- (id)init;

@end


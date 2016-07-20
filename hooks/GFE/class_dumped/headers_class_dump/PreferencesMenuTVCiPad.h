//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUSplitViewController.h"

#import "MasterVCDelegate.h"
#import "UINavigationControllerDelegate.h"

@class UIViewController;

@interface PreferencesMenuTVCiPad : GUSplitViewController <UINavigationControllerDelegate, MasterVCDelegate>
{
    struct CSecurityManager *_securityManager;
    BOOL _transitioning;
    UIViewController *_detailVcToShow;
}

@property(retain, nonatomic) UIViewController *detailVcToShow; // @synthesize detailVcToShow=_detailVcToShow;
@property(nonatomic) BOOL transitioning; // @synthesize transitioning=_transitioning;
- (void)showDetailsSoundsAndNotificationsView;
- (void)showSmimeDetailView;
- (void)selectedMasterItem:(int)arg1;
@property(nonatomic) struct CSecurityManager *securityManager; // @synthesize securityManager=_securityManager;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setDetailNavViewControllers:(id)arg1;
- (id)init;

@end


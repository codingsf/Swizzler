/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "SplitViewControllerDelegate-Protocol.h"
#import "TabBarDelegate-Protocol.h"

@class NSString, UINavigationController;

@interface GUSplitViewController : _ABAddressBookAddRecord <SplitViewControllerDelegate, TabBarDelegate>
{
    UINavigationController *masterNavVC;
    UINavigationController *detailNavVC;
    float masterWidthInLandscape;
    float masterWidthInPortrait;
    BOOL _interfaceLayedOut;
    BOOL _interfaceLandscape;
    NSString *tabIdentifier;
}

- (void)setMasterWidthInPortrait:(float)fp8;
- (float)masterWidthInPortrait;
- (void)setMasterWidthInLandscape:(float)fp8;
- (float)masterWidthInLandscape;
- (void)setTabIdentifier:(id)fp8;
- (id)tabIdentifier;
- (void)setDetailNavVC:(id)fp8;
- (id)detailNavVC;
- (void)setMasterNavVC:(id)fp8;
- (id)masterNavVC;
- (void)setTabBarHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)popFromDetailViewController:(BOOL)fp8;
- (void)pushDetailViewController:(id)fp8 animated:(BOOL)fp12;
- (void)popFromMasterViewController:(BOOL)fp8;
- (void)pushMasterViewController:(id)fp8 animated:(BOOL)fp12;
- (void)setDetailViewController:(id)fp8;
- (void)setMasterViewController:(id)fp8;
- (void)layoutViewControllersForInterfaceOrientation:(int)fp8;
- (void)layoutViewControllersForCurrentInterfaceOrientation;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)init;
- (void)dealloc;

@end


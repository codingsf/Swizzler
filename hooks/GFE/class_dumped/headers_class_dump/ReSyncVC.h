//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

@class UILabel, UIProgressView;

@interface ReSyncVC : UIViewController
{
    UILabel *_messageLabel;
    UILabel *_stateLabel;
    UILabel *_processLabel;
    UILabel *_processStateLabel;
    UIProgressView *_stateProgress;
    UIProgressView *_processProgress;
}

@property(retain, nonatomic) UILabel *processStateLabel; // @synthesize processStateLabel=_processStateLabel;
@property(retain, nonatomic) UILabel *processLabel; // @synthesize processLabel=_processLabel;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UIProgressView *processProgress; // @synthesize processProgress=_processProgress;
@property(retain, nonatomic) UIProgressView *stateProgress; // @synthesize stateProgress=_stateProgress;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;

@end


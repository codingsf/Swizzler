/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SmimeAlertView.h"

@class NSTimer, UIActivityIndicatorView, UIButton;

@interface SmimeCertificateLookUpAlertView : SmimeAlertView
{
    UIActivityIndicatorView *_activityIndicator;
    NSTimer *_cancelButtonTimer;
    UIButton *_cancelUIButton;
}

- (void)dealloc;
- (void)didPresentAlertView:(id)fp8;
- (void)enableCancelButtonNow;
- (void)show;
- (id)init;

@end


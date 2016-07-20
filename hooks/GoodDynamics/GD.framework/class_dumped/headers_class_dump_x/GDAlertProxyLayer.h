/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSMutableArray;

@interface GDAlertProxyLayer : _CATransform3DMakeScale
{
    NSMutableArray *shownAppAlertViewQ;
    BOOL isQueuingAlerts;
}

+ (id)sharedInstance;
+ (void)initializeGDAlertProxyLayer;
- (void)setIsQueuingAlerts:(BOOL)fp8;
- (BOOL)isQueuingAlerts;
- (void)setShownAppAlertViewQ:(id)fp8;
- (id)shownAppAlertViewQ;
- (void)dismissAppAlerts;
- (void)showAlertsInQ;
- (void)triggerAlertTakeover;
- (void)triggerAlertRelinquish;
- (void)qAlert:(id)fp8;

@end


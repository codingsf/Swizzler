/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface SBNetworkStateMonitor : _ABAddressBookAddRecord
{
    BOOL _isOfflineDueBackgroundTask;
    BOOL _isNetworkAvailable;
    struct AListener *_optionsDbListener;
}

- (BOOL)isOfflineDueBackgroundTask;
- (BOOL)isNetworkAvailable;
- (void)setNetworkState:(BOOL)fp8;
- (void)onGoingToForeground;
- (void)prepareForResume;
- (void)prepareForHibernation;
- (void)onOptionsDbNotif:(id)fp8;
- (void)stopListeningToNotifications;
- (void)listenToNotifications;
- (void)dealloc;

@end


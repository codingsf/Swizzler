/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray, NSString, SBProxyInfo;

@interface SBProxyPolicy : _ABAddressBookAddRecord
{
    int type;
    SBProxyInfo *http;
    SBProxyInfo *https;
    SBProxyInfo *socks;
    NSString *pacUrl;
    NSArray *exceptionHosts;
    struct GxLock listenersLock;
    struct list<IProxyPolicyListener *, std::allocator<IProxyPolicyListener *>> listeners;
}

- (void)setExceptionHosts:(id)fp8;
- (id)exceptionHosts;
- (void)setPacUrl:(id)fp8;
- (id)pacUrl;
- (void)setSocks:(id)fp8;
- (id)socks;
- (void)setHttps:(id)fp8;
- (id)https;
- (void)setHttp:(id)fp8;
- (id)http;
- (void)setType:(int)fp8;
- (int)type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)informListeners;
- (BOOL)unregisterListener:(struct IProxyPolicyListener *)fp8;
- (BOOL)registerListener:(struct IProxyPolicyListener *)fp8;
- (void)updatePolicy;
- (void)dealloc;
- (id)init;

@end


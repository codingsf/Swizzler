//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface GTConnectionMonitor : NSObject
{
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
- (int)currentReachabilityStatus:(_Bool)arg1;
- (int)currentReachabilityStatus;
- (int)networkStatusForFlags:(unsigned int)arg1 andPrintNetworkStatus:(_Bool)arg2;
- (void)dealloc;
- (void)stopNotifier;
- (BOOL)startNotifier;

@end


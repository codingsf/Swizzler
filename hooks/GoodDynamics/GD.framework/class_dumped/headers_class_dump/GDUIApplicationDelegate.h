//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDUIApplicationDelegate : NSObject
{
}

+ (void)backgroundInitialisationCheck:(id)arg1;
+ (BOOL)fileReceivedFromInsecureApp:(id)arg1 withOptions:(id)arg2;
+ (BOOL)fileReceivedFromInsecureApp:(id)arg1 url:(id)arg2;
+ (BOOL)isURLSchemeBlocked:(id)arg1;
+ (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
+ (BOOL)application:(id)arg1 shouldAllowExtensionPointIdentifier:(id)arg2;
+ (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationDidBecomeActive:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)registerDelegateWithClass:(Class)arg1;
+ (void)registerDelegateWithClassName:(id)arg1;
+ (void)registerDelegate;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDCookieManager : _CATransform3DMakeScale
{
}

+ (id)sharedGDCookieManager;
+ (void)initialize;
- (void)convertAndSaveCurlCookie:(char *)fp8;
- (_Bool)migrateCurlCookies;
- (void)queueOperationWithSelector:(SEL)fp8;
- (void)loadCookiesOperation;
- (void)loadCookies;
- (void)saveCookies;
- (void)cookiesDidChange:(id)fp8;
- (id)cookiesForURL:(id)fp8;
- (id)cookies;
- (void)clearCookiesForURL:(id)fp8 sessionCookiesOnly:(BOOL)fp12;
- (id)headerStringForCookiesWithURL:(id)fp8;
- (void)_saveCookiesFromHeaderDict:(id)fp8 forBaseURL:(id)fp12;
- (void)saveCookiesFromHeaderDict:(id)fp8 forBaseURL:(id)fp12;
- (void)saveCookiesFromHeader:(id)fp8 forBaseURL:(id)fp12;
- (_Bool)attemptDisableSystemCookies;
- (void)disableSystemCookies;
- (void)dealloc;
- (id)init;

@end


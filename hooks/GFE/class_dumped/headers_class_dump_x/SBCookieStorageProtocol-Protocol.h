/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "SBCookieAccessProtocol-Protocol.h"

@protocol SBCookieStorageProtocol <NSObject, SBCookieAccessProtocol>
- (void)deleteAllExpiredCookies;
- (void)deleteCookie:(id)fp8;
- (id)cookiesForURL:(id)fp8;
- (id)cookies;
- (void)setCookies:(id)fp8 forURL:(id)fp12 mainDocumentURL:(id)fp16;
- (void)setCookie:(id)fp8;
@end


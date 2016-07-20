//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDHttpRequest : NSObject
{
    id <GDHttpRequestDelegate> delegate;
    void *m_httpRequestInternal;
    BOOL _enablePipelining;
}

@property(nonatomic) BOOL enablePipelining; // @synthesize enablePipelining=_enablePipelining;
@property(nonatomic) id <GDHttpRequestDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (BOOL)abort;
- (BOOL)close;
- (id)getReceiveBuffer;
- (const char *)getAllResponseHeaders;
- (const char *)getResponseHeader:(const char *)arg1;
- (const char *)getStatusText;
- (int)getStatus;
- (int)getState;
- (void)addNSHTTPCookiesToRequest:(struct GDHttpRequestAdapter *)arg1;
- (BOOL)sendWithFile:(id)arg1;
- (BOOL)sendWithFile:(id)arg1 withTimeout:(double)arg2;
- (BOOL)send;
- (BOOL)sendData:(id)arg1;
- (BOOL)sendData:(id)arg1 withTimeout:(int)arg2;
- (BOOL)send:(const char *)arg1;
- (BOOL)send:(const char *)arg1 withTimeout:(int)arg2;
- (BOOL)send:(const char *)arg1 withLength:(unsigned int)arg2 withTimeout:(int)arg3;
- (void)clearPostValues;
- (void)setPostValue:(const char *)arg1 forKey:(const char *)arg2;
- (BOOL)setRequestHeader:(const char *)arg1 withValue:(const char *)arg2;
- (void)clearCookies:(BOOL)arg1;
- (BOOL)disableCookieHandling;
- (BOOL)disableHttpProxy;
- (BOOL)enableHttpProxy:(const char *)arg1 withPort:(int)arg2 withUser:(const char *)arg3 withPass:(const char *)arg4 withAuth:(const char *)arg5;
- (BOOL)enableHttpProxy:(const char *)arg1 withPort:(int)arg2;
- (BOOL)disableFollowLocation;
- (BOOL)disablePeerVerification;
- (BOOL)disableHostVerification;
- (BOOL)open:(const char *)arg1 withUrl:(const char *)arg2;
- (BOOL)open:(const char *)arg1 withUrl:(const char *)arg2 withAsync:(BOOL)arg3;
- (BOOL)open:(const char *)arg1 withUrl:(const char *)arg2 withUser:(const char *)arg3 withPass:(const char *)arg4 withAuth:(const char *)arg5;
- (BOOL)open:(const char *)arg1 withUrl:(const char *)arg2 withAsync:(BOOL)arg3 withUser:(const char *)arg4 withPass:(const char *)arg5 withAuth:(const char *)arg6;
- (BOOL)open:(const char *)arg1 withUrl:(const char *)arg2 withAsync:(BOOL)arg3 withUser:(const char *)arg4 withPass:(const char *)arg5;
- (id)stringWithPercentEscape:(id)arg1;
- (id)init;

@end


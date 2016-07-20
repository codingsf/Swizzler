//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "URLProtocolClientThreading.h"

#import "SBResourceLoaderDelegate.h"

@class NSArray, NSThread, SBResourceLoader;

@interface SBResourceDisplayerProtocol : URLProtocolClientThreading <SBResourceLoaderDelegate>
{
    SBResourceLoader *resourceLoader;
    BOOL injectAjaxOverride;
    NSThread *loadingThread;
    NSArray *runLoopModes;
}

+ (void)cleanUpActiveList;
+ (void)removeURLHandlerForURL:(id)arg1 URLHandler:(id)arg2;
+ (id)getNextURLHandlerandRemoveFromActiveList:(id)arg1;
+ (BOOL)checkAndAddURLToActiveList:(id)arg1 URLHandler:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)unregisterProtocol;
+ (void)registerProtocol;
+ (id)scheme;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (BOOL)externalCanInitWithRequest:(id)arg1;
- (void)setRunLoopModes:(id)arg1;
- (id)runLoopModes;
- (void)setLoadingThread:(id)arg1;
- (id)loadingThread;
@property(retain, nonatomic) SBResourceLoader *resourceLoader; // @synthesize resourceLoader;
- (void)wasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)finalizeResourceLoading:(struct SBResourceDesc *)arg1 hasError:(BOOL)arg2 eor:(BOOL)arg3 startLoadingTime:(unsigned long long)arg4 isUsingCache:(_Bool)arg5;
- (void)receivedResourceLastPartForUrl:(id)arg1 resDesc:(struct SBResourceDesc *)arg2 token:(struct SBResourceRequesterToken *)arg3;
- (void)receivedResourcePart:(id)arg1 url:(id)arg2 resDesc:(struct SBResourceDesc *)arg3 token:(struct SBResourceRequesterToken *)arg4;
- (BOOL)unregisterPopupLoading:(id)arg1;
- (id)injectDefaultScripts:(id)arg1 url:(id)arg2 resDesc:(struct SBResourceDesc *)arg3 token:(struct SBResourceRequesterToken *)arg4;
- (id)injectUserAgentScript:(id)arg1 url:(id)arg2 useGmaUserAgent:(BOOL)arg3 resDesc:(struct SBResourceDesc *)arg4 token:(struct SBResourceRequesterToken *)arg5;
- (id)injectCustomScriptForiFramePopUp:(id)arg1 url:(id)arg2 resDesc:(struct SBResourceDesc *)arg3 token:(struct SBResourceRequesterToken *)arg4;
- (id)injectCustomScripts:(id)arg1 url:(id)arg2 resDesc:(struct SBResourceDesc *)arg3 token:(struct SBResourceRequesterToken *)arg4;
- (id)injectScript:(id)arg1 inTo:(id)arg2;
- (void)receivedResourceFirstPartForUrl:(id)arg1 dataLen:(int)arg2 resDesc:(struct SBResourceDesc *)arg3 token:(struct SBResourceRequesterToken *)arg4;
- (void)resourceBeganLoadingForUrl:(id)arg1;
- (void)processEmptyResponseForUrl:(id)arg1 withToken:(struct SBResourceRequesterToken *)arg2;
- (void)processErrorResponseForUrl:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)notifyUiAboutFullPageDocumentWithUrl:(id)arg1 isFullPageDoc:(BOOL)arg2;
- (void)releaseMe;
- (void)stopLoading;
- (void)startLoadingSelector;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end


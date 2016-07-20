//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSURLProtocol.h"

#import "GTSocketCommunicationDelegate.h"

@class GTSocketCommunication;

@interface FileDecryptionProtocol : NSURLProtocol <GTSocketCommunicationDelegate>
{
    CDUnknownBlockType _successBlock;
    GTSocketCommunication *_reader;
    BOOL _stopped;
}

+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
- (void)streamDidReceiveData:(id)arg1;
- (void)streamEndedWithError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)startStreamDecryption:(id)arg1;
- (void)requireMainThread;
- (id)mimeTypeForExtension:(id)arg1;
- (void)streamDecryptFile:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end


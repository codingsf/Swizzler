//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol GTServiceDelegate <NSObject>
- (void)GTServiceDidReceiveFrom:(NSString *)arg1 forService:(NSString *)arg2 withVersion:(NSString *)arg3 forMethod:(NSString *)arg4 withParams:(id)arg5 withAttachments:(NSArray *)arg6 forRequestID:(NSString *)arg7;
- (BOOL)GTServiceDidConnectTo:(NSString *)arg1 withClientCertificate:(NSData *)arg2 withClientCertificateFromOpen:(NSData *)arg3 withEnterpriseMatch:(BOOL)arg4;
- (void)GTServiceDidReceiveConnectionRequest:(NSString *)arg1 withServerCertificate:(id *)arg2 withServerCertificatePrivateKey:(id *)arg3 withPkcs12Password:(id *)arg4 withEnterpriseUserNumber:(int *)arg5;

@optional
- (void)GTServiceDidReceiveActivationRequestFrom:(NSString *)arg1 withAppId:(NSString *)arg2 withAppName:(NSString *)arg3 withAppVersion:(NSString *)arg4 withNonce:(NSString *)arg5;
- (void)GTServiceDidFinishSendingTo:(NSString *)arg1 withAttachments:(NSArray *)arg2 withParams:(id)arg3 correspondingToRequestID:(NSString *)arg4;
- (void)GTServiceDidReceiveAuthRequestFrom:(NSString *)arg1 withPassword:(id *)arg2;
- (BOOL)GTServiceWillSendAttachmentData:(id *)arg1 withDataBlockLength:(int)arg2 withFilename:(NSString *)arg3 withFileSize:(int *)arg4 toApplication:(NSString *)arg5 correspondingToRequestID:(NSString *)arg6;
- (BOOL)GTServiceWillSendAttachmentData:(id *)arg1 withDataBlockLength:(int)arg2 withFilename:(NSString *)arg3 withFileSize:(int *)arg4 correspondingToRequestID:(NSString *)arg5;
- (void)GTServiceDidReceiveAttachmentData:(NSData *)arg1 withFilename:(NSString *)arg2 lastBlock:(BOOL)arg3;
- (void)GTServiceDidReceiveConnectionRequest:(NSString *)arg1 withServerCertificate:(id *)arg2 withServerCertificatePrivateKey:(id *)arg3 withPkcs8Password:(id *)arg4 withEnterpriseUserNumber:(int *)arg5;
@end


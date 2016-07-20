/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface GTServiceClient : _ABAddressBookAddRecord
{
    id <GTServiceClientDelegate> delegate;
}

+ (BOOL)cancelPendingRequest:(id)fp8 toApplication:(id)fp12;
+ (BOOL)sendActivationRequestTo:(id)fp8 withAppId:(id)fp12 withAppName:(id)fp16 withAppVersion:(id)fp20 withNonce:(id)fp24 error:(id *)fp28;
+ (BOOL)sendAuthRequestTo:(id)fp8 error:(id *)fp12;
+ (BOOL)bringToFront:(id)fp8 error:(id *)fp12;
+ (BOOL)sendTo:(id)fp8 withService:(id)fp12 withVersion:(id)fp16 withMethod:(id)fp20 withParams:(id)fp24 withAttachments:(id)fp28 bringServiceToFront:(int)fp32 requestID:(id *)fp36 error:(id *)fp40;
- (id)getDelegate;
- (void)setDelegate:(id)fp8;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "EmailSmimeAdapterFactoryProtocol-Protocol.h"

@interface EmailSmimeAdapterFactory : _ABAddressBookAddRecord <EmailSmimeAdapterFactoryProtocol>
{
}

- (void)destroy;
- (struct ISmimeUiAdapter *)createAdapter:(id)fp8;

@end


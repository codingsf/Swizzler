/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class CertificateDetails;

@interface SoftTokenImportResult : _ABAddressBookAddRecord
{
    CertificateDetails *certDetails;
    unsigned int validationStatus;
}

- (void)setCertDetails:(id)fp8;
- (id)certDetails;
- (void)setValidationStatus:(unsigned int)fp8;
- (unsigned int)validationStatus;
- (void)dealloc;

@end


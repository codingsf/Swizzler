/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface EmailObject : _ABAddressBookAddRecord <NSCoding, NSCopying>
{
    NSString *folder;
    NSString *importance;
    NSString *to;
    NSString *cc;
    NSString *bc;
    NSString *date;
    NSString *from;
    NSString *subject;
    NSString *content;
    NSString *listViewIconType;
}

- (void)setListViewIconType:(id)fp8;
- (id)listViewIconType;
- (void)setContent:(id)fp8;
- (id)content;
- (void)setSubject:(id)fp8;
- (id)subject;
- (void)setFrom:(id)fp8;
- (id)from;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setBc:(id)fp8;
- (id)bc;
- (void)setCc:(id)fp8;
- (id)cc;
- (void)setTo:(id)fp8;
- (id)to;
- (void)setImportance:(id)fp8;
- (id)importance;
- (void)setFolder:(id)fp8;
- (id)folder;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end

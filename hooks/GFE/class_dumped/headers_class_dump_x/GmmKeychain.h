/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface GmmKeychain : _ABAddressBookAddRecord
{
}

+ (id)generateRandomKey;
+ (void)removeKeychainItemWithKey:(id)fp8 withAttrAccessible:(void *)fp12;
+ (void)secureSetKeychainItem:(id)fp8 forKey:(id)fp12 withAttrAccessible:(void *)fp16;
+ (void)setKeychainItem:(id)fp8 forKey:(id)fp12 withAttrAccessible:(void *)fp16;
+ (void)setKeychainData:(id)fp8 forKey:(id)fp12 withAttrAccessible:(void *)fp16;
+ (id)secureKeychainItemForKey:(id)fp8 withAttrAccessible:(void *)fp12;
+ (id)keychainItemForKey:(id)fp8 withAttrAccessible:(void *)fp12;
+ (id)keychainDataForKey:(id)fp8 withAttrAccessible:(void *)fp12;
+ (id)keychainQueryForKey:(id)fp8 withAttrAccessible:(void *)fp12;

@end


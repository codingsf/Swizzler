//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface ContactWrapper : NSObject <NSCopying>
{
    NSMutableDictionary *contactPropertiesDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *contactPropertiesDictionary; // @synthesize contactPropertiesDictionary;
- (void)dealloc;
- (void)ensureDictionaryCreated;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dumpEntry;
- (void)addEntry:(id)arg1 forKey:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface ABExcludes : NSObject
{
    map_302d39f2 m_excludes;
    BOOL loaded;
    struct sqlite3 *db;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)clear;
- (BOOL)setExcludes:(const list_3318791b *)arg1;
- (void)dump;
- (BOOL)loadExcludes;
- (BOOL)hasExcludes;
- (BOOL)retrieveExcludes:(map_302d39f2 *)arg1;
- (id)initWithDbPath:(id)arg1;

@end


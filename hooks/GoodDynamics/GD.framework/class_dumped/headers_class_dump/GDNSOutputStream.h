//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

#import "NSStreamDelegate.h"

@class GDCWriteStream, NSString;

@interface GDNSOutputStream : NSOutputStream <NSStreamDelegate>
{
    GDCWriteStream *_writeStream;
}

+ (id)outputStreamWithFileAtPath:(id)arg1 append:(BOOL)arg2;
@property(retain) GDCWriteStream *writeStream; // @synthesize writeStream=_writeStream;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)open;
- (void)close;
- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


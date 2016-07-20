/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

#import "NSStreamDelegate-Protocol.h"

@interface GDCReadStream : _CATransform3DMakeScale <NSStreamDelegate>
{
    void *m_internalReader;
    int m_streamError;
    unsigned int m_offset;
    unsigned int m_streamStatus;
    id <NSStreamDelegate> m_delegate;
}

+ (BOOL)gdResolveMethod:(SEL)fp8 withNewSelector:(SEL)fp12;
+ (BOOL)resolveInstanceMethod:(SEL)fp8;
- (id)streamError;
- (BOOL)seekToFileOffset:(unsigned long long)fp8;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)fp8 length:(unsigned int *)fp12;
- (int)read:(char *)fp8 maxLength:(unsigned int)fp12;
- (void)dealloc;
- (unsigned int)streamStatus;
- (BOOL)setProperty:(id)fp8 forKey:(id)fp12;
- (id)propertyForKey:(id)fp8;
- (void)removeFromRunLoop:(id)fp8 forMode:(id)fp12;
- (void)scheduleInRunLoop:(id)fp8 forMode:(id)fp12;
- (void)gdunscheduleFromCFRunLoop:(struct __CFRunLoop *)fp8 forMode:(struct __CFString *)fp12;
- (void)gdscheduleInCFRunLoop:(struct __CFRunLoop *)fp8 forMode:(struct __CFString *)fp12;
- (BOOL)gdsetCFClientFlags:(unsigned long)fp8 callback:(void *)fp12 context:(CDAnonymousStruct3 *)fp16;
- (void)stream:(id)fp8 handleEvent:(unsigned int)fp12;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)close;
- (void)open;
- (id)initWithFile:(id)fp8;

@end


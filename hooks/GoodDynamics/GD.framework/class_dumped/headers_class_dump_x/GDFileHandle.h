/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDFileHandle : _CATransform3DMakeScale
{
    struct auto_ptr<GSCFileReaderV2> m_apReader;
    struct auto_ptr<GSCFileWriterV2> m_apWriter;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> m_name;
    _Bool m_isFile;
    _Bool m_isOpen;
    int m_opType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)truncateFileAtOffset:(unsigned long long)fp8;
- (void)synchronizeFile;
- (int)fileDescriptor;
- (void)closeFile;
- (void)seekToFileOffset:(unsigned long long)fp8;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (void)writeData:(id)fp8;
- (id)readDataOfLength:(unsigned int)fp8;
- (id)readDataToEndOfFile;
- (id)availableData;
- (id)sharedFileReader:(unsigned long)fp8;
- (BOOL)isFile;
- (BOOL)isWriting;
- (BOOL)isReading;
- (void)validate;
- (id)initWithFilePath:(id)fp8 opType:(int)fp12;
- (id)realFile:(id)fp8;

@end


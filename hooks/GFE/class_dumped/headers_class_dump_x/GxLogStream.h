/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray, NSInputStream, NSMutableData, NSOutputStream, ZLib;

@interface GxLogStream : _ABAddressBookAddRecord
{
    NSArray *_logFiles;
    NSMutableData *_decryptedData;
    NSMutableData *_compressedData;
    struct GxFile _currentFile;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    int _currentFileIndex;
    ZLib *_zlib;
}

- (void)setZlib:(id)fp8;
- (id)zlib;
- (id)stream;
- (void)setCompressedData:(id)fp8;
- (id)compressedData;
- (void)setDecryptedData:(id)fp8;
- (id)decryptedData;
- (void)setLogFiles:(id)fp8;
- (id)logFiles;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fillOutputStream;
- (void)removeSnapshot;
- (void)makeSnapshot;
- (id)getInputDataWithError:(id *)fp8;
- (BOOL)compressDataWithError:(id *)fp8;
- (BOOL)decryptDataWithError:(id *)fp8;
- (BOOL)openNextFileWithError:(id *)fp8;
- (BOOL)openFirstFileWithError:(id *)fp8;
- (void)initPairedStreams;
- (void)stop;
- (void)start;
- (int)destinationFileSize;
- (void)dealloc;
- (id)init;

@end


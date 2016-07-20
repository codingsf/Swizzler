/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GxFileUploaderIPhone.h"

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSOutputStream;

@interface FTPSend : GxFileUploaderIPhone <NSStreamDelegate>
{
    NSInputStream *inStream;
    NSOutputStream *outStream;
    NSOutputStream *folderStream;
    char *buffer;
    BOOL isCreateFolder;
}

- (void)setIsCreateFolder:(BOOL)fp8;
- (BOOL)isCreateFolder;
- (void)stream:(id)fp8 handleEvent:(unsigned int)fp12;
- (BOOL)isActive;
- (BOOL)createWriteStream:(id)fp8 user:(id)fp12 pwd:(id)fp16 remotePath:(id)fp20 remoteFolderPath:(id)fp24;
- (BOOL)createReadStream:(id)fp8;
- (void)releaseFolderStream;
- (void)releaseOutStream;
- (void)releaseInStream;
- (void)dealloc;

@end


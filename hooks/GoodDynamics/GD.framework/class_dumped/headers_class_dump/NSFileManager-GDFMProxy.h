//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@interface NSFileManager (GDFMProxy)
+ (void)replaceNSFileManager;
+ (id)replacementDefaultManager;
+ (id)originalDefaultManager;
- (id)replacementContainerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (id)originalContainerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (id)replacementPathContentOfSymbolicLinkAtPath:(id)arg1;
- (id)originalPathContentOfSymbolicLinkAtPath:(id)arg1;
- (id)replacementFileSystemAttributesAtPath:(id)arg1;
- (id)originalFileSystemAttributesAtPath:(id)arg1;
- (id)replacementFileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)originalFileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)replacementDirectoryContentsAtPath:(id)arg1;
- (id)originalDirectoryContentsAtPath:(id)arg1;
- (BOOL)replacementCreateSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (BOOL)originalCreateSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (BOOL)replacementCreateDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (BOOL)originalCreateDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (BOOL)replacementChangeFileAttributes:(id)arg1 atPath:(id)arg2;
- (BOOL)originalChangeFileAttributes:(id)arg1 atPath:(id)arg2;
- (id)replacementDelegate;
- (id)originalDelegate;
- (void)replacementSetDelegate:(id)arg1;
- (void)originalSetDelegate:(id)arg1;
- (id)replacementCurrentDirectoryPath;
- (id)originalCurrentDirectoryPath;
- (BOOL)replacementChangeCurrentDirectoryPath:(id)arg1;
- (BOOL)originalChangeCurrentDirectoryPath:(id)arg1;
- (id)replacementStringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned int)arg2;
- (id)originalStringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned int)arg2;
- (const char *)replacementFileSystemRepresentationWithPath:(id)arg1;
- (const char *)originalFileSystemRepresentationWithPath:(id)arg1;
- (BOOL)replacementContentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (BOOL)originalContentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)replacementContentsAtPath:(id)arg1;
- (id)originalContentsAtPath:(id)arg1;
- (BOOL)replacementSetAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)originalSetAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (id)replacementAttributesOfFileSystemForPath:(id)arg1 error:(id *)arg2;
- (id)originalAttributesOfFileSystemForPath:(id)arg1 error:(id *)arg2;
- (id)replacementAttributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)originalAttributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)replacementDisplayNameAtPath:(id)arg1;
- (id)originalDisplayNameAtPath:(id)arg1;
- (id)replacementComponentsToDisplayForPath:(id)arg1;
- (id)originalComponentsToDisplayForPath:(id)arg1;
- (BOOL)replacementIsDeletableFileAtPath:(id)arg1;
- (BOOL)originalIsDeletableFileAtPath:(id)arg1;
- (BOOL)replacementIsExecutableFileAtPath:(id)arg1;
- (BOOL)originalIsExecutableFileAtPath:(id)arg1;
- (BOOL)replacementIsWritableFileAtPath:(id)arg1;
- (BOOL)originalIsWritableFileAtPath:(id)arg1;
- (BOOL)replacementIsReadableFileAtPath:(id)arg1;
- (BOOL)originalIsReadableFileAtPath:(id)arg1;
- (BOOL)replacementFileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (BOOL)originalFileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (BOOL)replacementFileExistsAtPath:(id)arg1;
- (BOOL)originalFileExistsAtPath:(id)arg1;
- (id)replacementDestinationOfSymbolicLinkAtPath:(id)arg1 error:(id *)arg2;
- (id)originalDestinationOfSymbolicLinkAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)replacementLinkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)originalLinkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)replacementLinkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)originalLinkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)replacementCreateSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (BOOL)originalCreateSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (BOOL)replacementCreateSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (BOOL)originalCreateSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (id)replacementURLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id *)arg2 error:(id *)arg3;
- (id)originalURLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id *)arg2 error:(id *)arg3;
- (BOOL)replacementEvictUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)originalEvictUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)replacementStartDownloadingUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)originalStartDownloadingUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)replacementSetUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id *)arg4;
- (BOOL)originalSetUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id *)arg4;
- (BOOL)replacementIsUbiquitousItemAtURL:(id)arg1;
- (BOOL)originalIsUbiquitousItemAtURL:(id)arg1;
- (id)replacementURLForUbiquityContainerIdentifier:(id)arg1;
- (id)originalURLForUbiquityContainerIdentifier:(id)arg1;
- (id)replacementUbiquityIdentityToken;
- (id)originalUbiquityIdentityToken;
- (BOOL)replacementMoveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)originalMoveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)replacementMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)originalMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)replacementCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)originalCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)replacementCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)originalCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)replacementReplaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned int)arg4 resultingItemURL:(id *)arg5 error:(id *)arg6;
- (BOOL)originalReplaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned int)arg4 resultingItemURL:(id *)arg5 error:(id *)arg6;
- (BOOL)replacementRemoveItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)originalRemoveItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)replacementRemoveItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)originalRemoveItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)replacementCreateFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)originalCreateFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)replacementCreateDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)originalCreateDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)replacementCreateDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)originalCreateDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)replacementSubpathsAtPath:(id)arg1;
- (id)originalSubpathsAtPath:(id)arg1;
- (id)replacementSubpathsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)originalSubpathsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)replacementMountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned int)arg2;
- (id)originalMountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned int)arg2;
- (id)replacementEnumeratorAtPath:(id)arg1;
- (id)originalEnumeratorAtPath:(id)arg1;
- (id)replacementEnumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)originalEnumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)replacementContentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)originalContentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)replacementContentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (id)originalContentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (id)replacementURLsForDirectory:(unsigned int)arg1 inDomains:(unsigned int)arg2;
- (id)originalURLsForDirectory:(unsigned int)arg1 inDomains:(unsigned int)arg2;
- (id)replacementURLForDirectory:(unsigned int)arg1 inDomain:(unsigned int)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id *)arg5;
- (id)originalURLForDirectory:(unsigned int)arg1 inDomain:(unsigned int)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id *)arg5;
- (void)replacementDealloc;
- (void)originalDealloc;
- (id)fileManagerFor:(id)arg1;
@end


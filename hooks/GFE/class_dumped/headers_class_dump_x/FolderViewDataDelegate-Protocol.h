/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol FolderViewDataDelegate
- (void)folderViewDataDidFinishSearching:(id)fp8;
- (void)folderViewDataDidBeginSearching:(id)fp8;
- (void)folderViewDataEmailReceivedInCurFolder;
- (void)folderViewData:(id)fp8 didUpdateManifest:(BOOL)fp12;
- (void)folderViewData:(id)fp8 didSetFolderType:(int)fp12;
- (void)folderViewData:(id)fp8 didUpdateUnreadCount:(int)fp12;
@end


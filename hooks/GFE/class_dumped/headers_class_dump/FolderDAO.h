//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "FolderDAOProtocol.h"

@interface FolderDAO : NSObject <FolderDAOProtocol>
{
}

+ (id)folderDAO;
- (BOOL)subscribeToFolder:(int)arg1;
- (BOOL)subscribedToFolder:(int)arg1;
- (BOOL)canChangeSubscriptionToFolder:(int)arg1;
- (id)nameOfFolderWithType:(int)arg1;

@end


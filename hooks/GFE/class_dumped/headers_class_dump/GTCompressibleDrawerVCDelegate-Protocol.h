//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class GTCompressibleDrawerVC;

@protocol GTCompressibleDrawerVCDelegate <NSObject>

@optional
- (void)compressibleDrawerVCDidLayout:(GTCompressibleDrawerVC *)arg1;
- (void)compressibleDrawerVCDidStartDragging:(GTCompressibleDrawerVC *)arg1;
- (void)compressibleDrawerVCDidEndDragging:(GTCompressibleDrawerVC *)arg1;
- (float)compressibleDrawerVC:(GTCompressibleDrawerVC *)arg1 constrainSplitPosition:(float)arg2;
- (void)compressibleDrawerVC:(GTCompressibleDrawerVC *)arg1 didMoveSplitToPosition:(float)arg2;
- (void)compressibleDrawerVC:(GTCompressibleDrawerVC *)arg1 willMoveSplitToPosition:(float)arg2;
@end


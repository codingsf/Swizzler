//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class ContactPerson, NSString;

@interface ContactKeyword : NSObject
{
    NSString *keyword;
    ContactPerson *contactPerson;
}

@property(retain, nonatomic) ContactPerson *contactPerson; // @synthesize contactPerson;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword;
- (void)dump;
- (void)dealloc;
- (int)compareWord:(id)arg1;
- (id)initWithKeyword:(id)arg1 contact:(id)arg2;

@end


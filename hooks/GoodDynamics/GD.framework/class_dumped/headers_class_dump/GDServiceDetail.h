//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GDServiceDetail : NSObject
{
    NSString *identifier;
    NSString *version;
    int type;
}

@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (id)initWithService:(id)arg1 andVersion:(id)arg2 andType:(int)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@class NSMutableArray;

@interface OrderedDictionary : NSMutableDictionary
{
    NSMutableDictionary *dictionary;
    NSMutableArray *array;
}

- (void)removeAllObjects;
- (id)reverseObjectEnumeration;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (id)keyAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned int)arg3;
- (id)reverseKeyEnumerator;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)copy;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class GDSQLEntity, NSPropertyDescription, NSString;

@interface GDSQLProperty : _CATransform3DMakeScale
{
    GDSQLEntity *_entity;
    NSPropertyDescription *_propertyDescription;
    NSString *_name;
    NSString *_columnName;
    unsigned int _type;
    BOOL _fullColumnRequired;
    NSString *_ownedByEntityName;
}

+ (id)sqlPropertyWithEntity:(id)fp8 propertyDescription:(id)fp12;
- (BOOL)isManyToMany;
- (BOOL)isToOne;
- (BOOL)isToMany;
- (id)propertyDescription;
- (id)defaultValue;
- (unsigned int)type;
- (BOOL)isRelationship;
- (BOOL)isColumn;
- (BOOL)isAttribute;
- (id)fullColumnName;
- (id)entityOwnerName;
- (void)setEntityOwnerName:(id)fp8;
- (id)columnName;
- (id)name;
- (BOOL)isFullColumnRequired;
- (void)fullColumnRequired;
- (id)entity;
- (void)dealloc;
- (id)initWithEntity:(id)fp8 propertyDescription:(id)fp12;

@end

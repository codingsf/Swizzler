/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

#import "GDStoreSQLStatementsDescriptor-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface GDStoreSQLV1 : _CATransform3DMakeScale <GDStoreSQLStatementsDescriptor>
{
    NSDictionary *_entities;
    NSMutableDictionary *_manyRelationshipTable;
    NSMutableDictionary *_statements;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_insertStatementCache;
}

- (BOOL)isReservedKeyword:(id)fp8;
- (id)objectType;
- (id)objectID;
- (id)fetchRequestStatement:(id)fp8 managedObjectContext:(id)fp12 parameters:(id *)fp16 error:(id *)fp20;
- (id)fetchEntityStatementForEntity:(id)fp8 objectID:(long long)fp12 fetchedProperties:(id *)fp20;
- (id)getParentSelection:(id)fp8;
- (void)getChildrenOfEntity:(id)fp8 andFill:(id)fp12;
- (id)createIndexStatementsForEntity:(id)fp8;
- (id)fetchToManyRelationshipStatementForRelationship:(id)fp8 objectID:(long long)fp12 attributes:(id)fp20;
- (id)fetchToOneRelationshipStatementForRelationship:(id)fp8 entity:(id)fp12 destinationEntity:(id)fp16 attributes:(id)fp20;
- (id)deleteStatementSimpleForToManyRelationship:(id)fp8;
- (id)insertStatementForToManyRelationship:(id)fp8;
- (id)deleteStatementForToManyRelationship:(id)fp8;
- (id)createToManyTableStatementForRelationship:(id)fp8;
- (void)initialiseToManyTables:(id)fp8;
- (id)columnNameForInverseRelationship:(id)fp8;
- (id)tableNameForToManyRelationship:(id)fp8;
- (id)deleteStatementForEntity:(id)fp8;
- (id)updateStatementForEntity:(id)fp8 changedProperties:(id)fp12;
- (id)insertStatementForEntity:(id)fp8;
- (id)createTableStatementForEntity:(id)fp8;
- (id)escapeIdentifier:(id)fp8;
- (int)storeVersion;
- (BOOL)isSingleTableInheritanceEnabled;
- (id)entityWithName:(id)fp8;
- (id)entityForDescription:(id)fp8;
- (void)dealloc;
- (id)initWithEntities:(id)fp8;

@end


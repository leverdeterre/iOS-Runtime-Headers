/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableDictionary, NSURL;

@interface HDSQLiteDatabase : NSObject {
    NSMutableDictionary *_attachedDatabaseURLsByName;
    struct sqlite3 { } *_db;
    NSURL *_fileURL;
    struct __CFDictionary { } *_statementCache;
    long long _transactionType;
    bool_isInTransaction;
}

@property(readonly) NSURL * fileURL;

+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 didFinish:(bool*)arg3;
+ (bool)deleteDatabaseAtPath:(id)arg1;
+ (bool)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (bool)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (id)virtualFilesystemModule;

- (void).cxx_destruct;
- (int)_openWithPath:(id)arg1;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 cache:(bool)arg2;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (bool)addColumnInTable:(id)arg1 columnSQL:(id)arg2;
- (bool)alterTable:(id)arg1 removeColumns:(id)arg2 renameColumns:(id)arg3;
- (bool)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (void)detachDatabaseWithName:(id)arg1;
- (bool)dropTable:(id)arg1;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1;
- (id)fileURL;
- (id)initWithDatabaseURL:(id)arg1;
- (bool)insertColumns:(id)arg1 fromTableNamed:(id)arg2 toTableNamed:(id)arg3;
- (bool)isDatabaseWithNameAttached:(id)arg1;
- (int)open;
- (bool)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(id)arg3;
- (void)performTransactionWithType:(long long)arg1 usingBlock:(id)arg2;
- (void)prepareStatementForSQL:(id)arg1 cache:(bool)arg2 usingBlock:(id)arg3;
- (bool)removeColumnInTable:(id)arg1 name:(id)arg2;
- (bool)renameColumnInTable:(id)arg1 oldName:(id)arg2 newName:(id)arg3;
- (bool)renameTable:(id)arg1 newName:(id)arg2;
- (bool)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2;
- (long long)userVersionWithDatabaseName:(id)arg1;

@end

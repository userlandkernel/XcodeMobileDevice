//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSFastEnumeration-Protocol.h>

@class IDEIndexDBTempTable, NSArray;

@interface IDEIndexCollection : NSObject <NSFastEnumeration>
{
    IDEIndexDBTempTable *_tempTable;
    NSArray *_instantiatedRows;
    Class _expectedClass;
}

- (void).cxx_destruct;
- (BOOL)_checkExpectedClass:(id)arg1;
- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)dropTempTable;
- (id)firstObject;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithArrayNoCopy:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)instantiateRow:(struct sqlite3_stmt *)arg1;
- (unsigned long long)instantiateRowsUpto:(unsigned long long)arg1;
- (id)onlyObject;
- (void)setExpectedClass:(Class)arg1;
@property(readonly, nonatomic) IDEIndexDBTempTable *tempTable; // @synthesize tempTable=_tempTable;
- (id)tempTableSchema;
- (id)uniqueObjects;

@end


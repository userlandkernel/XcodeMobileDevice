//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDESourceKitUIDSet, IDESourceKitVariantArray;

@interface IDESourceKitResponseArray : NSObject
{
    IDESourceKitUIDSet *_UID;
    IDESourceKitVariantArray *_obj;
    Class _objectClass;
}

- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)count;
- (id)description;
- (id)ide_collection:(id)arg1;
- (id)ide_collectionArray:(id)arg1;
- (id)initWithUIDSet:(id)arg1 array:(id)arg2 objectClass:(Class)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end


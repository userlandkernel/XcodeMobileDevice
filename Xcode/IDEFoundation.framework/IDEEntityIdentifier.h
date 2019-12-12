//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDEEntityIdentifier : NSObject <NSCopying>
{
    unsigned long long _hashValue;
    int _sharedState;
    int _entityType;
    NSString *_entityName;
    NSString *_containerName;
    NSString *_entityGUID;
}

+ (id)entityIdentifierFromEntityName:(id)arg1 entityType:(int)arg2 containerName:(id)arg3;
+ (id)entityIdentifierFromEntityName:(id)arg1 entityType:(int)arg2 containerName:(id)arg3 isShared:(BOOL)arg4;
+ (id)entityIdentifierFromGUID:(id)arg1 entityName:(id)arg2 entityType:(int)arg3 containerName:(id)arg4;
+ (id)entityIdentifierFromGUID:(id)arg1 entityName:(id)arg2 entityType:(int)arg3 containerName:(id)arg4 isShared:(BOOL)arg5;
- (void).cxx_destruct;
@property(readonly, copy) NSString *containerName; // @synthesize containerName=_containerName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy) NSString *entityGUID; // @synthesize entityGUID=_entityGUID;
@property(readonly, copy) NSString *entityName; // @synthesize entityName=_entityName;
@property(readonly) int entityType; // @synthesize entityType=_entityType;
- (unsigned long long)hash;
- (id)initWithGUID:(id)arg1 entityName:(id)arg2 entityType:(int)arg3 containerName:(id)arg4 shared:(int)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSimilarToEntityIdentifier:(id)arg1;
@property(readonly) int sharedState; // @synthesize sharedState=_sharedState;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXObject.h>

#import <DevToolsInterface/NSCoding-Protocol.h>
#import <DevToolsInterface/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface XCBinderActionSet : PBXObject <NSCopying, NSCoding>
{
    NSString *_path;
    NSMutableArray *_actions[4];
}

+ (id)archivableAttributes;
+ (id)archivableRelationships;
- (id)actionsForActionType:(int)arg1;
- (id)buildActions;
- (id)classNameForPListArchive;
- (id)cleanActions;
- (BOOL)containsAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackClassNameForPListArchive;
- (id)gidCommentForArchive;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
@property(readonly, getter=isEmpty) BOOL empty;
- (id)otherActions;
@property(copy) NSString *path; // @synthesize path=_path;
- (id)runActions;
- (void)setActions:(id)arg1 forActionType:(int)arg2;
- (void)setBuildActions:(id)arg1;
- (void)setCleanActions:(id)arg1;
- (void)setOtherActions:(id)arg1;
- (void)setRunActions:(id)arg1;

@end

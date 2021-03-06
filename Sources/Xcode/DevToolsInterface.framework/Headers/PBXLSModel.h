//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCUnretainedReferent-Protocol.h>

@class NSMutableArray, XCUnretainedReference;

@interface PBXLSModel : NSObject <XCUnretainedReferent>
{
    XCUnretainedReference *_debuggerReference;
    PBXLSModel *_parentModel;
    int _validityStatus;
    NSMutableArray *_children;
    int _childValidityStatus;
    NSMutableArray *_viewControllers;
    XCUnretainedReference *_unretainedReference;
}

+ (id)stringForValidityStatus:(int)arg1;
- (id)_paddingForLevel:(unsigned long long)arg1;
- (id)_viewControllers;
- (void)addChild:(id)arg1;
- (void)addViewController:(id)arg1;
- (int)childValidityStatus;
- (id)children;
- (id)contentDescription;
- (id)contentDescriptionWithChildrenAtLevel:(unsigned long long)arg1;
- (void)dealloc;
- (id)debugger;
- (id)description;
- (BOOL)haveViewControllers;
- (void)informViewControllersOfDealloc;
- (void)informViewControllersOfUpdate;
- (id)initWithDebugger:(id)arg1;
- (id)initWithDebugger:(id)arg1 parentModel:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)parentModel;
- (void)removeAllChildren;
- (void)removeChild:(id)arg1;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)removeChildrenInRange:(struct _NSRange)arg1;
- (void)removeViewController:(id)arg1;
- (void)replaceChildAtIndex:(unsigned long long)arg1 withChild:(id)arg2;
- (void)setChildValidityStatus:(int)arg1;
- (void)setParentModel:(id)arg1;
- (void)setValidityStatus:(int)arg1;
- (id)unretainedReference;
- (int)validityStatus;
- (id)viewControllers;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PBXCCSymbolTable, PBXProjectIndex;

@interface PBXCodeCompletion : NSObject
{
    PBXProjectIndex *projectIndex;
    PBXCCSymbolTable *symTab;
}

+ (long long)debugLevel;
+ (void)initialize;
+ (id)stringByReplacingPlaceholderTokensInString:(id)arg1 withString:(id)arg2;
- (void)addScopeForClass:(id)arg1 isInstanceMethod:(BOOL)arg2;
- (void)clearSymbolTable;
- (id)completeExpression:(id)arg1 typeName:(id)arg2;
- (id)completeExternalDeclaration:(id)arg1 typeName:(id)arg2;
- (void)dealloc;
- (id)initWithProjectIndex:(id)arg1;
- (id)localVariables;
- (void)parseLocals:(id)arg1;
- (id)typeOfExpression:(id)arg1 resolveType:(BOOL)arg2;

@end

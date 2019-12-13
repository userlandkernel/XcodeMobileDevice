//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ASTNode, Declaration, GlobalProjectData, NSArray, NSString;
@protocol ScopeLookup;

@protocol ScopeLookup
- (void)addDeclaration:(Declaration *)arg1 project:(GlobalProjectData *)arg2;
- (ASTNode<ScopeLookup> *)containingScope;
- (NSArray *)declarations;
- (Declaration *)findName:(NSString *)arg1 nameKind:(int)arg2;
- (Declaration *)lookupName:(NSString *)arg1 nameKind:(int)arg2;
- (Declaration *)lookupNameRecursively:(NSString *)arg1 nameKind:(int)arg2 upTo:(ASTNode<ScopeLookup> *)arg3;
- (void)setContainingScope:(ASTNode<ScopeLookup> *)arg1;
@end

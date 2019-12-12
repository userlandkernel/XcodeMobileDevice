//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestContainer-Protocol.h>
#import <IDEFoundation/NSObject-Protocol.h>

@class DVTDocumentLocation, IDEBuildOperation, IDEBuildParameters, IDEExecutionEnvironment, IDERunDestination, IDETest, IDETestRunSpecification, IDEWorkspace, NSSet, NSString, NSURL;
@protocol IDEBuildable, IDEBuildableProduct, IDETestableProvider, IDETestingSpecifier;

@protocol IDETestable <IDETestContainer, DVTInvalidation, NSObject>
- (BOOL)canHaveSubtestsForTestWithIdentifier:(NSString *)arg1;
@property(readonly) BOOL isSearchingForTests;
@property(readonly) BOOL isUITest;
@property(readonly) NSString *name;
- (NSString *)nameForTestWithIdentifier:(NSString *)arg1;
- (id <IDEBuildable>)parentBuildableInWorkspace:(IDEWorkspace *)arg1;
- (id <IDEBuildable>)primaryBuildable;
- (void)removeSubtest:(IDETest *)arg1;
- (void)searchForTestsInWorkspace:(IDEWorkspace *)arg1;
- (IDETest *)supertestForTestWithIdentifier:(NSString *)arg1;
- (id <IDEBuildableProduct>)targetApplicationBuildableForWorkspace:(IDEWorkspace *)arg1;
- (id <IDEBuildableProduct>)targetApplicationBuildableForWorkspace:(IDEWorkspace *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
@property(readonly) NSSet *testFiles;
- (IDETest *)testForIdentifier:(NSString *)arg1;
- (IDETest *)testForIdentifier:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (IDETest *)testForIdentifier:(NSString *)arg1 location:(DVTDocumentLocation *)arg2 createIfNeeded:(BOOL)arg3;
- (id <IDEBuildableProduct>)testHostBuildableInWorkspace:(IDEWorkspace *)arg1;
- (IDETestRunSpecification *)testRunSpecificationWithTestingSpecifier:(id <IDETestingSpecifier>)arg1 executionEnvironment:(IDEExecutionEnvironment *)arg2 buildOperation:(IDEBuildOperation *)arg3 withBuildParameters:(IDEBuildParameters *)arg4 runDestination:(IDERunDestination *)arg5 error:(id *)arg6;
@property(readonly) id <IDETestableProvider> testableProvider;
- (NSSet *)testsInFile:(NSURL *)arg1;
@end


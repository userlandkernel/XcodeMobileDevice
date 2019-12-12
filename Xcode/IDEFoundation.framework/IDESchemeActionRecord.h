//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDESchemeActionResult, IDESchemeActionRunDestinationRecord, IDESchemeCommand, NSDate, NSString;

@interface IDESchemeActionRecord : NSObject
{
    int _schemeTask;
    IDESchemeCommand *_schemeCommand;
    NSString *_title;
    NSDate *_startedTime;
    NSDate *_endedTime;
    IDESchemeActionResult *_buildResult;
    IDESchemeActionResult *_actionResult;
    IDESchemeActionRunDestinationRecord *_runDestinationRecord;
    DVTFilePath *_localRecordDirectoryFilePath;
    DVTFilePath *_creatingWorkspaceFilePath;
}

+ (BOOL)getSchemeTask:(int *)arg1 fromDictionaryRepresentation:(id)arg2;
+ (id)keyPathsForValuesAffectingAnalyzerWarningCount;
+ (id)keyPathsForValuesAffectingErrorCount;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingTestsCount;
+ (id)keyPathsForValuesAffectingTestsFailedCount;
+ (id)keyPathsForValuesAffectingWarningCount;
+ (id)schemeCommandForString:(id)arg1;
+ (int)schemeTaskForString:(id)arg1;
+ (id)stringForSchemeTask:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IDESchemeActionResult *actionResult; // @synthesize actionResult=_actionResult;
@property(readonly, nonatomic) unsigned long long analyzerWarningCount;
@property(retain, nonatomic) IDESchemeActionResult *buildResult; // @synthesize buildResult=_buildResult;
- (void)close;
@property(retain, nonatomic) DVTFilePath *creatingWorkspaceFilePath; // @synthesize creatingWorkspaceFilePath=_creatingWorkspaceFilePath;
- (id)description;
- (id)dictionaryRepresentationForSchemeActionsInvocationRecord:(id)arg1;
@property(copy, nonatomic) NSDate *endedTime; // @synthesize endedTime=_endedTime;
@property(readonly, nonatomic) unsigned long long errorCount;
- (id)init;
- (id)initWithLocalRecordDirectoryFilePath:(id)arg1 creatingWorkspaceFilePath:(id)arg2 schemeTask:(int)arg3;
@property(retain, nonatomic) DVTFilePath *localRecordDirectoryFilePath; // @synthesize localRecordDirectoryFilePath=_localRecordDirectoryFilePath;
- (void)recordRunDestination:(id)arg1;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *runDestinationRecord; // @synthesize runDestinationRecord=_runDestinationRecord;
- (BOOL)saveReturningError:(id *)arg1;
@property(retain, nonatomic) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(readonly, nonatomic) int schemeTask; // @synthesize schemeTask=_schemeTask;
@property(copy, nonatomic) NSDate *startedTime; // @synthesize startedTime=_startedTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) unsigned long long testsCount;
@property(readonly, nonatomic) unsigned long long testsFailedCount;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1 forSchemeActionsInvocationRecord:(id)arg2;
@property(readonly, nonatomic) unsigned long long warningCount;

@end


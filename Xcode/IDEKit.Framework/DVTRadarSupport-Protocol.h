//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTStackBacktraceFrame, NSArray, NSData, NSNumber, NSString, NSWindow;
@protocol DVTRadarSupport_Issue, DVTRadar_Associate, DVTRadar_AttachmentDownloadDelegate, DVTRadar_ComponentForIdentifier, DVTRadar_Problem;

@protocol DVTRadarSupport <NSObject>
+ (id)sharedClient;
- (void)associateProblem:(id <DVTRadar_Problem>)arg1 withAssociate:(id <DVTRadar_Associate>)arg2;
- (void)asyncPrepareToReportSelfDiagnosisIssueWithBlock:(void (^)(void))arg1;
@property id <DVTRadar_AttachmentDownloadDelegate> attachmentDownloadDelegate;
- (id)attachmentFromData:(NSData *)arg1 withFilename:(NSString *)arg2 isPicture:(BOOL)arg3;
- (id)attachmentFromFile:(NSString *)arg1;
- (id <DVTRadar_ComponentForIdentifier>)bestComponentForClassName:(NSString *)arg1;
- (id <DVTRadar_ComponentForIdentifier>)bestComponentForFrame:(DVTStackBacktraceFrame *)arg1;
- (id <DVTRadar_ComponentForIdentifier>)bestComponentForPath:(NSString *)arg1;
- (NSArray *)hltComponentForClassNames;
- (NSArray *)hltComponentForPaths;
- (void)problemsForKeyword:(NSString *)arg1 completionBlock:(void (^)(NSError *, NSArray *))arg2;
- (void)problemsForProblemIDs:(NSArray *)arg1 completionBlock:(void (^)(NSError *, NSArray *))arg2;
- (void)reportSelfDiagnosisIssueWithSignature:(NSString *)arg1 title:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 description:(NSString *)arg5 keywords:(NSArray *)arg6 classification:(unsigned long long)arg7 ownerProblemID:(NSNumber *)arg8 canFileNewProblem:(BOOL)arg9 completionBlock:(void (^)(BOOL, unsigned long long, BOOL))arg10;
- (void)reportSelfDiagnosisIssueWithSignature:(NSString *)arg1 title:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 description:(NSString *)arg5 keywords:(NSArray *)arg6 classification:(unsigned long long)arg7 ownerProblemID:(NSNumber *)arg8 completionBlock:(void (^)(BOOL, unsigned long long, BOOL))arg9;
- (void)reportSelfDiagnosisIssueWithSignature:(NSString *)arg1 title:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 description:(NSString *)arg5 keywords:(NSArray *)arg6 ownerProblemID:(NSNumber *)arg7 canFileNewProblem:(BOOL)arg8 completionBlock:(void (^)(BOOL, unsigned long long, BOOL))arg9;
- (void)reportSelfDiagnosisIssueWithSignature:(NSString *)arg1 title:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 description:(NSString *)arg5 keywords:(NSArray *)arg6 ownerProblemID:(NSNumber *)arg7 completionBlock:(void (^)(BOOL, unsigned long long, BOOL))arg8;
- (BOOL)selfDiagnosisEnabled;
- (void)showRadarNumberPromptForIssue:(id <DVTRadarSupport_Issue>)arg1 attachedToWindow:(NSWindow *)arg2 completionBlock:(void (^)(NSError *, unsigned long long))arg3;
- (void)showRadarNumberPromptForIssues:(NSArray *)arg1 attachedToWindow:(NSWindow *)arg2 completionBlock:(void (^)(NSError *, unsigned long long))arg3;
- (void)showRadarUIForIssue:(id <DVTRadarSupport_Issue>)arg1 componentName:(NSString *)arg2 componentVersion:(NSString *)arg3 attachmentDownloadDelegate:(id <DVTRadar_AttachmentDownloadDelegate>)arg4 attachedToWindow:(NSWindow *)arg5 completionBlock:(void (^)(NSError *, unsigned long long))arg6;
- (void)showRadarUIForIssues:(NSArray *)arg1 bugTitle:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 attachmentDownloadDelegate:(id <DVTRadar_AttachmentDownloadDelegate>)arg5 attachedToWindow:(NSWindow *)arg6 completionBlock:(void (^)(NSError *, unsigned long long))arg7;
- (void)validateRadarComponentName:(NSString *)arg1 version:(NSString *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlProgressAssistant.h>

@interface IDESourceControlDownloadAssistant : IDESourceControlProgressAssistant
{
    BOOL canGoForward;
    BOOL canFinish;
}

+ (BOOL)canShowDeterminateProgress;
+ (id)progressStatus;
- (void)_downloadContextToURL:(id)arg1;
- (void)_findWorkspaceInWorkingCopy:(id)arg1;
- (void)_finishByClosing:(BOOL)arg1 andOpenURL:(id)arg2;
@property BOOL canFinish; // @synthesize canFinish;
- (BOOL)canGoBack;
@property BOOL canGoForward; // @synthesize canGoForward;
- (id)downloadAssistantContext;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)previousAssistantIdentifier;
- (void)primitiveInvalidate;
- (id)projectDataType;
- (void)viewDidLoad;
- (void)willGoNextOrFinish;
- (id)workspaceDataType;

@end


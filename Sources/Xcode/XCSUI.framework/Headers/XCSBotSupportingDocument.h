//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class NSError, XCSBot, XCSIntegration;

@interface XCSBotSupportingDocument : IDEEditorDocument
{
    NSError *_error;
}

+ (id)documentLocationForBotSummaryDocumentLocation:(id)arg1 blueprint:(id)arg2 inWorkspace:(id)arg3;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (void).cxx_destruct;
@property(readonly, nonatomic) XCSBot *bot;
@property(readonly, nonatomic) XCSIntegration *botIntegration;
- (id)displayName;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)fetchGeniusResultsForDocumentLocations:(id)arg1 inWorkspace:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (int)readOnlyStatus;
- (void)updateBotIntegration:(id)arg1;

@end


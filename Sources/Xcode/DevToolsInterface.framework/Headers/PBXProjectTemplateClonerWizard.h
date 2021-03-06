//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectWizard.h>

@class NSArray, NSDictionary, NSString;

@interface PBXProjectTemplateClonerWizard : PBXProjectWizard
{
    NSString *_clonedProjectPath;
    NSDictionary *_subpathSubstitutions;
    NSArray *_filesToPreserve;
}

+ (id)defaultModuleNibName;
- (id)_filesToPreserve;
- (id)_instantiateASCIIMacroTemplateWithContext:(id)arg1;
- (id)_instantiateTemplateWithContext:(id)arg1;
- (id)_listOfFilesToCopy;
- (id)_loadStringWithContentsOfFile:(id)arg1;
- (void)_setFilesToPreserve:(id)arg1;
- (void)_setSubpathSubstitutions:(id)arg1;
- (id)_subpathSubstitutions;
- (BOOL)canFinish;
- (id)createProjectAtPath:(id)arg1;
- (void)dealloc;
- (id)destinationPath:(id)arg1 forSourcePath:(id)arg2 ofType:(id)arg3 forFileManager:(id)arg4;
- (id)fileAttributes:(id)arg1 forDestinationPath:(id)arg2 forSourcePath:(id)arg3 ofType:(id)arg4 forFileManager:(id)arg5;
- (id)initWithSettings:(id)arg1 parentPage:(id)arg2 nextPage:(id)arg3 parentNextPageSelector:(SEL)arg4;
- (void)setTemplateProjectPath:(id)arg1;
- (void)setupDefaultSettings;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(id)arg2;
- (id)templateProjectPath;

@end


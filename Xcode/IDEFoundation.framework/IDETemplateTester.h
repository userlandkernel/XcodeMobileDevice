//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFuture, DVTPlatform, DVTPromise, IDEProvisioningTeamManager, NSMutableDictionary, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDETemplateTester : NSObject
{
    BOOL _permuteTestOptions;
    NSString *_outputPath;
    DVTPlatform *_platform;
    NSMutableDictionary *_usedTemplateNamesByPlatform;
    unsigned long long _testProjectCounter;
    IDEProvisioningTeamManager *_teamManager;
    DVTFuture *_teamsLoadingFuture;
    DVTPromise *_teamsLoadingPromise;
    id <IDEProvisioningBasicTeam> _team;
}

- (void).cxx_destruct;
- (void)doProjectTemplate:(id)arg1;
- (id)init;
- (id)initWithOutputPath:(id)arg1 teamID:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy) NSString *outputPath; // @synthesize outputPath=_outputPath;
- (void)permuteOptions:(id)arg1 inProjectTemplate:(id)arg2 withPlatformName:(id)arg3 withFolderName:(id)arg4;
@property BOOL permuteTestOptions; // @synthesize permuteTestOptions=_permuteTestOptions;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
- (void)runTemplateTests;
@property(retain) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property(retain) DVTFuture *teamsLoadingFuture; // @synthesize teamsLoadingFuture=_teamsLoadingFuture;
@property(retain) DVTPromise *teamsLoadingPromise; // @synthesize teamsLoadingPromise=_teamsLoadingPromise;
@property unsigned long long testProjectCounter; // @synthesize testProjectCounter=_testProjectCounter;
@property(retain) NSMutableDictionary *usedTemplateNamesByPlatform; // @synthesize usedTemplateNamesByPlatform=_usedTemplateNamesByPlatform;
- (id)uniqueTemplateNameForName:(id)arg1 platformName:(id)arg2;

@end


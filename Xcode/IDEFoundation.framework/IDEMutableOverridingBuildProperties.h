//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOverridingBuildProperties.h>

@class DVTMacroDefinitionTable;

@interface IDEMutableOverridingBuildProperties : IDEOverridingBuildProperties
{
}

@property(copy) DVTMacroDefinitionTable *macrosFromCommandLine;
@property(copy) DVTMacroDefinitionTable *macrosFromCommandLineXcconfigFile;
@property(copy) DVTMacroDefinitionTable *macrosFromEnvironmentXcconfigFile;
- (void)setMacroDefinitionTable:(id)arg1 forLevel:(int)arg2;
@property(copy) DVTMacroDefinitionTable *synthesizedMacros;

@end


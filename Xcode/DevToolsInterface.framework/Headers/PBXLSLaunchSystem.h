//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PBXLSLaunchSystem : NSObject
{
}

+ (id)_adaptorClassesDictionary;
+ (id)_debuggableFileTypes;
+ (id)_debuggerAdaptorClassesSet;
+ (BOOL)_loadADebugger;
+ (void)_loadBuiltins;
+ (id)_pendingSessions;
+ (id)_prototypeConfigSet;
+ (id)_setOfPlugins;
+ (void)_setupLaunchConfigsForExectuable:(id)arg1 andLaunchAction:(id)arg2;
+ (Class)adaptorClassForName:(id)arg1;
+ (void)beginStopOfSession:(id)arg1;
+ (id)configIdentifierForMallocDebug;
+ (id)configIdentifierForObjectAlloc;
+ (id)configIdentifierForShark;
+ (id)configIdentifierForUIIndexing;
+ (id)configIdentifierForXray;
+ (id)debuggerAdaptorClasses;
+ (id)debuggerPluginForFileType:(id)arg1;
+ (id)launchConfigForExectuable:(id)arg1 andLaunchAction:(id)arg2;
+ (id)launchConfigsForLaunchAction:(id)arg1 andFileType:(id)arg2;
+ (void)loadAllDebuggerPlugins;
+ (id)pathForShark;
+ (id)pluginForClass:(Class)arg1;
+ (void)registerAdaptorClasses:(id)arg1;
+ (void)registerDebuggableFileTypes:(id)arg1 forPlugin:(id)arg2;
+ (void)registerLaunchSystemPlugin:(id)arg1;
+ (void)registerPrototypeLaunchConfigs:(id)arg1;
+ (void)sessionDidStop:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PBXProjectWatcher : NSObject
{
}

+ (BOOL)_connectIfNecessary;
+ (void)_connectionDidDie:(id)arg1;
+ (BOOL)_hasAnyObservers;
+ (void)_pbxDidLaunch:(id)arg1;
+ (void)_registerForFileObservation;
+ (void)_registerForProjectFileObservation;
+ (void)_registerForProjectObservation;
+ (void)_registerForTargetFileObservation;
+ (void)_registerForTargetObservation;
+ (id)_serverProxy;
+ (id)_sharedObserverInstance;
+ (void)_updatePBXDidLaunchObserverStatus;
+ (id)activeTargetInProject:(id)arg1;
+ (void)addFileObserver:(id)arg1 selector:(SEL)arg2 forFile:(id)arg3;
+ (void)addFiles:(id)arg1 toProject:(id)arg2 nearFile:(id)arg3 addToTargets:(id)arg4 copyIntoGroupFolder:(BOOL)arg5 createGroupsRecursively:(BOOL)arg6;
+ (void)addFiles:(id)arg1 toProject:(id)arg2 nearFile:(id)arg3 preferredInsertionGroupName:(id)arg4 addToTargets:(id)arg5 copyIntoGroupFolder:(BOOL)arg6 createGroupsRecursively:(BOOL)arg7;
+ (void)addFiles:(id)arg1 toProject:(id)arg2 nearFile:(id)arg3 preferredInsertionGroupName:(id)arg4 addToTargets:(id)arg5 copyIntoGroupFolder:(BOOL)arg6 createGroupsRecursively:(BOOL)arg7 fileEncoding:(unsigned long long)arg8;
+ (void)addGroupWithName:(id)arg1 path:(id)arg2 toProject:(id)arg3 nearFile:(id)arg4;
+ (void)addGroupWithName:(id)arg1 path:(id)arg2 toProject:(id)arg3 nearFile:(id)arg4 preferredInsertionGroupName:(id)arg5;
+ (void)addOpenProjectObserver:(id)arg1 selector:(SEL)arg2;
+ (void)addProjectFileObserver:(id)arg1 selector:(SEL)arg2 forFilesOfTypes:(id)arg3 inProject:(id)arg4;
+ (void)addTargetFileObserver:(id)arg1 selector:(SEL)arg2 forFilesOfTypes:(id)arg3 inTarget:(id)arg4 ofProject:(id)arg5;
+ (void)addTargetObserver:(id)arg1 selector:(SEL)arg2 forProject:(id)arg3;
+ (id)builtProductsLocationOfTarget:(id)arg1 inProject:(id)arg2;
+ (id)canonicalNameOfSDKOfTarget:(id)arg1 inProject:(id)arg2;
+ (void)editFile:(id)arg1 andDisplayCharacterRange:(struct _NSRange)arg2 activateIDE:(BOOL)arg3;
+ (void)editFile:(id)arg1 andDisplayLineRange:(struct _NSRange)arg2 activateIDE:(BOOL)arg3;
+ (id)filesOfType:(id)arg1 inProject:(id)arg2;
+ (id)filesOfType:(id)arg1 inTarget:(id)arg2 ofProject:(id)arg3;
+ (id)filesOfTypes:(id)arg1 inProject:(id)arg2;
+ (id)filesOfTypes:(id)arg1 inTarget:(id)arg2 ofProject:(id)arg3;
+ (id)fullProductNameOfTarget:(id)arg1 inProject:(id)arg2;
+ (BOOL)isFileEdited:(id)arg1;
+ (id)nameOfProject:(id)arg1;
+ (id)nameOfTarget:(id)arg1 inProject:(id)arg2;
+ (id)openProjects;
+ (id)openProjectsAppropriateForFile:(id)arg1;
+ (id)openProjectsContainingFile:(id)arg1;
+ (id)pathForFileWithName:(id)arg1 inProject:(id)arg2;
+ (id)pathOfProject:(id)arg1;
+ (id)productSettingsForTarget:(id)arg1 ofProject:(id)arg2;
+ (void)removeFileObserver:(id)arg1 forFile:(id)arg2;
+ (void)removeOpenProjectObserver:(id)arg1;
+ (void)removeProductSettingForKey:(id)arg1 inTarget:(id)arg2 ofProject:(id)arg3;
+ (void)removeProjectFileObserver:(id)arg1 forFilesOfTypes:(id)arg2 inProject:(id)arg3;
+ (void)removeTargetFileObserver:(id)arg1 forFilesOfTypes:(id)arg2 inTarget:(id)arg3 ofProject:(id)arg4;
+ (void)removeTargetObserver:(id)arg1 forProject:(id)arg2;
+ (void)revertFile:(id)arg1 activateIDE:(BOOL)arg2;
+ (void)revertFileIfNeeded:(id)arg1 activateIDE:(BOOL)arg2;
+ (void)saveFile:(id)arg1;
+ (void)setProductSetting:(id)arg1 forKey:(id)arg2 inTarget:(id)arg3 ofProject:(id)arg4;
+ (id)targetsInProject:(id)arg1;
+ (id)targetsInProject:(id)arg1 containingFile:(id)arg2;
- (void)_sendFileNotificationWithName:(id)arg1 toTargetObserversForFile:(id)arg2 project:(id)arg3 target:(id)arg4;
- (void)_sendProjectNotificationName:(id)arg1 forProject:(id)arg2;
- (void)_sendTargetNotificationWithName:(id)arg1 toTargetObserversForProject:(id)arg2 target:(id)arg3;
- (void)file:(bycopy id)arg1 wasAddedToProject:(bycopy id)arg2;
- (void)file:(bycopy id)arg1 wasAddedToTarget:(bycopy id)arg2 inProject:(bycopy id)arg3;
- (void)file:(bycopy id)arg1 willBeRemovedFromProject:(bycopy id)arg2;
- (void)file:(bycopy id)arg1 willBeRemovedFromTarget:(bycopy id)arg2 inProject:(bycopy id)arg3;
- (void)projectDidOpen:(bycopy id)arg1;
- (void)projectWillClose:(bycopy id)arg1;
- (void)target:(bycopy id)arg1 didBecomeActiveInProject:(bycopy id)arg2;
- (void)target:(bycopy id)arg1 wasAddedToProject:(bycopy id)arg2;
- (void)target:(bycopy id)arg1 willBeRemovedFromProject:(bycopy id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEDebuggerMenuDelegate : NSObject
{
}

+ (id)_PIDsAsNumbersOfProcessesBeingDebuggedInXcode;
+ (id)_activeWorkspace;
+ (void)_addMenuGroup:(id)arg1 withMenuItems:(id)arg2 toMenu:(id)arg3;
+ (id)_createHeaderMenuItem:(id)arg1;
+ (id)_createProcessMenuItem:(id)arg1 pidsAsNumbersBeingDebuggedByXcode:(id)arg2;
+ (id)_currentDevice;
+ (id)_likelyAttachToTargetNames;
- (void)_addProcessInformations:(id)arg1 toMenu:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;

@end


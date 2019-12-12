//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSString;

@interface IDEDestinationMenuDelegate : NSObject <NSMenuDelegate>
{
}

+ (void)_addSimulators:(id)arg1;
+ (void)_openMoreSimulators:(id)arg1;
+ (BOOL)addAddSimulatorsIfNecessaryToMenu:(id)arg1 withRunContextManager:(id)arg2;
+ (void)addDownloadMoreSimulatorsIfNecessaryToMenu:(id)arg1 withRunContextManager:(id)arg2 includesSeparator:(BOOL)arg3;
+ (void)didUpdateRunDestinationMenu:(id)arg1 withRunContextManager:(id)arg2;
+ (void)setSelectedNavigable:(id)arg1 withRunContextManager:(id)arg2;
+ (BOOL)simulatorsFromSimulatorPlatform:(id)arg1 arePresentInRunDestinations:(id)arg2;
- (id)_currentRunContextManager;
- (id)_destinationMenuItemsWithRunContextManager:(id)arg1 withSchemeNavigable:(id)arg2;
- (id)_menuItemsForRunDestinationNavigable:(id)arg1;
- (void)_setSelectedNavigable:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

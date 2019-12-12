//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigationHUDBorderedGradientLayer.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDENavigationHUDSelectableLayer-Protocol.h>

@class CAGradientLayer, CALayer, DVTStackBacktrace, IDENavigationHUDSelection, IDENavigationHUDTabLayer, IDEWorkspaceWindowController, NSString;

@interface IDENavigationHUDTabLayoutLayer : IDENavigationHUDBorderedGradientLayer <IDENavigationHUDSelectableLayer, DVTInvalidation>
{
    IDEWorkspaceWindowController *_workspaceWindowController;
    IDENavigationHUDTabLayer *_workspaceTabLayer;
    unsigned long long _state;
    CAGradientLayer *_overlayLayer;
    CALayer *_imageLayer;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (id)init;
- (id)initWithWorkspaceWindowController:(id)arg1 workspaceTabLayer:(id)arg2 image:(id)arg3;
- (void)layoutSublayers;
- (void)primitiveInvalidate;
@property(readonly) IDENavigationHUDSelection *representativeSelection;
@property(readonly) BOOL representativeSelectionIsFinalForSingleMouseUp;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)workspaceTabController;
@property(readonly) IDENavigationHUDTabLayer *workspaceTabLayer; // @synthesize workspaceTabLayer=_workspaceTabLayer;
@property(readonly) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end


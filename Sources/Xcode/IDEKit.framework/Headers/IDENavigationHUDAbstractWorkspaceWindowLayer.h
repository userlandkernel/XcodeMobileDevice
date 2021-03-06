//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAGradientLayer.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDENavigationHUDSelectableLayer-Protocol.h>
#import <IDEKit/IDENavigationHUDWindowLevelNavigableLayer-Protocol.h>

@class DVTStackBacktrace, IDENavigationHUDController, IDENavigationHUDSelection, NSString;

@interface IDENavigationHUDAbstractWorkspaceWindowLayer : CAGradientLayer <IDENavigationHUDSelectableLayer, IDENavigationHUDWindowLevelNavigableLayer, DVTInvalidation>
{
    IDENavigationHUDController *_navigationHUDController;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithNavigationHUDController:(id)arg1;
@property(readonly) IDENavigationHUDController *navigationHUDController; // @synthesize navigationHUDController=_navigationHUDController;
- (void)primitiveInvalidate;
@property(readonly) IDENavigationHUDSelection *representativeSelection;
@property(readonly) BOOL representativeSelectionIsFinalForSingleMouseUp;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingLeftOneTab;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingRightOneTab;
- (id)selectionForNavigatingUp;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end


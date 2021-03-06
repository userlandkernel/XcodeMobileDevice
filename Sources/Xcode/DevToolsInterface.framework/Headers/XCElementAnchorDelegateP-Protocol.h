//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSEvent;

@protocol XCElementAnchorDelegateP
- (BOOL)anchor:(struct NSObject *)arg1 confirmRepresentedObject:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 didChangeRepresentedObject:(id)arg2 previousObject:(id)arg3;
- (void)anchorAddToView:(struct NSObject *)arg1;
- (BOOL)anchorCanBeClosed:(struct NSObject *)arg1;
- (void)anchorClearView:(struct NSObject *)arg1;
- (void)anchorClose:(struct NSObject *)arg1;
- (BOOL)anchorCommitEditing:(struct NSObject *)arg1;
- (void)anchorDidChangeContentGroupDisplayed:(struct NSObject *)arg1;
- (void)anchorDiscardEditing:(struct NSObject *)arg1;
- (BOOL)anchorPrepareToClose:(struct NSObject *)arg1;
- (void)anchorRemoveFromView:(struct NSObject *)arg1;

@optional
- (BOOL)anchor:(struct NSObject *)arg1 handleMouseDownOnElement:(struct NSObject *)arg2 event:(NSEvent *)arg3;
- (BOOL)anchor:(struct NSObject *)arg1 handleSelectionOf:(struct NSObject *)arg2;
- (void)anchor:(struct NSObject *)arg1 initialRepresentedObject:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 objectDidBeginEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (void)anchor:(struct NSObject *)arg1 objectDidEndEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (BOOL)anchorIsEditing:(struct NSObject *)arg1;
- (BOOL)anchorIsInEditingState:(struct NSObject *)arg1;
- (void)anchorObjectDidChange:(struct NSObject *)arg1;
- (void)anchorSelectionStateDidChange:(struct NSObject *)arg1;
@end


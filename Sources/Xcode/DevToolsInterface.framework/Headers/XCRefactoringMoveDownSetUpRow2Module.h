//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCRefactoringTransformationSetUpRow2Module.h>

@class NSArray, NSMatrix, NSMutableIndexSet, NSScrollView, XCRefactoringColoredView;

@interface XCRefactoringMoveDownSetUpRow2Module : XCRefactoringTransformationSetUpRow2Module
{
    NSScrollView *scrollView;
    XCRefactoringColoredView *checkboxView;
    NSMatrix *checkboxMatrix;
    NSArray *_subclassNames;
    NSMutableIndexSet *_chosenSubclassIndexes;
}

- (void)addToUserInput:(id)arg1;
- (void)awakeFromNib;
- (void)checkboxMatrixChanged:(id)arg1;
- (void)dealloc;
- (id)localizedMessage;
- (void)setChosenSubclassIndexes:(id)arg1;
- (void)setSubclassNames:(id)arg1;

@end

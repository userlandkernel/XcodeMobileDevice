//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVQueryOptionsController, DVScopeBarController, NSButton;

@interface DVScopeBarMultiSelectionViewFactory : NSObject
{
    NSButton *doneButton;
    DVQueryOptionsController *queryController;
    DVScopeBarController *scopeBarController;
}

- (void)addButtonCellForDocSet:(id)arg1 toPublisherMatrix:(id)arg2 atRow:(unsigned long long)arg3;
- (void)addButtonCellForLanguage:(id)arg1 toLanguagesMatrix:(id)arg2 atRow:(unsigned long long)arg3;
- (id)boxForAllPublishers;
- (id)boxForPublisher:(id)arg1;
@property(readonly, nonatomic) DVQueryOptionsController *controller; // @synthesize controller=queryController;
- (id)docSetSearchOptionsMenu;
- (id)docSetSearchOptionsView;
- (id)doneButton;
- (id)emptyCheckBoxMatrix;
- (id)labelForPublisher:(id)arg1;
- (id)languagesLabel;
- (id)languagesSearchOptionsMenu;
- (id)languagesSearchOptionsView;
@property(readonly, nonatomic) DVScopeBarController *scopeBarController; // @synthesize scopeBarController;

@end


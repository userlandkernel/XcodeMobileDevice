//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEEditorHistoryItem, NSArray;

@interface IDEEditorHistoryStack : NSObject
{
    NSArray *_previousHistoryItems;
    NSArray *_nextHistoryItems;
    IDEEditorHistoryItem *currentHistoryItem;
}

- (void).cxx_destruct;
@property(readonly) IDEEditorHistoryItem *currentEditorHistoryItem; // @synthesize currentEditorHistoryItem=currentHistoryItem;
- (id)description;
- (id)initWithCurrentEditorHistoryItem:(id)arg1;
- (id)initWithCurrentEditorHistoryItem:(id)arg1 previousHistoryItems:(id)arg2 nextHistoryItems:(id)arg3;
@property(readonly) NSArray *nextHistoryItems; // @synthesize nextHistoryItems=_nextHistoryItems;
@property(readonly) NSArray *previousHistoryItems; // @synthesize previousHistoryItems=_previousHistoryItems;

@end


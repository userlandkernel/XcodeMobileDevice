//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTSearchFieldTextEditor.h>

@interface DVTFindPatternFieldEditor : DVTSearchFieldTextEditor
{
}

+ (id)findPatternFieldEditorForWindow:(id)arg1;
- (id)acceptableDragTypes;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (id)readablePasteboardTypes;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setUsesFontPanel:(BOOL)arg1;
- (BOOL)usesFontPanel;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;

@end


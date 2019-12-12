//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogSectionRecorder.h>

@class IDEActivityLogSection, NSMapTable, NSMutableArray;

@interface IDECommandLineBuildLogRecorder : IDEActivityLogSectionRecorder
{
    IDEActivityLogSection *_activeTargetSection;
    NSMutableArray *_activeSections;
    NSMapTable *_bufferedTextPerLogSection;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_cleanupClosedSection:(id)arg1 inSupersection:(id)arg2;
- (void)_emitSection:(id)arg1 inSupersection:(id)arg2;
- (void)_emitString:(id)arg1 withNewlineIfNeeded:(BOOL)arg2 verbosityLevel:(long long)arg3;
- (BOOL)_findNewEffectiveSectionFromSubsectionsOfSection:(id)arg1;
- (BOOL)_findNewEffectiveSectionFromSubsectionsOfSection:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)_noteLogSection:(id)arg1 didAddSubsection:(id)arg2;
@property(retain) NSMutableArray *activeSections; // @synthesize activeSections=_activeSections;
@property(retain) NSMapTable *bufferedTextPerLogSection; // @synthesize bufferedTextPerLogSection=_bufferedTextPerLogSection;
@property(readonly) IDEActivityLogSection *effectiveSection;
- (id)initWithLogSection:(id)arg1;
- (void)noteDescendantLogSection:(id)arg1 didAddSubsection:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAppendText:(id)arg2;
- (void)noteDescendantLogSectionDidClose:(id)arg1 inSupersection:(id)arg2;
- (id)section;

@end


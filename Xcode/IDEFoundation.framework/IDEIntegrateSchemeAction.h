//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeAction.h>

@interface IDEIntegrateSchemeAction : IDESchemeAction
{
    BOOL _performsAnalyze;
    BOOL _performsTest;
    BOOL _performsArchive;
}

+ (id)keyPathsForValuesAffectingDoesNonActionWork;
+ (id)keyPathsForValuesAffectingHasDefaultValues;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (BOOL)shouldAllowCustomPhaseActions;
- (void)_commonInit;
- (BOOL)doesNonActionWork;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (BOOL)hasDefaultValues;
- (id)init;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)mutablePostPhaseExecutionActions;
- (id)mutablePrePhaseExecutionActions;
- (id)name;
@property(nonatomic) BOOL performsAnalyze; // @synthesize performsAnalyze=_performsAnalyze;
@property(nonatomic) BOOL performsArchive; // @synthesize performsArchive=_performsArchive;
@property(nonatomic) BOOL performsTest; // @synthesize performsTest=_performsTest;
- (id)postPhaseExecutionActions;
- (id)prePhaseExecutionActions;
- (void)setPerformsAnalyzeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPerformsArchiveFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPerformsTestFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (id)subtitle;

@end


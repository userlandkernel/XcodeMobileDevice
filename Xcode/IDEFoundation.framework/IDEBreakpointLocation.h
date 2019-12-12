//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpoint.h>

@class DVTTextDocumentLocation, NSString;

@interface IDEBreakpointLocation : IDEBreakpoint
{
    IDEBreakpoint *_parentBreakpoint;
    NSString *_urlString;
    NSString *_timestampString;
    long long _startingColumnNumber;
    long long _endingColumnNumber;
    long long _startingLineNumber;
    long long _endingLineNumber;
    NSString *_characterRangeString;
    BOOL _usesParentBreakpointCondition;
    DVTTextDocumentLocation *_documentLocation;
    NSString *_symbolName;
    NSString *_moduleName;
    unsigned long long _address;
    unsigned long long _offsetFromSymbolStart;
}

+ (id)propertiesAffectingPersistenceState;
+ (BOOL)supportsInvalidationPrevention;
- (void).cxx_destruct;
- (void)_dvt_IDEBreakpointLocationCommonInit;
- (BOOL)_isTextDocumentLocationEqual:(id)arg1;
@property(readonly) unsigned long long address; // @synthesize address=_address;
- (id)bucket;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayName;
@property(readonly) DVTTextDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithDocumentTextLocation:(id)arg1 symbolName:(id)arg2 moduleName:(id)arg3 address:(unsigned long long)arg4;
- (BOOL)isBreakpointLocationTheSameDisregardingAddress:(id)arg1;
- (id)locations;
@property(readonly) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (id)mutableLocations;
@property unsigned long long offsetFromSymbolStart; // @synthesize offsetFromSymbolStart=_offsetFromSymbolStart;
@property(retain) IDEBreakpoint *parentBreakpoint;
- (void)primitiveInvalidate;
@property BOOL usesParentBreakpointCondition; // @synthesize usesParentBreakpointCondition=_usesParentBreakpointCondition;
- (void)setUsesParentBreakpointConditionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) DVTTextDocumentLocation *zeroBasedDocumentLocation;

@end


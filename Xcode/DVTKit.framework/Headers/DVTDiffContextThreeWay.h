//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDiffContext.h>

@class DVTDiffDataSource, DVTObservingToken, NSMutableArray, NSNumber, NSOperationQueue;

@interface DVTDiffContextThreeWay : DVTDiffContext
{
    DVTDiffDataSource *_ancestorDataSource;
    DVTObservingToken *_ancestorDataSourceObserver;
}

- (void).cxx_destruct;
- (void)_buildDiffDescriptors;
- (id)_diffContextForComparing:(id)arg1 with:(id)arg2;
- (id)_diffDescriptorsByAddingUnmodified:(id)arg1;
- (BOOL)_setAncestorDataSource:(id)arg1;
- (id)ancestorDataSource;
- (id)commonDescriptorIndexes;
- (id)description;
- (id)init;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 ancestorDataSource:(id)arg3;
- (id)modifiedDescriptorIndexes;
- (void)primitiveInvalidate;
- (void)setAncestorDataSource:(id)arg1;
- (void)setIgnoresCase:(BOOL)arg1;
- (void)setIgnoresCommon:(BOOL)arg1;
- (void)setIgnoresLeadingSpaces:(BOOL)arg1;
- (void)setIgnoresLineEnds:(BOOL)arg1;
- (void)setIgnoresSpacesInRuns:(BOOL)arg1;
- (void)setIgnoresTrailingSpaces:(BOOL)arg1;
- (id)tmpModifiedDescriptorIndexes;

// Remaining properties
@property(retain) NSOperationQueue *diffQueue; // @dynamic diffQueue;
@property(readonly, copy) NSMutableArray *mutableDiffDescriptors; // @dynamic mutableDiffDescriptors;
@property(retain) NSNumber *timestamp; // @dynamic timestamp;
@property(retain) NSMutableArray *tmpDiffDescriptors; // @dynamic tmpDiffDescriptors;

@end


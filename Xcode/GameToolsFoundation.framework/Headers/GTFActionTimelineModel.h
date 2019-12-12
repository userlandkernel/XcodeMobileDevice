//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameToolsFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <GameToolsFoundation/NSCoding-Protocol.h>
#import <GameToolsFoundation/NSCopying-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, GTFActionLibrary, GTFActionLibraryTargetThumbnail, IDEFileReference, NSArray, NSImage, NSMutableArray, NSString;
@protocol GTFActionTimelineModelDelegate, NSCopying;

@interface GTFActionTimelineModel : NSObject <NSCoding, NSCopying, IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_actions;
    NSMutableArray *_tracks;
    NSMutableArray *_groups;
    int _nextGroupId;
    BOOL _allowActionDisplacement;
    BOOL _allowStickyDurationChanges;
    BOOL _allowReturnToNotedStartTime;
    double _totalDuration;
    double _durationScale;
    double _startTime;
    id <NSCopying> _targetID;
    GTFActionLibraryTargetThumbnail *_targetThumbnail;
    id <GTFActionTimelineModelDelegate> _delegate;
    GTFActionLibrary *_ownerLibrary;
    long long _numTracks;
    double _previewTime;
    NSString *_keyName;
    NSString *_targetName;
}

+ (id)keyPathsForValuesAffectingNav_children;
- (void).cxx_destruct;
- (void)_addInitialAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (void)addAction:(id)arg1;
- (void)addActionToClosestOpenSlot:(id)arg1 inTrack:(int)arg2 atTime:(double)arg3 enableAlignment:(BOOL)arg4 canMoveBeforeStartTime:(BOOL)arg5;
- (BOOL)adjustNumberOfTracks;
@property(nonatomic) BOOL allowActionDisplacement; // @synthesize allowActionDisplacement=_allowActionDisplacement;
@property(nonatomic) BOOL allowReturnToNotedStartTime; // @synthesize allowReturnToNotedStartTime=_allowReturnToNotedStartTime;
@property(nonatomic) BOOL allowStickyDurationChanges; // @synthesize allowStickyDurationChanges=_allowStickyDurationChanges;
- (void)beginChange;
- (void)calculateStartTime;
- (void)calculateTotalDuration;
- (void)calculateTotalDurationAndStartTime;
- (double)calculateTotalDurationIncludingInfiniteLoops:(BOOL)arg1;
- (BOOL)canMoveAction:(id)arg1 toTrack:(int)arg2 atTime:(double)arg3;
- (void)checkForOverlapWithLoop:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createGroupReferenceFromActions:(id)arg1;
- (id)createLoopFromActions:(id)arg1 withLoopCount:(int)arg2;
- (id)createLoopWithLoopCount:(int)arg1;
@property(nonatomic) __weak id <GTFActionTimelineModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double durationScale; // @synthesize durationScale=_durationScale;
- (void)encodeWithCoder:(id)arg1;
- (void)endChange;
- (void)forceMoveAction:(id)arg1 toTrack:(int)arg2;
- (double)getClosestStartOrEndTimeInTrack:(int)arg1 forTime:(double)arg2 withDuration:(double)arg3;
- (double)getDurationExcludingInfiniteLoops;
- (long long)getFirstEmptyTrackIndex;
- (id)getGroupForTrack:(int)arg1;
- (int)getGroupIndex:(id)arg1;
- (id)getGroupThatContainsAction:(id)arg1;
- (id)getGroupWithId:(int)arg1;
- (id)getGroupWithIndex:(int)arg1;
- (id)getPreviewSKActionWithStartTime:(double)arg1;
- (id)getSCNAction;
- (id)getSKAction;
- (id)getSKActionForPreview:(BOOL)arg1 withPreviewStartTime:(double)arg2 activeAnimationFound:(char *)arg3 effectiveDuration:(double)arg4 ignoreScrubSensitiveActions:(BOOL)arg5;
- (void)getSmallestTimeMarginForActions:(id)arg1 ignoreEachOther:(BOOL)arg2 outLeftMargin:(double *)arg3 outRightMargin:(double *)arg4;
- (void)getSmallestTimeMarginForGroup:(int)arg1 outLeftMargin:(double *)arg2 outRightMargin:(double *)arg3;
- (double)getTrackEndTime:(int)arg1;
@property(readonly, nonatomic) NSArray *groups;
@property(readonly, nonatomic) BOOL hasActions;
- (id)ideModelObjectTypeIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertNewTrackAt:(long long)arg1;
- (BOOL)isInfiniteLoopInTrack:(int)arg1;
@property(retain, nonatomic) NSString *keyName; // @synthesize keyName=_keyName;
- (id)lookupImageAssetPathForAssetName:(id)arg1;
- (BOOL)moveAction:(id)arg1 toTrack:(int)arg2 atTime:(double)arg3 enableAlignment:(BOOL)arg4;
- (double)moveGroup:(id)arg1 withTimeOffset:(double)arg2;
@property(readonly, nonatomic) NSArray *nav_children;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_name;
- (void)noteCurrentStartTimesInTrack:(int)arg1;
@property(nonatomic) long long numTracks; // @synthesize numTracks=_numTracks;
- (void)offsetTime:(double)arg1 forActions:(id)arg2;
- (void)offsetTrack:(int)arg1 forActions:(id)arg2;
@property(nonatomic) __weak GTFActionLibrary *ownerLibrary; // @synthesize ownerLibrary=_ownerLibrary;
- (void)pasteAction:(id)arg1;
- (void)pasteAction:(id)arg1 adjustTracksAfterPaste:(BOOL)arg2;
- (void)pasteActions:(id)arg1;
- (void)pasteActions:(id)arg1 insertRequiredTracks:(BOOL)arg2;
- (void)pasteActions:(id)arg1 insertRequiredTracks:(BOOL)arg2 adjustTracksAfterPaste:(BOOL)arg3;
@property(nonatomic) double previewTime; // @synthesize previewTime=_previewTime;
- (BOOL)removeAction:(id)arg1;
- (void)removeActionFromTrack:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)requestViewUpdate;
- (void)scaleTimelineDuration:(double)arg1;
- (void)setActionStartTime:(id)arg1 inTrack:(int)arg2 atTime:(double)arg3 enableSnap:(BOOL)arg4;
- (BOOL)setDurationForAction:(id)arg1 newDuration:(double)arg2 enableSnapping:(BOOL)arg3;
- (void)setDurationForActionWithoutDisplacement:(id)arg1 newDuration:(double)arg2;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)setTarget:(id)arg1;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) id <NSCopying> targetID; // @synthesize targetID=_targetID;
@property(readonly, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(readonly, nonatomic) GTFActionLibraryTargetThumbnail *targetThumbnail; // @synthesize targetThumbnail=_targetThumbnail;
@property(readonly, nonatomic) NSArray *tracks;
- (void)updateEditorWithEndTime;
- (BOOL)verifyCanMoveActions:(id)arg1 byTrackOffset:(int)arg2 ignoreEachOther:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

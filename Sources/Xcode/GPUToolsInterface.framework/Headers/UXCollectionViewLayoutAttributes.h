//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsInterface/NSCopying-Protocol.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface UXCollectionViewLayoutAttributes : NSObject <NSCopying>
{
    unsigned long long _hash;
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    struct CGRect _frame;
    struct CGPoint _center;
    struct CGSize _size;
    double _alpha;
    long long _zIndex;
    BOOL _isFloating;
    struct CGRect _floatingFrame;
    BOOL _isFloatingPinned;
    NSIndexPath *_indexPath;
    NSString *_representedElementKind;
    NSString *_isCloneString;
    struct {
        unsigned int isCellKind:1;
        unsigned int isDecorationView:1;
        unsigned int isHidden:1;
        unsigned int isClone:1;
    } _layoutFlags;
    BOOL _isPushing;
}

+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
- (id)_elementKind;
- (BOOL)_isCell;
- (BOOL)_isClone;
- (BOOL)_isDecorationView;
- (BOOL)_isEquivalentTo:(id)arg1;
- (BOOL)_isSupplementaryView;
- (BOOL)_isTransitionVisibleTo:(id)arg1;
- (id)_reuseIdentifier;
- (void)_setElementKind:(id)arg1;
- (void)_setIndexPath:(id)arg1;
- (void)_setIsClone:(BOOL)arg1;
- (void)_setReuseIdentifier:(id)arg1;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
@property(nonatomic) struct CGRect floatingFrame; // @synthesize floatingFrame=_floatingFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (unsigned long long)hash;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)init;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) BOOL isFloating; // @synthesize isFloating=_isFloating;
@property(nonatomic) BOOL isFloatingPinned; // @synthesize isFloatingPinned=_isFloatingPinned;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(nonatomic) BOOL isPushing; // @synthesize isPushing=_isPushing;
@property(readonly, nonatomic) unsigned long long representedElementCategory;
@property(readonly, nonatomic) NSString *representedElementKind; // @dynamic representedElementKind;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;

@end


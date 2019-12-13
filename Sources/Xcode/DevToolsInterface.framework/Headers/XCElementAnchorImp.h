//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementImp.h>

#import <DevToolsInterface/XCElementAnchorP-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol XCElementAnchorDelegateP, XCElementP;

@interface XCElementAnchorImp : XCElementImp <XCElementAnchorP>
{
    NSObject *_representedObject;
    struct NSObject *_anchorDelegate;
    NSMutableDictionary *_configuration;
    XCElementImp *_contentGroup;
    NSMutableArray *_activities;
    struct {
        unsigned int contentGroupDisplayed:1;
        unsigned int _reserved:31;
    } _aFlags;
}

- (void)_releaseValuesAnchor;
@property(readonly, nonatomic) NSMutableArray *activities; // @dynamic activities;
- (void)addActivity:(id)arg1;
- (void)addToView;
@property(retain, nonatomic) NSObject<XCElementAnchorDelegateP> *anchorDelegate; // @synthesize anchorDelegate=_anchorDelegate;
- (BOOL)canBeClosed;
- (void)clearView;
- (void)close;
- (BOOL)commitEditing;
- (BOOL)commitEditingChildren;
@property(readonly, nonatomic) NSMutableDictionary *configuration; // @dynamic configuration;
- (BOOL)configurationIsInstantiated;
- (void)configureAndSetObjectActivity:(id)arg1;
- (void)configureAndSetObjectDidChangeActivity:(id)arg1;
- (void)configureAndSetToggleActivity:(id)arg1;
@property(retain, nonatomic) NSObject<XCElementP> *contentGroup; // @synthesize contentGroup=_contentGroup;
@property(nonatomic) BOOL contentGroupDisplayed;
- (void)dealloc;
- (void)discardEditing;
- (void)discardEditingChildren;
- (BOOL)handleMouseDownOnElement:(struct NSObject *)arg1 event:(id)arg2;
- (BOOL)handleSelectionOf:(struct NSObject *)arg1;
- (id)initInMain:(id)arg1;
- (void)initialRepresentedObject:(id)arg1;
- (BOOL)isAnchor;
- (BOOL)isEditing;
- (BOOL)isEditingChildren;
- (BOOL)isInEditingState;
- (BOOL)isInEditingStateChildren;
- (void)objectDidBeginEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)objectDidChange;
- (void)objectDidEndEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)observeObjectSignal:(id)arg1;
- (void)observeObjectSource:(id)arg1 keyPath:(id)arg2;
- (void)observeToggleSignal:(id)arg1;
- (void)observeToggleSource:(id)arg1 keyPath:(id)arg2;
- (BOOL)prepareToClose;
- (void)receiveXCESignal:(id)arg1;
- (void)removeFromView;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void)setInitialContentGroupDisplayed:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

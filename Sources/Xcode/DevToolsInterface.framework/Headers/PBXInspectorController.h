//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface PBXInspectorController : NSObject
{
    NSMapTable *_windowToInspectorMap;
}

+ (id)sharedInspectorController;
- (id)_infoInspectorPanels;
- (id)_inspectedItems;
- (id)_inspectorPanels;
- (id)_inspectorPanels:(id)arg1 inspectingItems:(id)arg2;
- (id)_inspectorPanelsOfClass:(Class)arg1;
- (void)_inspectorWindowClosing:(id)arg1;
- (void)addInspector:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (BOOL)floatingInspectorWindowIsVisible;
- (void)getInfo:(id)arg1;
- (id)getInfoForItems:(id)arg1;
- (id)getInfoForItems:(id)arg1 switchingToTabNamed:(id)arg2;
- (id)getInfoForSelection:(id)arg1;
- (id)getInfoForSelection:(id)arg1 switchingToTabNamed:(id)arg2;
- (id)init;
- (id)inspectors;
- (id)newInfoInspector:(id)arg1;
- (id)newInfoInspectorForSelection:(id)arg1;
- (id)newInspector:(id)arg1;
- (BOOL)projectCanClose:(id)arg1;
- (void)projectWillClose:(id)arg1;
- (void)showInspector:(id)arg1;

@end


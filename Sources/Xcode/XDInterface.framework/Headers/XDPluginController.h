//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, XDModelReference, XDPlugin;
@protocol XDxdesignController;

@interface XDPluginController : NSObject
{
    XDPlugin *_plugin;
    XDPluginController *_mainController;
    NSMutableArray *_subControllers;
    XDModelReference *_model;
    id <XDxdesignController> _xdesignController;
}

- (id)_msgViewForMethodName:(id)arg1;
- (void)addSubController:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)displayNameForView;
- (id)editorControllerForElement:(id)arg1;
- (BOOL)hasSameObjectsForInspectionsAs:(id)arg1;
- (id)initWithPlugin:(id)arg1;
- (id)inspectorControllerForElement:(id)arg1;
- (id)inspectorControllerForSelectedElement;
- (id)inspectorLabelForPane:(long long)arg1;
- (id)inspectorViewForPane:(long long)arg1;
- (BOOL)loadModelFromFile:(id)arg1;
- (id)mainController;
- (id)mainView;
- (id)model;
- (void)newModel:(id)arg1;
- (id)plugin;
- (void)removeSubController:(id)arg1;
- (BOOL)saveModelToFile:(id)arg1;
- (void)setMainController:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setXdesignController:(id)arg1;
- (id)view;
- (id)xdesignController;

@end


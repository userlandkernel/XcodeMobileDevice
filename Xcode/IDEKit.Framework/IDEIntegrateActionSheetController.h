//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEIntegrateSchemeAction, IDEScheme, IDEWorkspace, NSBox;

@interface IDEIntegrateActionSheetController : IDEViewController
{
    IDEScheme *_scheme;
    IDEWorkspace *_workspace;
    IDEIntegrateSchemeAction *_schemeAction;
    NSBox *_box;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBox *box; // @synthesize box=_box;
- (id)dvtExtraBindings;
- (void)loadView;
- (void)primitiveInvalidate;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) IDEIntegrateSchemeAction *schemeAction; // @synthesize schemeAction=_schemeAction;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (void)updateBoundIDEWorkspaceBinding;

@end


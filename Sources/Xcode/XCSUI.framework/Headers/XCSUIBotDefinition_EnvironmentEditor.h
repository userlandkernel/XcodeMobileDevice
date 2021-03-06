//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>
#import <XCSUI/NSTextFieldDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTTableView, NSMutableArray, NSMutableDictionary, NSString, XCSUIBotDefinitionContext;

@interface XCSUIBotDefinition_EnvironmentEditor : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate>
{
    BOOL _preventGoFowardOrFinish;
    BOOL _viewIsInstalled;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableDictionary *_environmentVariables;
    NSMutableArray *_environmentVariablesArray;
    DVTTableView *_environmentVariablesTableView;
    DVTGradientImageButton *_addEnvironmentVariableButton;
    DVTGradientImageButton *_removeEnvironmentVariableButton;
    DVTBorderedView *_tableBorderedView;
}

- (void).cxx_destruct;
- (void)addEnvironmentVariable:(id)arg1;
@property __weak DVTGradientImageButton *addEnvironmentVariableButton; // @synthesize addEnvironmentVariableButton=_addEnvironmentVariableButton;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (BOOL)canGoForward;
- (void)commitChanges;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)didEndEditingEnvVarName:(id)arg1;
- (void)didEndEditingEnvVarValue:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(retain, nonatomic) NSMutableArray *environmentVariablesArray; // @synthesize environmentVariablesArray=_environmentVariablesArray;
@property __weak DVTTableView *environmentVariablesTableView; // @synthesize environmentVariablesTableView=_environmentVariablesTableView;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(nonatomic) BOOL preventGoFowardOrFinish; // @synthesize preventGoFowardOrFinish=_preventGoFowardOrFinish;
- (void)removeEnvironmentVariable:(id)arg1;
@property __weak DVTGradientImageButton *removeEnvironmentVariableButton; // @synthesize removeEnvironmentVariableButton=_removeEnvironmentVariableButton;
@property __weak DVTBorderedView *tableBorderedView; // @synthesize tableBorderedView=_tableBorderedView;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


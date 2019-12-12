//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <IDEKit/IDESourceControlLogFilesChangedViewDelegate-Protocol.h>
#import <IDEKit/IDESourceControlNameTokenViewDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTBindingToken, DVTSourceControlAuthor, DVTSourceControlLogItem, DVTSourceControlWorkingCopy, DVTStackView_ML, IDESourceControlLogFilesChangedView, IDESourceControlLogViewController, IDESourceControlNameTokenView, NSDictionary, NSString, NSTextField;

@interface IDESourceControlLogItemView : NSTableCellView <NSPopoverDelegate, IDESourceControlNameTokenViewDelegate, IDESourceControlLogFilesChangedViewDelegate>
{
    DVTSourceControlAuthor *_author;
    DVTSourceControlLogItem *_logItem;
    DVTBindingToken *_imageBindingToken;
    DVTBindingToken *_nameBindingToken;
    DVTStackView_ML *_filesChangedStackView;
    long long _trackingTag;
    NSDictionary *_messageTextAttrs;
    IDESourceControlLogViewController *_owningController;
    NSTextField *_dateField;
    NSTextField *_revisionField;
    IDESourceControlLogFilesChangedView *_filesChangedButton;
    NSTextField *_messageField;
    IDESourceControlNameTokenView *_nameTokenView;
    NSTextField *_mergeField;
    DVTSourceControlWorkingCopy *_workingCopy;
}

+ (double)defaultMaxSize;
+ (id)messageTextAttributes;
+ (id)nibName;
+ (id)showChatButtonTransformer;
+ (double)textHorizontalMargins;
- (void).cxx_destruct;
- (void)_updateFrames;
@property(retain) DVTSourceControlAuthor *author;
- (void)awakeFromNib;
@property(retain) NSTextField *dateField; // @synthesize dateField=_dateField;
- (void)dealloc;
- (void)email:(id)arg1;
@property(retain) IDESourceControlLogFilesChangedView *filesChangedButton; // @synthesize filesChangedButton=_filesChangedButton;
- (id)initWithFrame:(struct CGRect)arg1;
@property __weak DVTSourceControlLogItem *logItem;
- (id)menuForNameToken:(id)arg1;
@property __weak NSTextField *mergeField; // @synthesize mergeField=_mergeField;
@property(retain) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(retain) IDESourceControlNameTokenView *nameTokenView; // @synthesize nameTokenView=_nameTokenView;
@property(nonatomic) __weak IDESourceControlLogViewController *owningController; // @synthesize owningController=_owningController;
@property(retain) NSTextField *revisionField; // @synthesize revisionField=_revisionField;
- (void)setDate:(id)arg1;
- (void)setDescriptionWithDate:(id)arg1 revision:(id)arg2 workingCopyName:(id)arg3;
- (void)setMessage:(id)arg1;
@property __weak DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
- (BOOL)shouldShowToken;
- (void)teardown;
- (void)updateTheme;
- (void)viewChanges:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


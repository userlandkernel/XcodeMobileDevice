//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEStructureEditingAssistantContext.h>

@class DVTObservingToken, IDEGroup, NSArray, NSString;

@interface IDEAddContainerItemsAssistantContext : IDEStructureEditingAssistantContext
{
    DVTObservingToken *_targetGroupObservingToken;
    BOOL _createGroupsForFolders;
    BOOL _copyFilesToTargetGroup;
    BOOL _stripOutBuildProductContainerItems;
    BOOL _shouldHideCopyFilesToTargetGroupSwitchButton;
    IDEGroup *_targetGroup;
    NSArray *_containerItems;
    NSString *_buildToolPath;
    NSString *_buildArgumentsString;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _prepareBlock;
}

+ (id)_containerAddingItemsAssistantExtensionForContainer:(id)arg1;
+ (id)contextWithTargetGroup:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_addItemsFromDraggingInfo:(id)arg1;
- (void)_configureForOnlyDraggingProjects;
@property(readonly) NSString *actualAssistantIdentifier;
- (id)assistantIdentifier;
@property(copy) NSString *buildArgumentsString; // @synthesize buildArgumentsString=_buildArgumentsString;
@property(copy) NSString *buildToolPath; // @synthesize buildToolPath=_buildToolPath;
@property(copy) NSArray *containerItems; // @synthesize containerItems=_containerItems;
@property BOOL copyFilesToTargetGroup;
@property BOOL createGroupsForFolders;
- (void)dealloc;
- (id)description;
- (id)init;
@property(readonly) BOOL isTargetingFolder;
@property(readonly) BOOL isTargetingPlayground;
@property(copy) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property BOOL shouldHideCopyFilesToTargetGroupSwitchButton; // @synthesize shouldHideCopyFilesToTargetGroupSwitchButton=_shouldHideCopyFilesToTargetGroupSwitchButton;
@property BOOL stripOutBuildProductContainerItems; // @synthesize stripOutBuildProductContainerItems=_stripOutBuildProductContainerItems;
@property(retain, nonatomic) IDEGroup *targetGroup; // @synthesize targetGroup=_targetGroup;
@property(copy) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;

@end


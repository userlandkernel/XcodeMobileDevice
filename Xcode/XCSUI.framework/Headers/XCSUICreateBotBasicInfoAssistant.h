//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class XCSUIBotDefinition_BasicInfoEditor, XCSUICreateBotAssistantContext;

@interface XCSUICreateBotBasicInfoAssistant : IDEAssistant
{
    XCSUIBotDefinition_BasicInfoEditor *_basicInfoEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
- (void).cxx_destruct;
- (id)assistantTitle;
@property(retain) XCSUIBotDefinition_BasicInfoEditor *basicInfoEditor; // @synthesize basicInfoEditor=_basicInfoEditor;
- (BOOL)canGoForward;
@property(readonly) XCSUICreateBotAssistantContext *createBotAssistantContext;
- (void)loadView;
- (id)nextAssistantIdentifier;
- (void)primitiveInvalidate;

@end

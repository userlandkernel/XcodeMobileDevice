//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXObject.h>

@class NSString;

@interface XCBreakpointCondition : PBXObject
{
    NSString *_conditionString;
    BOOL _hasError;
}

+ (id)archivableAttributes;
- (id)conditionString;
- (void)dealloc;
- (BOOL)isEditable;
- (BOOL)isValid;
- (void)purify;
- (void)setConditionString:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)setupInSession:(id)arg1 onBreakpoint:(id)arg2 withIdentifier:(long long)arg3;
- (BOOL)useDebuggerSideImplementation;

@end


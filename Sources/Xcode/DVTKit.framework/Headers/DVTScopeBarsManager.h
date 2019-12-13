//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/NSAnimationDelegate-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMapTable, NSMutableArray, NSString, NSViewAnimation;
@protocol DVTScopeBarHost;

@interface DVTScopeBarsManager : NSObject <DVTInvalidation, NSAnimationDelegate>
{
    id <DVTScopeBarHost> _host;
    NSMutableArray *_scopeBarControllers;
    NSMapTable *_contentHeightObservers;
    NSViewAnimation *_currentAnimation;
    CDUnknownBlockType _currentCompletionBlock;
    int _borderSides;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_adjustViewsForHeightOffset:(double)arg1 animate:(BOOL)arg2 extraAnimations:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)animationDidEnd:(id)arg1;
@property(nonatomic) int borderSides; // @synthesize borderSides=_borderSides;
@property(readonly, nonatomic) __weak NSViewAnimation *currentAnimation; // @synthesize currentAnimation=_currentAnimation;
- (BOOL)dismissLastScopeBar;
- (id)init;
- (id)initWithHost:(id)arg1;
- (void)insertScopeBar:(id)arg1 atIndex:(unsigned long long)arg2 animate:(BOOL)arg3;
- (void)primitiveInvalidate;
- (void)removeAllScopeBarsAnimate:(BOOL)arg1;
- (void)removeScopeBar:(id)arg1 animate:(BOOL)arg2;
- (void)removeScopeBar:(id)arg1 animate:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSArray *scopeBarControllers; // @synthesize scopeBarControllers=_scopeBarControllers;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

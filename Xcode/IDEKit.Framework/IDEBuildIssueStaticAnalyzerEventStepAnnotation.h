//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBuildIssueAnnotation.h>

@interface IDEBuildIssueStaticAnalyzerEventStepAnnotation : IDEBuildIssueAnnotation
{
    BOOL _isCurrentStep;
}

+ (id)_currentStepTheme;
+ (id)_nonCurrentStepTheme;
+ (double)precedence;
+ (id)sidebarIcon;
- (id)currentStateInTextView:(id)arg1;
- (id)init;
@property BOOL isCurrentStep; // @synthesize isCurrentStep=_isCurrentStep;
- (BOOL)isHighlightedRangesVisible;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTStackView_AppKitAutolayout, IDEDebugGaugeReportTopSection, IDELaunchSession, NSLayoutConstraint, NSScrollView;
@protocol IDEDebugGaugeReportContentDelegate, IDEDebugGaugeReportTopSectionContentDelegate;

@interface IDEDebugGaugeReportEditor : IDEEditor
{
    IDELaunchSession *_launchSession;
    IDEDebugGaugeReportTopSection *_reportTopSection;
    id <IDEDebugGaugeReportContentDelegate> _contentDelegate;
    id <IDEDebugGaugeReportTopSectionContentDelegate> _topSectionContentDelegate;
    double _minimumWidth;
    NSScrollView *_mainContentScrollView;
    DVTStackView_AppKitAutolayout *_stackView;
    NSLayoutConstraint *_stackViewHeightConstraintToBeRemoved;
    NSLayoutConstraint *_minimumWidthConstraint;
}

+ (void)_profileWithToolIdentifer:(id)arg1 detachOrNew:(unsigned long long)arg2 launchSession:(id)arg3;
- (void).cxx_destruct;
- (void)_fixUpScrollView;
- (void)_handleContentDelegateDidChange;
- (void)attachInstrumentsWithToolIdentifer:(id)arg1;
@property(retain, nonatomic) id <IDEDebugGaugeReportContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)launchSession;
- (void)loadView;
@property __weak NSScrollView *mainContentScrollView; // @synthesize mainContentScrollView=_mainContentScrollView;
@property(readonly) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property __weak NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
- (void)primitiveInvalidate;
@property __weak DVTStackView_AppKitAutolayout *stackView; // @synthesize stackView=_stackView;
@property __weak NSLayoutConstraint *stackViewHeightConstraintToBeRemoved; // @synthesize stackViewHeightConstraintToBeRemoved=_stackViewHeightConstraintToBeRemoved;

@end


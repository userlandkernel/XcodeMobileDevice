//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTStackView_AppKitAutolayout, NSArray;

@interface IDEDistributionOptionsStepViewController : IDEDistributionStepViewController
{
    BOOL canGoNext;
    NSArray *_optionsViewControllers;
    DVTStackView_AppKitAutolayout *_optionsStackView;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
- (void).cxx_destruct;
- (void)_updateCanGoNext;
@property BOOL canGoNext; // @synthesize canGoNext;
- (id)initWithContext:(id)arg1 assistantWindowController:(id)arg2;
- (id)nibName;
@property(retain, nonatomic) DVTStackView_AppKitAutolayout *optionsStackView; // @synthesize optionsStackView=_optionsStackView;
@property(retain, nonatomic) NSArray *optionsViewControllers; // @synthesize optionsViewControllers=_optionsViewControllers;
- (void)primitiveInvalidate;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)title;
- (void)viewDidInstall;
- (void)willGoNext;

@end


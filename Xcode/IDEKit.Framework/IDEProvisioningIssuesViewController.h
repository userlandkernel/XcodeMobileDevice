//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTStackView_ML, IDEVerticalResizeToContentLayoutView;
@protocol IDEProvisioningSigningSelectionDataSource;

@interface IDEProvisioningIssuesViewController : IDEViewController
{
    id <IDEProvisioningSigningSelectionDataSource> _dataSource;
    IDEVerticalResizeToContentLayoutView *_verticalResizingView;
    DVTStackView_ML *_issuesStackView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IDEProvisioningSigningSelectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1;
@property __weak DVTStackView_ML *issuesStackView; // @synthesize issuesStackView=_issuesStackView;
- (void)primitiveInvalidate;
@property(retain) IDEVerticalResizeToContentLayoutView *verticalResizingView; // @synthesize verticalResizingView=_verticalResizingView;
- (void)updateIssuesList;
- (void)viewDidLoad;

@end


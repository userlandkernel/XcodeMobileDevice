//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, NSProgressIndicator, NSTextField;
@protocol IDEProvisioningSigningSelectionDataSource;

@interface IDEProvisioningRepairProgressIndicatorViewController : IDEViewController
{
    id <IDEProvisioningSigningSelectionDataSource> _dataSource;
    NSProgressIndicator *_busyIndicator;
    NSTextField *_busyReasonLabel;
    DVTObservingToken *_repairBusyReasonObserver;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSProgressIndicator *busyIndicator; // @synthesize busyIndicator=_busyIndicator;
@property __weak NSTextField *busyReasonLabel; // @synthesize busyReasonLabel=_busyReasonLabel;
@property(readonly, nonatomic) id <IDEProvisioningSigningSelectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)primitiveInvalidate;
@property(retain, nonatomic) DVTObservingToken *repairBusyReasonObserver; // @synthesize repairBusyReasonObserver=_repairBusyReasonObserver;
- (void)startObservations;
- (void)viewDidLoad;

@end


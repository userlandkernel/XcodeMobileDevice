//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSOrderedSet;

@protocol IDEProvisioningStyleDataSource
@property(readonly, getter=isFinishedLoading) BOOL finishedLoading;
@property(readonly, nonatomic, getter=isProvisioningStyleSelectable) BOOL provisioningStyleSelectable;
@property(readonly) NSArray *provisioningSelectionDataSources;
@property(nonatomic) long long provisioningStyle;
@property(readonly) NSOrderedSet *teams;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSString;
@protocol IDEProvisioningStyleDataSource;

@interface IDEProvisioningPlaceholderViewController : IDEViewController
{
    id <IDEProvisioningStyleDataSource> _dataSource;
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *actionButtonTitle;
- (void)clickedActionButton:(id)arg1;
@property(readonly, nonatomic) id <IDEProvisioningStyleDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1;
@property(readonly, nonatomic) NSString *subtitle;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEProvisioningProfilesViewController, NSSet;

@protocol IDEProvisioningProfilesViewControllerDelegate <NSObject>
- (void)profilesViewController:(IDEProvisioningProfilesViewController *)arg1 downloadProfiles:(NSSet *)arg2;
- (void)profilesViewController:(IDEProvisioningProfilesViewController *)arg1 updateProfiles:(NSSet *)arg2;
@end


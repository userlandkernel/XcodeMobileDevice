//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTPortalProfilePurpose, NSSet;
@protocol IDEProvisionable;

@protocol IDEProvisionableProvider <NSObject>
@property(readonly, nonatomic) DVTPortalProfilePurpose *automaticProvisioningPurpose;
@property(readonly, nonatomic) BOOL finishedLoading;
@property(readonly, nonatomic) NSSet *provisionableDevices;
@property(readonly, nonatomic) NSSet<IDEProvisionable> *provisionables;
@end


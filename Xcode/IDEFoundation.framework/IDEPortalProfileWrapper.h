//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningProfile-Protocol.h>

@class DVTPortalProfile, NSDate, NSString;

@interface IDEPortalProfileWrapper : NSObject <IDEProvisioningProfile>
{
    DVTPortalProfile *_portalProfile;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithPortalProfile:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTeamProfile;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *portalPlatformIdentifier;
@property(readonly, nonatomic) DVTPortalProfile *portalProfile; // @synthesize portalProfile=_portalProfile;
@property(readonly, nonatomic) NSString *portalSubPlatformIdentifier;
@property(readonly, nonatomic) NSString *teamIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


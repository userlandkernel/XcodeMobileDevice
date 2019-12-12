//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEEnhancedProvisioningProfile-Protocol.h>

@class IDEPortalProfileWrapper, NSDate, NSString;
@protocol IDEProvisioningLocalProfileState, IDEProvisioningProfile, IDEProvisioningTeam;

@interface IDEProvisioningSnapshotEnhancedProfile : NSObject <IDEEnhancedProvisioningProfile>
{
    unsigned long long _state;
    id <IDEProvisioningTeam> _team;
    id <IDEProvisioningLocalProfileState> _localState;
    IDEPortalProfileWrapper *_portalProfileWrapper;
    id <IDEProvisioningProfile> _profile;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithTeam:(id)arg1 profile:(id)arg2 state:(unsigned long long)arg3 localState:(id)arg4 portalProfileWrapper:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEnhancedProfile:(id)arg1;
- (BOOL)isTeamProfile;
@property(readonly, nonatomic) id <IDEProvisioningLocalProfileState> localState; // @synthesize localState=_localState;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *portalPlatformIdentifier;
@property(readonly, nonatomic) IDEPortalProfileWrapper *portalProfileWrapper; // @synthesize portalProfileWrapper=_portalProfileWrapper;
@property(readonly, nonatomic) NSString *portalSubPlatformIdentifier;
@property(readonly, nonatomic) id <IDEProvisioningProfile> profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <IDEProvisioningTeam> team; // @synthesize team=_team;
@property(readonly, nonatomic) NSString *teamIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


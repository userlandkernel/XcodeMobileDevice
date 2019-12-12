//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalMember, NSArray, NSSet, NSString;

@interface DVTPortalTeam : NSObject
{
    NSArray *_memberships;
    NSString *_name;
    NSString *_teamID;
    NSString *_type;
    DVTPortalMember *_memberInformation;
    NSArray *_membershipsNonUnique;
}

+ (id)_listService;
+ (id)teamsForSession:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)description;
- (BOOL)dvt_servicesTypeInstanceDidFinishLoading:(id *)arg1;
- (unsigned long long)hash;
- (BOOL)isEnterpriseTeam;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFreeProvisioningTeam;
- (BOOL)isUniversityTeam;
@property(retain, nonatomic) DVTPortalMember *memberInformation; // @synthesize memberInformation=_memberInformation;
- (id)membershipForPlatform:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *memberships; // @synthesize memberships=_memberships;
@property(copy, nonatomic) NSArray *membershipsNonUnique; // @synthesize membershipsNonUnique=_membershipsNonUnique;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSSet *portalPrograms;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (BOOL)supportsOneCertPerMac;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

@end


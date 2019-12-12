//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEProvisioningProfileNameDisambiguator, NSOrderedSet;

@interface IDEProvisioningProfileDisplayGroup : NSObject
{
    IDEProvisioningProfileNameDisambiguator *_disambiguator;
    NSOrderedSet *_eligibleProvisioningProfiles;
    NSOrderedSet *_ineligibleProvisioningProfiles;
}

+ (id)_unionOrderedSetWithMembersFromSourceSet:(id)arg1 otherSet:(id)arg2;
+ (id)groupFromEligibleProvisioningProfiles:(id)arg1 ineligibleProvisioningProfiles:(id)arg2;
- (void).cxx_destruct;
- (id)_headerMenuItemForProfileSet:(id)arg1;
- (id)_menuItemsForProfileSet:(id)arg1;
- (id)_profileMenuItemForProfile:(id)arg1 wantsIndentation:(BOOL)arg2;
- (BOOL)_wantsEligibleMenuItemHeader;
- (BOOL)_wantsIneligibleMenuItemHeader;
- (id)displayNameForProfile:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *eligibleProvisioningProfiles; // @synthesize eligibleProvisioningProfiles=_eligibleProvisioningProfiles;
- (id)groupByMergingSelfWithOtherGroup:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *ineligibleProvisioningProfiles; // @synthesize ineligibleProvisioningProfiles=_ineligibleProvisioningProfiles;
- (id)initWithEligibleProfiles:(id)arg1 ineligibleProfiles:(id)arg2;
- (id)menuItemsForDisplayGroup;

@end


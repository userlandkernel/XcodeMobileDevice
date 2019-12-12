//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface IDEDistributionMethod : NSObject
{
    NSSet *_requiredTeamTypes;
}

- (void).cxx_destruct;
@property(readonly) NSArray *availableICloudEnvironmentsOverride;
@property(readonly) NSString *certificateKind;
@property(readonly) NSString *commandLineName;
@property(readonly) NSString *exportStepName;
@property(readonly) NSString *group;
@property(readonly) NSString *installerCertificateKind;
@property(readonly, getter=isAppStoreBound) BOOL appStoreBound;
- (BOOL)isEntitlementsProcessorApplicable:(id)arg1;
@property(readonly) NSArray *orderedDistributionStepClassNames;
@property(readonly) NSArray *orderedDistributionStepModelClassNames;
@property(readonly) NSArray *orderedDistributionStepViewControllerClassNames;
@property(readonly) NSString *packagingStepIdentifier;
@property(readonly) NSString *provisioningProfilePlatform;
@property(readonly) unsigned long long provisioningProfilePurpose;
@property(readonly) NSDictionary *requiredProfileEntitlements;
@property(readonly) NSSet *requiredTeamTypes; // @synthesize requiredTeamTypes=_requiredTeamTypes;
@property(readonly) NSString *shortTitle;
@property(readonly) double sortOrder;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *summaryPaneNextButtonTitleOverride;
@property(readonly) int supportedTask;
@property(readonly) BOOL supportsCustomToolchains;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
@property(readonly) BOOL supportsFreeProvisioning;
@property(readonly) BOOL supportsManifestDistribution;
@property(readonly) NSString *taskNoun;
@property(readonly) NSString *taskVerb;
@property(readonly) NSString *title;
@property(readonly) long long wantsProvisioningProfiles;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTAppIDFeatures, IDEProvisionableOverrides, NSDictionary, NSOrderedSet, NSString;

@interface IDEProvisionableSnapshot : NSObject
{
    NSString *_name;
    long long _provisioningStyle;
    DVTAppIDFeatures *_appIDFeatures;
    NSOrderedSet *_configurations;
    NSDictionary *_configurationSnapshots;
    IDEProvisionableOverrides *_overrides;
}

+ (id)snapshotFromProvisionable:(id)arg1 overrides:(id)arg2;
- (void).cxx_destruct;
- (BOOL)allowSigningWithoutTeamSelectionForConfigurationNamed:(id)arg1;
@property(readonly, nonatomic) DVTAppIDFeatures *appIDFeatures; // @synthesize appIDFeatures=_appIDFeatures;
- (id)baseEntitlementsForConfigurationNamed:(id)arg1;
- (id)bundleIdentifierForConfigurationNamed:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *configurationSnapshots; // @synthesize configurationSnapshots=_configurationSnapshots;
@property(readonly, nonatomic) NSOrderedSet *configurations; // @synthesize configurations=_configurations;
- (id)entitlementsExpansionForConfigurationNamed:(id)arg1;
- (id)entitlementsFilePathForConfigurationNamed:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) IDEProvisionableOverrides *overrides; // @synthesize overrides=_overrides;
- (id)platformForConfigurationNamed:(id)arg1;
- (long long)profileSupportForConfigurationNamed:(id)arg1;
- (id)provisioningProfileSpecifierForConfigurationNamed:(id)arg1;
@property(readonly, nonatomic) long long provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
- (id)signingCertificateIdentifierForConfigurationNamed:(id)arg1;
- (BOOL)signingRequiresTeamForConfigurationNamed:(id)arg1;
- (id)teamForConfigurationNamed:(id)arg1;

@end


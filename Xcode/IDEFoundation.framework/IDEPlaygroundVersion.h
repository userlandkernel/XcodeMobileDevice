//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTVersion;

@interface IDEPlaygroundVersion : NSObject
{
    BOOL _requiresUserPermissionForUpgrade;
    BOOL _supportsExecutionInFullSimulator;
    BOOL _supportsAuxiliarySources;
    BOOL _supportsDisplayModeToggle;
    BOOL _supportsPlaygroundPages;
    BOOL _supportsOrganizationMetadata;
    BOOL _usesLegacyXMLFormat;
    BOOL _usesDiscreteFilesForSections;
    BOOL _usesTimelineElement;
    DVTVersion *_version;
}

+ (id)_documentVersionsExtensionPoint;
+ (id)_playgroundVersionFromExtension:(id)arg1;
+ (BOOL)_readBoolForKey:(id)arg1 fromExtension:(id)arg2;
+ (id)knownPlaygroundVersions;
+ (id)latestPlaygroundVersion;
+ (id)playgroundVersionForVersion:(id)arg1;
- (void).cxx_destruct;
@property(readonly) BOOL canBeImplicitlyUpgraded;
@property(readonly) BOOL canBeMigrated;
@property(readonly) BOOL canBeUpgraded;
@property(readonly) BOOL canSupportOrganizationalMetadataWithImplicitUpgrade;
- (id)description;
@property BOOL requiresUserPermissionForUpgrade; // @synthesize requiresUserPermissionForUpgrade=_requiresUserPermissionForUpgrade;
@property BOOL supportsAuxiliarySources; // @synthesize supportsAuxiliarySources=_supportsAuxiliarySources;
@property BOOL supportsDisplayModeToggle; // @synthesize supportsDisplayModeToggle=_supportsDisplayModeToggle;
@property BOOL supportsExecutionInFullSimulator; // @synthesize supportsExecutionInFullSimulator=_supportsExecutionInFullSimulator;
@property BOOL supportsOrganizationMetadata; // @synthesize supportsOrganizationMetadata=_supportsOrganizationMetadata;
@property BOOL supportsPlaygroundPages; // @synthesize supportsPlaygroundPages=_supportsPlaygroundPages;
@property BOOL usesDiscreteFilesForSections; // @synthesize usesDiscreteFilesForSections=_usesDiscreteFilesForSections;
@property BOOL usesLegacyXMLFormat; // @synthesize usesLegacyXMLFormat=_usesLegacyXMLFormat;
@property BOOL usesTimelineElement; // @synthesize usesTimelineElement=_usesTimelineElement;
@property(retain) DVTVersion *version; // @synthesize version=_version;

@end


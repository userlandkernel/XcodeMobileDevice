//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTAppIDFeatures, DVTDevice, DVTFilePath, DVTPlatform, DVTSigningCertificate, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSURL;
@protocol DVTProvisioningProfile;

@protocol DVTProvisioningProfile <NSObject>
@property(readonly) NSString *UUID;
- (BOOL)allowsFeatures:(DVTAppIDFeatures *)arg1 missingFeatures:(id *)arg2;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSArray *appIdentifierPrefixes;
- (BOOL)canBeInstalledOnDevice:(DVTDevice *)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(NSString *)arg1;
@property(readonly) NSArray *certificates;
- (long long)compare:(id <DVTProvisioningProfile>)arg1;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (BOOL)containsSigningCertificate:(DVTSigningCertificate *)arg1;
@property(readonly) NSDate *creationDate;
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) NSData *dataRepresentation;
- (long long)dateCompare:(id <DVTProvisioningProfile>)arg1;
- (long long)dateCompareDecending:(id <DVTProvisioningProfile>)arg1;
@property(readonly) DVTPlatform *dvt_platform;
@property(readonly) NSDictionary *entitlements;
@property(readonly) NSDate *expirationDate;
@property(readonly) BOOL expired;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) DVTAppIDFeatures *features;
@property(readonly, copy) DVTFilePath *filePath;
- (BOOL)hasCertificateMatchingIdentity:(NSString *)arg1 includeExpired:(BOOL)arg2;
@property(readonly) NSArray *identityCertificates;
@property(readonly) NSArray *identitySigningCertificates;
- (BOOL)isAppleInternal;
@property(readonly) BOOL isApplicationGroupsEnabled;
@property(readonly) BOOL isAssociatedDomainsEnabled;
@property(readonly) BOOL isDataProtectionEnabled;
@property(readonly) BOOL isGameCenterEnabled;
@property(readonly) BOOL isHealthKitEnabled;
@property(readonly) BOOL isHomeKitEnabled;
@property(readonly) BOOL isICloudEnabled;
@property(readonly) BOOL isInterAppAudioEnabled;
@property(readonly) BOOL isKeychainAccessGroupsEnabled;
@property(readonly) BOOL isMacProfile;
@property(readonly) BOOL isMapsEnabled;
@property(readonly) BOOL isOMCEnabled;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isPushEnabled;
@property(readonly) BOOL isSiriEnabled;
@property(readonly) BOOL isUniversal;
@property(readonly) BOOL isVPNLiteEnabled;
@property(readonly) BOOL isWACEnabled;
- (BOOL)isXcodeManaged;
@property(readonly, copy) NSString *localPath;
- (long long)localizedCompare:(id <DVTProvisioningProfile>)arg1;
- (NSString *)longDescription;
- (BOOL)matchesBundleIdentifier:(NSString *)arg1;
@property(readonly) NSString *name;
@property(readonly) NSString *platform;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) NSArray *signingCertificates;
@property(readonly) NSSet *supportedUDIDs;
@property(readonly) NSString *teamID;
@property(readonly) NSArray *teamIdentifierPrefixes;
@property(readonly) NSString *teamName;
@property(readonly) BOOL usesExplicitAppIdentifier;
@property(readonly) int version;
@property(readonly) BOOL willExpireSoon;
- (BOOL)writeToFile:(NSString *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@end


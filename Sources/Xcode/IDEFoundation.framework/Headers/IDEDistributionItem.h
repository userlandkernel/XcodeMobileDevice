//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTFilePath, NSArray, NSDictionary, NSString;

@interface IDEDistributionItem : NSObject <NSCopying>
{
    BOOL _canHaveProvisioningProfile;
    BOOL _hasProvisioningProfile;
    DVTFilePath *_path;
    DVTFilePath *_machOPath;
    IDEDistributionItem *_parent;
    NSArray *_childItems;
    NSString *_teamID;
    NSString *_appID;
    NSString *_appIDWithoutPrefix;
    NSDictionary *_infoDictionary;
    NSDictionary *_entitlements;
    NSDictionary *_archivedUserEntitlements;
}

+ (id)_distributionItemForPath:(id)arg1 pathsToItems:(id)arg2 pathsToChildPaths:(id)arg3 logAspect:(id)arg4 error:(id *)arg5;
+ (id)archivedUserEntitlementsForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)canHaveProvisioningProfileForItemAtPath:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
+ (id)embeddedProvisioningProfileForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)flattenDistributionItems:(id)arg1;
+ (id)itemWithPath:(id)arg1 childItems:(id)arg2 logAspect:(id)arg3 error:(id *)arg4;
+ (id)machOFileTypesAtPath:(id)arg1 error:(id *)arg2;
+ (id)platformForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)topLevelDistributionItemsFromProductsRoot:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *appIDWithoutPrefix; // @synthesize appIDWithoutPrefix=_appIDWithoutPrefix;
@property(readonly, nonatomic) NSDictionary *archivedUserEntitlements; // @synthesize archivedUserEntitlements=_archivedUserEntitlements;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) BOOL canHaveProvisioningProfile; // @synthesize canHaveProvisioningProfile=_canHaveProvisioningProfile;
@property(readonly, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) BOOL hasProvisioningProfile; // @synthesize hasProvisioningProfile=_hasProvisioningProfile;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
- (id)init;
- (id)initWithPath:(id)arg1 infoDictionary:(id)arg2 canHaveProvisioningProfile:(BOOL)arg3 hasProvisioningProfile:(BOOL)arg4 teamID:(id)arg5 appID:(id)arg6 appIDWithoutPrefix:(id)arg7 entitlements:(id)arg8 archivedUserEntitlements:(id)arg9 childItems:(id)arg10;
- (id)isAppleProvidedContentFromArchive:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) DVTFilePath *machOPath; // @synthesize machOPath=_machOPath;
@property __weak IDEDistributionItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) DVTFilePath *path; // @synthesize path=_path;
- (id)platformWithError:(id *)arg1;
@property(readonly, nonatomic) BOOL shouldRetrieveTeamIDForSigning;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;

@end


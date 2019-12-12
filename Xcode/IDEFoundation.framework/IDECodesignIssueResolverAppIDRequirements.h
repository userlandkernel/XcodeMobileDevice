//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTAppIDFeatures, NSDictionary, NSString;

@interface IDECodesignIssueResolverAppIDRequirements : NSObject
{
    BOOL _forceExplicitAppID;
    NSString *_bundleIdentifier;
    NSDictionary *_requiredEntitlements;
    DVTAppIDFeatures *_requiredFeatures;
    unsigned long long _profilePurpose;
}

+ (id)appIDRequirementsWithBundleIdentifier:(id)arg1 entitlements:(id)arg2 features:(id)arg3 profilePurpose:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;
@property BOOL forceExplicitAppID; // @synthesize forceExplicitAppID=_forceExplicitAppID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property unsigned long long profilePurpose; // @synthesize profilePurpose=_profilePurpose;
@property(retain) NSDictionary *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(retain) DVTAppIDFeatures *requiredFeatures; // @synthesize requiredFeatures=_requiredFeatures;

@end


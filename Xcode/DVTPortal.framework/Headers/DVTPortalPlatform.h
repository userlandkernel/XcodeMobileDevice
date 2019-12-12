//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, DVTPortalProgram, NSDictionary, NSSet, NSString;

@interface DVTPortalPlatform : NSObject
{
    NSString *_xcodeportalIdentifier;
    NSString *_provisioningProfilePlatformIdentifier;
    NSString *_portalSubplatformIdentifier;
    NSSet *_portalDeviceClasses;
    NSDictionary *_profileTypesByPurposeName;
    NSString *_identifier;
    DVTPlatform *_platform;
    NSString *_parentPlatformIdentifier;
}

+ (id)_extensionPointIdentifierToPortalPlatformMap;
+ (id)_platformIdentifierToPortalPlatformsMap;
+ (id)_portalIdentifierToPortalPlatformsMap;
+ (id)portalPlatformWithIdentifier:(id)arg1;
+ (id)portalPlatformWithPlatform:(id)arg1;
+ (id)portalPlatforms;
+ (id)portalPlatformsForPortalPrograms:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *parentPlatformIdentifier; // @synthesize parentPlatformIdentifier=_parentPlatformIdentifier;
- (id)parentPortalPlatform;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSSet *portalDeviceClasses; // @synthesize portalDeviceClasses=_portalDeviceClasses;
@property(readonly, nonatomic) DVTPortalProgram *portalProgram;
@property(readonly, nonatomic) NSString *portalSubplatformIdentifier; // @synthesize portalSubplatformIdentifier=_portalSubplatformIdentifier;
- (id)profileTypeForPurpose:(id)arg1;
@property(readonly, nonatomic) NSDictionary *profileTypesByPurposeName; // @synthesize profileTypesByPurposeName=_profileTypesByPurposeName;
@property(readonly, nonatomic) NSString *provisioningProfilePlatformIdentifier; // @synthesize provisioningProfilePlatformIdentifier=_provisioningProfilePlatformIdentifier;
@property(readonly) NSString *xcodeportalIdentifier; // @synthesize xcodeportalIdentifier=_xcodeportalIdentifier;

@end


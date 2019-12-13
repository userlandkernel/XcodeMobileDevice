//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalCertificateType, DVTPortalTeam, DVTSigningCertificate, NSDate, NSString;

@interface DVTPortalCertificate : NSObject
{
    NSString *_name;
    DVTPortalTeam *_team;
    DVTSigningCertificate *_signingCertificate;
    DVTPortalCertificateType *_portalCertificateType;
    NSDate *_expirationDate;
    NSString *_serialNumber;
    NSString *_machineName;
    NSString *_machineID;
    NSString *_portalID;
    NSString *_status;
}

+ (id)certificatesForSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
+ (id)errorForCreatePermissionsFailureWithName:(id)arg1;
+ (id)errorForNoMatchingCertificate;
+ (id)errorForRevocationPermissionsFailureWithName:(id)arg1;
+ (id)teamDevelopmentCertificateWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(copy, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) DVTPortalCertificateType *portalCertificateType; // @synthesize portalCertificateType=_portalCertificateType;
@property(readonly, copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
- (BOOL)revokeWithSession:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;

@end

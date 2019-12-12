//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTSigningCertificate.h>

#import <IDEFoundation/IDEProvisioningLocalIdentityState-Protocol.h>
#import <IDEFoundation/IDEProvisioningSigningIdentity-Protocol.h>

@class NSDate, NSString;

@interface DVTSigningCertificate (IDEDVTSigningCertificate) <IDEProvisioningSigningIdentity, IDEProvisioningLocalIdentityState>
@property(readonly, nonatomic) DVTSigningCertificate *signingCertificate;
@property(readonly, copy, nonatomic) NSString *teamMemberID;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *certificateKind;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly) Class superclass;
@end


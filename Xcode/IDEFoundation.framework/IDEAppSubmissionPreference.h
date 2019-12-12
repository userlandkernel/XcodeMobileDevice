//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEAppSubmissionPreference : NSObject
{
    BOOL _developerWantsBitCodeSubmitted;
    long long _appStoreStrippingSupportLevelMachineCode;
    long long _appStoreStrippingSupportLevelBitCode;
    long long _appStoreOnDemandResourcesSupportLevel;
}

@property(readonly) long long appStoreOnDemandResourcesSupportLevel; // @synthesize appStoreOnDemandResourcesSupportLevel=_appStoreOnDemandResourcesSupportLevel;
@property(readonly) long long appStoreStrippingSupportLevelBitCode; // @synthesize appStoreStrippingSupportLevelBitCode=_appStoreStrippingSupportLevelBitCode;
@property(readonly) long long appStoreStrippingSupportLevelMachineCode; // @synthesize appStoreStrippingSupportLevelMachineCode=_appStoreStrippingSupportLevelMachineCode;
- (id)description;
@property(readonly) BOOL developerWantsBitCodeSubmitted; // @synthesize developerWantsBitCodeSubmitted=_developerWantsBitCodeSubmitted;
- (unsigned long long)hash;
- (id)initWithAppStoreStrippingSupportLevelMachineCode:(long long)arg1 appStoreStrippingSupportLevelBitCode:(long long)arg2 developerWantsBitCodeSubmitted:(BOOL)arg3 appStoreOnDemandResourcesSupportLevel:(long long)arg4;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long strippingOptions;

@end


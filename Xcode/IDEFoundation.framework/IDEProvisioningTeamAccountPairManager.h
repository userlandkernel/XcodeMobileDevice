//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDeveloperAccountManager, DVTDispatchLock, DVTObservingToken, DVTStackBacktrace, IDEProvisioningPortal, IDEProvisioningSessionManager, NSMutableDictionary, NSString;

@interface IDEProvisioningTeamAccountPairManager : NSObject <DVTInvalidation>
{
    DVTDispatchLock *_lock;
    DVTObservingToken *_accountsToken;
    NSMutableDictionary *_teamIDToPairMap;
    DVTDeveloperAccountManager *_accountManager;
    IDEProvisioningSessionManager *_sessionManager;
    IDEProvisioningPortal *_portal;
}

+ (void)initialize;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_errorForNoAccounts;
- (id)_pairForTeam:(id)arg1 error:(id *)arg2;
- (id)_teamIDToPairMapForTesting;
@property(readonly, nonatomic) DVTDeveloperAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (id)initWithAccountManager:(id)arg1;
- (id)pairForTeam:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) IDEProvisioningPortal *portal; // @synthesize portal=_portal;
- (void)primitiveInvalidate;
@property(retain, nonatomic) IDEProvisioningSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer, NSURL, XCSService;

@interface XCSLocalService : NSObject
{
    XCSService *_cachedService;
    NSTimer *_maintenanceTaskTimer;
    BOOL _isPerformingMaintenanceTask;
    BOOL _attemptGuestAuthentication;
    BOOL _presumedDisconnected;
    NSArray *_fetchedBots;
    NSString *_versionsDisplayString;
    NSString *_platformsDisplayString;
    NSArray *_currentMaintenanceTasks;
    NSString *_displayName;
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _serviceInfoCallback;
    NSArray *_upcomingIntegrations;
    CDUnknownBlockType _botWasCreatedOrDeletedOrFetchedCallback;
    CDUnknownBlockType _botIntegrationWasCreatedOrDeletedCallback;
    CDUnknownBlockType _statusChangedCallback;
    CDUnknownBlockType _advisoryStatusChangedCallback;
    CDUnknownBlockType _buildQueueCallback;
}

+ (void)initialize;
+ (void)resetSharedItems;
+ (id)sharedItemWithService:(id)arg1;
- (void).cxx_destruct;
- (void)_observeLocalBot:(id)arg1;
- (void)_pollServiceForMaintenaceTasks:(id)arg1;
- (void)_updateBuildQueue;
@property(copy, nonatomic) CDUnknownBlockType advisoryStatusChangedCallback; // @synthesize advisoryStatusChangedCallback=_advisoryStatusChangedCallback;
@property(nonatomic) BOOL attemptGuestAuthentication; // @synthesize attemptGuestAuthentication=_attemptGuestAuthentication;
@property(copy, nonatomic) CDUnknownBlockType botIntegrationWasCreatedOrDeletedCallback; // @synthesize botIntegrationWasCreatedOrDeletedCallback=_botIntegrationWasCreatedOrDeletedCallback;
@property(copy, nonatomic) CDUnknownBlockType botWasCreatedOrDeletedOrFetchedCallback; // @synthesize botWasCreatedOrDeletedOrFetchedCallback=_botWasCreatedOrDeletedOrFetchedCallback;
@property(copy, nonatomic) CDUnknownBlockType buildQueueCallback; // @synthesize buildQueueCallback=_buildQueueCallback;
- (void)clearTimer;
@property(readonly, nonatomic) NSString *clientUUID;
@property(readonly, nonatomic) NSString *connectionAddress;
@property(retain, nonatomic) NSArray *currentMaintenanceTasks; // @synthesize currentMaintenanceTasks=_currentMaintenanceTasks;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL enabled;
- (void)fetchServerInfo:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSArray *fetchedBots; // @synthesize fetchedBots=_fetchedBots;
- (void)flushLocalData;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithService:(id)arg1;
@property(nonatomic) BOOL isPerformingMaintenanceTask; // @synthesize isPerformingMaintenanceTask=_isPerformingMaintenanceTask;
@property(readonly, nonatomic) BOOL isResolved;
@property(readonly, nonatomic) BOOL isResolving;
@property(retain, nonatomic) NSString *lastCreatedBotID;
- (void)loginWithStoredCredentials:(CDUnknownBlockType)arg1;
- (void)logout:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL messageChannelConnected;
@property(readonly, nonatomic) NSString *name;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *platformsDisplayString; // @synthesize platformsDisplayString=_platformsDisplayString;
- (void)pollServiceForMaintenaceTasks;
- (void)populateBots:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL presumedDisconnected; // @synthesize presumedDisconnected=_presumedDisconnected;
@property(readonly, nonatomic) XCSService *service;
@property(copy, nonatomic) CDUnknownBlockType serviceInfoCallback; // @synthesize serviceInfoCallback=_serviceInfoCallback;
@property(copy, nonatomic) CDUnknownBlockType statusChangedCallback; // @synthesize statusChangedCallback=_statusChangedCallback;
@property(retain, nonatomic) NSArray *upcomingIntegrations; // @synthesize upcomingIntegrations=_upcomingIntegrations;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *versionsDisplayString; // @synthesize versionsDisplayString=_versionsDisplayString;
- (void)updateFetchedBots:(id)arg1;
@property(readonly, nonatomic) NSURL *url;

@end

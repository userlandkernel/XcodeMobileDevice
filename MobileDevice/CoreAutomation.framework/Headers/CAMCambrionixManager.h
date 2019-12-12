//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CAMCambrionixManager : NSObject
{
    NSMutableDictionary *_physicallyAttachedHubs;
    NSMutableDictionary *_hubsLocationID;
    NSMutableDictionary *_availableHubObjects;
}

+ (id)findBusmanPort:(id)arg1;
+ (id)getManager;
+ (id)getManager:(long long)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
- (void)_addToPhysicallyAttachedHubs:(id)arg1;
- (void)_hubAddedWithRefCon:(void *)arg1 andIterator:(unsigned int)arg2;
@property(readonly) NSMutableDictionary *availableHubObjects; // @synthesize availableHubObjects=_availableHubObjects;
- (void)chargeAll;
- (void)chargeExisting;
- (void)connectAll;
- (void)connectExisting;
- (void)disconnectAll;
- (void)disconnectExisting;
- (id)getAllAddressesWithTypes;
- (id)getAllControllers;
- (id)getAvailableHubObjects;
- (id)getBusmanAddresses;
- (id)getBusmanControllers;
- (id)getBusmanXLAddresses;
- (id)getBusmanXLControllers;
- (id)getController:(id)arg1 classType:(Class)arg2 error:(out id *)arg3;
- (id)getController:(id)arg1 grandParentVendor:(long long)arg2 grandParentProduct:(long long)arg3 error:(id *)arg4;
- (id)getController:(id)arg1 targetVendor:(long long)arg2 targetProduct:(long long)arg3 error:(out id *)arg4;
- (id)getHubsLocationID;
- (id)getPhysicallyAttachedHubs;
- (void)highPowerCharge;
@property(readonly) NSMutableDictionary *hubsLocationID; // @synthesize hubsLocationID=_hubsLocationID;
- (id)init:(long long)arg1 error:(out id *)arg2;
- (void)initNotifications:(long long)arg1;
@property(readonly) NSMutableDictionary *physicallyAttachedHubs; // @synthesize physicallyAttachedHubs=_physicallyAttachedHubs;
- (void)setupNotifications;
- (BOOL)testFTDIDriver:(id *)arg1;

@end

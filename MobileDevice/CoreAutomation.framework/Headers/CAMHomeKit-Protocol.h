//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturn, CAMReturnArray, CAMReturnBool, CAMReturnInteger, CAMReturnString, CAMReturnVoid, NSArray, NSDictionary, NSNumber, NSString;

@protocol CAMHomeKit

@optional
- (CAMReturnVoid *)acceptInvite:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)accessoryExists:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnArray *)accessoryLayoutForHome:(NSString *)arg1;
- (CAMReturnString *)accessoryRoom:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnBool *)actionSetExists:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnBool *)actionSetExists:(NSString *)arg1 inTrigger:(NSString *)arg2 inHome:(NSString *)arg3;
- (CAMReturnVoid *)addAccessory:(NSString *)arg1 password:(NSString *)arg2 toHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)addAccessory:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)addActionSet:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)addActionSet:(NSString *)arg1 toTrigger:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)addCharacteristicWriteAction:(id)arg1 characteristic:(NSString *)arg2 actionSet:(NSString *)arg3 service:(NSString *)arg4 accessory:(NSString *)arg5 home:(NSString *)arg6 withTimeout:(NSNumber *)arg7;
- (CAMReturnVoid *)addCharacteristicWriteActions:(NSDictionary *)arg1 actionSet:(NSString *)arg2 service:(NSString *)arg3 accessory:(NSString *)arg4 home:(NSString *)arg5 withTimeout:(NSNumber *)arg6;
- (CAMReturnVoid *)addEventTrigger:(NSString *)arg1 events:(NSArray *)arg2 conditions:(NSString *)arg3 locations:(NSArray *)arg4 toHome:(NSString *)arg5 withTimeout:(NSNumber *)arg6;
- (CAMReturnVoid *)addHome:(NSString *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnVoid *)addRoom:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)addRoom:(NSString *)arg1 toZone:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)addService:(NSString *)arg1 toServiceGroup:(NSString *)arg2 accessory:(NSString *)arg3 inHome:(NSString *)arg4 withTimeout:(NSNumber *)arg5;
- (CAMReturnVoid *)addServiceGroup:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)addTimerTrigger:(NSString *)arg1 date:(NSString *)arg2 interval:(NSNumber *)arg3 timeZone:(NSString *)arg4 toHome:(NSString *)arg5 withTimeout:(NSNumber *)arg6;
- (CAMReturnVoid *)addUser:(NSString *)arg1 toHome:(NSString *)arg2 confirmation:(NSNumber *)arg3 isAdministrator:(NSNumber *)arg4 withTimeout:(NSNumber *)arg5;
- (CAMReturnVoid *)addZone:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnString *)bridgeForAccessory:(NSString *)arg1 forHome:(NSString *)arg2;
- (CAMReturnVoid *)cancelInvite:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)characteristicWriteActionExists:(id)arg1 characteristicType:(NSString *)arg2 actionSet:(NSString *)arg3 service:(NSString *)arg4 accessory:(NSString *)arg5 home:(NSString *)arg6;
- (CAMReturnVoid *)declineInvite:(NSString *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)disableTrigger:(NSString *)arg1 inHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnString *)dumpAll;
- (CAMReturnVoid *)enableNotification:(NSNumber *)arg1 characteristic:(NSString *)arg2 service:(NSString *)arg3 accessory:(NSString *)arg4 home:(NSString *)arg5 withTimeout:(NSNumber *)arg6;
- (CAMReturnBool *)enableRemoteAccess:(NSString *)arg1 enable:(BOOL)arg2;
- (CAMReturnVoid *)enableTrigger:(NSString *)arg1 inHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)executeActionSet:(NSString *)arg1 inHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)homeExists:(NSString *)arg1;
- (CAMReturnString *)homes;
- (CAMReturnBool *)inviteExists:(NSString *)arg1 toHome:(NSString *)arg2;
- (CAMReturnVoid *)inviteUsers:(NSArray *)arg1 toHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)isAccessoryBlocked:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnBool *)isAccessoryBridged:(NSString *)arg1 forHome:(NSString *)arg2;
- (CAMReturnBool *)isAccessoryReachable:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnBool *)isNotificationEnabled:(NSString *)arg1 service:(NSString *)arg2 accessory:(NSString *)arg3 home:(NSString *)arg4;
- (CAMReturnString *)primaryHome;
- (CAMReturn *)readCharacteristic:(NSString *)arg1 service:(NSString *)arg2 accessory:(NSString *)arg3 home:(NSString *)arg4 withTimeout:(NSNumber *)arg5;
- (CAMReturn *)readCharacteristic:(NSString *)arg1 serviceUUID:(NSString *)arg2 accessory:(NSString *)arg3 home:(NSString *)arg4 withTimeout:(NSNumber *)arg5;
- (CAMReturnVoid *)removeAccessory:(NSString *)arg1 fromHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)removeActionSet:(NSString *)arg1 fromHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)removeActionSet:(NSString *)arg1 fromTrigger:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)removeCharacteristicWriteActionFromActionSet:(NSString *)arg1 characteristicType:(NSString *)arg2 service:(NSString *)arg3 accessory:(NSString *)arg4 home:(NSString *)arg5 withTimeout:(NSNumber *)arg6;
- (CAMReturnVoid *)removeHome:(NSString *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnVoid *)removeRoom:(NSString *)arg1 fromHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)removeRoom:(NSString *)arg1 fromZone:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)removeService:(NSString *)arg1 fromServiceGroup:(NSString *)arg2 accessory:(NSString *)arg3 inHome:(NSString *)arg4 withTimeout:(NSNumber *)arg5;
- (CAMReturnVoid *)removeServiceGroup:(NSString *)arg1 fromHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)removeTrigger:(NSString *)arg1 fromHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)removeUser:(NSString *)arg1 fromHome:(NSString *)arg2 confirmation:(NSNumber *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)removeZone:(NSString *)arg1 fromHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)renameAccessory:(NSString *)arg1 name:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)renameActionSet:(NSString *)arg1 newName:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)renameHome:(NSString *)arg1 newName:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)renameRoom:(NSString *)arg1 newName:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)renameServiceGroup:(NSString *)arg1 newName:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)renameTrigger:(NSString *)arg1 newName:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)renameZone:(NSString *)arg1 newName:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)replaceCharacteristicWriteAction:(id)arg1 characteristicType:(NSString *)arg2 actionSet:(NSString *)arg3 service:(NSString *)arg4 accessory:(NSString *)arg5 home:(NSString *)arg6 withTimeout:(NSNumber *)arg7;
- (CAMReturnVoid *)resetConfiguration:(NSNumber *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnBool *)roomExists:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnBool *)roomExists:(NSString *)arg1 inZone:(NSString *)arg2 inHome:(NSString *)arg3;
- (CAMReturnString *)roomForEntireHome:(NSString *)arg1;
- (CAMReturnString *)serviceAssociatedServiceType:(NSNumber *)arg1 accessory:(NSString *)arg2 inHome:(NSString *)arg3;
- (CAMReturnBool *)serviceExists:(NSString *)arg1 inServiceGroup:(NSString *)arg2 home:(NSString *)arg3;
- (CAMReturnBool *)serviceGroupExists:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnString *)serviceName:(NSNumber *)arg1 accessory:(NSString *)arg2 inHome:(NSString *)arg3;
- (CAMReturnVoid *)setAccessoryRoom:(NSString *)arg1 accessory:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)setPrimaryHome:(NSString *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnVoid *)setServiceAssociatedServiceType:(NSString *)arg1 index:(NSNumber *)arg2 accessory:(NSString *)arg3 inHome:(NSString *)arg4 withTimeout:(NSNumber *)arg5;
- (CAMReturnVoid *)setServiceName:(NSString *)arg1 index:(NSNumber *)arg2 accessory:(NSString *)arg3 inHome:(NSString *)arg4 withTimeout:(NSNumber *)arg5;
- (CAMReturnVoid *)setTriggerState:(NSNumber *)arg1 forTrigger:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnBool *)setupHomeManager;
- (CAMReturnBool *)triggerExists:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnString *)triggerFireDate:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnInteger *)triggerInterval:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnBool *)triggerState:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturnVoid *)unblockAccessory:(NSString *)arg1 inHome:(NSString *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)updateTimerTrigger:(NSString *)arg1 fireDate:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)updateTimerTrigger:(NSString *)arg1 interval:(NSNumber *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)updateTimerTrigger:(NSString *)arg1 timeZone:(NSString *)arg2 inHome:(NSString *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnBool *)userExists:(NSString *)arg1 inHome:(NSString *)arg2;
- (CAMReturn *)valueForCharacteristic:(NSString *)arg1 service:(NSString *)arg2 accessory:(NSString *)arg3 home:(NSString *)arg4;
- (CAMReturnVoid *)writeValue:(id)arg1 characteristic:(NSString *)arg2 service:(NSString *)arg3 accessory:(NSString *)arg4 home:(NSString *)arg5 withTimeout:(NSNumber *)arg6;
- (CAMReturnVoid *)writeValue:(id)arg1 characteristic:(NSString *)arg2 serviceUUID:(NSString *)arg3 accessory:(NSString *)arg4 home:(NSString *)arg5 withTimeout:(NSNumber *)arg6;
- (CAMReturnBool *)zoneExists:(NSString *)arg1 inHome:(NSString *)arg2;
@end

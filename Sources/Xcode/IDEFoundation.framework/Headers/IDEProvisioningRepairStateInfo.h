//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEProvisioningUserAction, NSError, NSString;
@protocol IDERepairable;

@interface IDEProvisioningRepairStateInfo : NSObject
{
    id <IDERepairable> _repairable;
    long long _state;
    NSString *_stepDescription;
    IDEProvisioningUserAction *_userAction;
    NSError *_error;
}

+ (id)repairStateWithRepairable:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) id <IDERepairable> repairable; // @synthesize repairable=_repairable;
@property long long state; // @synthesize state=_state;
@property(retain) NSString *stepDescription; // @synthesize stepDescription=_stepDescription;
@property(retain) IDEProvisioningUserAction *userAction; // @synthesize userAction=_userAction;

@end

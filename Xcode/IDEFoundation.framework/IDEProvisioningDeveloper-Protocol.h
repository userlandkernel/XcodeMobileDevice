//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTDeveloperAccount, NSSet, NSString;

@protocol IDEProvisioningDeveloper <NSObject>
@property(readonly) DVTDeveloperAccount *account;
@property(readonly) NSSet *teams;
@property(readonly) NSString *username;
@end

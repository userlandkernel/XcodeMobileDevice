//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAccountTeamPickerRowBase.h>

@class NSString;
@protocol IDEProvisioningTeam;

@interface IDEPickerTeamRow : IDEAccountTeamPickerRowBase
{
    BOOL _wantsCheckbox;
    id <IDEProvisioningTeam> _team;
    NSString *_teamName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IDEProvisioningTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(nonatomic) BOOL wantsCheckbox; // @synthesize wantsCheckbox=_wantsCheckbox;

@end

